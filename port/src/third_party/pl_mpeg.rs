//! PL_MPEG - MPEG1 Video decoder, MP2 Audio decoder, MPEG-PS demuxer
//! SPDX-License-Identifier: MIT
//!
//! Dominic Szablewski - https://phoboslab.org
//!
//! A Rust translation of the parts of pl_mpeg.h (https://github.com/phoboslab/pl_mpeg,
//! commit c871f2b) that the game uses: the high-level `plm_*` player reading an MPEG-PS
//! file, the demuxer, the MPEG-1 video decoder and the MP2 audio decoder.
//!
//! The MIT License (MIT)
//!
//! Copyright (c) 2019 Dominic Szablewski
//!
//! Permission is hereby granted, free of charge, to any person obtaining a copy of this
//! software and associated documentation files (the "Software"), to deal in the Software
//! without restriction, including without limitation the rights to use, copy, modify,
//! merge, publish, distribute, sublicense, and/or sell copies of the Software, and to
//! permit persons to whom the Software is furnished to do so, subject to the following
//! conditions:
//!
//! The above copyright notice and this permission notice shall be included in all copies
//! or substantial portions of the Software.
//!
//! THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
//! INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
//! PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//! HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
//! CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
//! OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

use std::cell::RefCell;
use std::fs::File;
use std::io::{Read, Seek, SeekFrom};
use std::rc::Rc;

// -----------------------------------------------------------------------------
// Public Data Types

/// Demuxed MPEG PS packet
/// The type maps directly to the various MPEG-PES start codes. PTS is the
/// presentation time stamp of the packet in seconds. Note that not all packets
/// have a PTS value, indicated by PACKET_INVALID_TS.
pub const PACKET_INVALID_TS: f64 = -1.0;

/// Decoded Video Plane
/// The byte length of the data is width * height. Note that different planes
/// have different sizes: the Luma plane (Y) is double the size of each of
/// the two Chroma planes (Cr, Cb) - i.e. 4 times the byte length.
/// Also note that the size of the plane does *not* denote the size of the
/// displayed frame. The sizes of planes are always rounded up to the nearest
/// macroblock (16px).
pub struct Plane<'a> {
	pub width: u32,
	pub height: u32,
	pub data: &'a [u8],
}

/// Decoded Video Frame
/// width and height denote the desired display size of the frame. This may be
/// different from the internal size of the 3 planes.
pub struct Frame<'a> {
	pub time: f64,
	pub width: u32,
	pub height: u32,
	pub y: Plane<'a>,
	pub cr: Plane<'a>,
	pub cb: Plane<'a>,
}

/// Decoded Audio Samples
/// Samples are stored as normalized (-1, 1) float interleaved.
/// The `count` is always AUDIO_SAMPLES_PER_FRAME and just there for
/// convenience.
pub const AUDIO_SAMPLES_PER_FRAME: usize = 1152;

pub struct Samples {
	pub time: f64,
	pub count: u32,
	pub interleaved: [f32; AUDIO_SAMPLES_PER_FRAME * 2],
}

const BUFFER_DEFAULT_SIZE: usize = 128 * 1024;

// -----------------------------------------------------------------------------
// plm (high-level interface) implementation

/// The demuxer and what the packet-fed buffers of the decoders need to pull more
/// packets from it: `plm_read_packets` writes into both decoder buffers, so the
/// writes meant for the buffer that isn't loading are queued and applied before
/// its decoder runs next.
struct Feed {
	demux: Demux,
	video_packet_type: i32,
	audio_packet_type: i32,
	has_buffer: [bool; 2],
	pending: [Vec<Pending>; 2],
}

enum Pending {
	Write(Vec<u8>),
	SignalEnd,
}

const STREAM_VIDEO: usize = 0;
const STREAM_AUDIO: usize = 1;

impl Feed {
	fn packet_type(&self, stream: usize) -> i32 {
		if stream == STREAM_VIDEO { self.video_packet_type } else { self.audio_packet_type }
	}

	fn read_packets(&mut self, requested_type: i32, stream: usize, own: &mut Buffer) {
		while let Some(packet) = self.demux.decode() {
			let target = if packet.type_ == self.video_packet_type {
				Some(STREAM_VIDEO)
			} else if packet.type_ == self.audio_packet_type {
				Some(STREAM_AUDIO)
			} else {
				None
			};
			if let Some(t) = target {
				let data = &self.demux.buffer.bytes[packet.data..packet.data + packet.length];
				if t == stream {
					own.write(data);
				} else if self.has_buffer[t] {
					self.pending[t].push(Pending::Write(data.to_vec()));
				}
			}

			if packet.type_ == requested_type {
				return;
			}
		}

		if self.demux.has_ended() {
			for t in [STREAM_VIDEO, STREAM_AUDIO] {
				if t == stream {
					own.signal_end();
				} else if self.has_buffer[t] {
					self.pending[t].push(Pending::SignalEnd);
				}
			}
		}
	}
}

pub struct Plm {
	feed: Rc<RefCell<Feed>>,
	time: f64,
	has_ended: bool,
	has_decoders: bool,

	video_enabled: bool,
	video_decoder: Option<Box<Video>>,

	audio_enabled: bool,
	audio_stream_index: i32,
	audio_decoder: Option<Box<Audio>>,
}

impl Plm {
	/// Create a plmpeg instance with a filename. Returns None if the file could not
	/// be opened.
	pub fn create_with_filename(filename: &str) -> Option<Plm> {
		let buffer = Buffer::create_with_filename(filename)?;
		Some(Plm::create_with_buffer(buffer))
	}

	fn create_with_buffer(buffer: Buffer) -> Plm {
		let feed = Feed {
			demux: Demux::create(buffer),
			video_packet_type: 0,
			audio_packet_type: 0,
			has_buffer: [false, false],
			pending: [Vec::new(), Vec::new()],
		};
		let mut plm = Plm {
			feed: Rc::new(RefCell::new(feed)),
			time: 0.0,
			has_ended: false,
			has_decoders: false,
			video_enabled: true,
			video_decoder: None,
			audio_enabled: true,
			audio_stream_index: 0,
			audio_decoder: None,
		};
		plm.init_decoders();
		plm
	}

	fn init_decoders(&mut self) -> bool {
		if self.has_decoders {
			return true;
		}

		let (num_video_streams, num_audio_streams) = {
			let mut feed = self.feed.borrow_mut();
			if !feed.demux.has_headers() {
				return false;
			}
			(feed.demux.get_num_video_streams(), feed.demux.get_num_audio_streams())
		};

		if num_video_streams > 0 {
			if self.video_enabled {
				self.feed.borrow_mut().video_packet_type = DEMUX_PACKET_VIDEO_1;
			}
			if self.video_decoder.is_none() {
				self.feed.borrow_mut().has_buffer[STREAM_VIDEO] = true;
				let buffer = Buffer::create_for_packets(Rc::clone(&self.feed), STREAM_VIDEO);
				self.video_decoder = Some(Video::create_with_buffer(buffer));
			}
		}

		if num_audio_streams > 0 {
			if self.audio_enabled {
				self.feed.borrow_mut().audio_packet_type = DEMUX_PACKET_AUDIO_1 + self.audio_stream_index;
			}
			if self.audio_decoder.is_none() {
				self.feed.borrow_mut().has_buffer[STREAM_AUDIO] = true;
				let buffer = Buffer::create_for_packets(Rc::clone(&self.feed), STREAM_AUDIO);
				self.audio_decoder = Some(Audio::create_with_buffer(buffer));
			}
		}

		self.has_decoders = true;
		true
	}

	fn flush_pending(&mut self, stream: usize) {
		let pending = std::mem::take(&mut self.feed.borrow_mut().pending[stream]);
		if pending.is_empty() {
			return;
		}
		let buffer = if stream == STREAM_VIDEO {
			self.video_decoder.as_mut().map(|v| &mut v.buffer)
		} else {
			self.audio_decoder.as_mut().map(|a| &mut a.buffer)
		};
		if let Some(buffer) = buffer {
			for p in pending {
				match p {
					Pending::Write(data) => {
						buffer.write(&data);
					}
					Pending::SignalEnd => buffer.signal_end(),
				}
			}
		}
	}

	/// Get or set whether audio decoding is enabled. Default TRUE.
	pub fn get_audio_enabled(&self) -> bool {
		self.audio_enabled
	}

	pub fn set_audio_enabled(&mut self, enabled: bool) {
		self.audio_enabled = enabled;

		if !enabled {
			self.feed.borrow_mut().audio_packet_type = 0;
			return;
		}

		let packet_type = if self.init_decoders() && self.audio_decoder.is_some() {
			DEMUX_PACKET_AUDIO_1 + self.audio_stream_index
		} else {
			0
		};
		self.feed.borrow_mut().audio_packet_type = packet_type;
	}

	/// Get or set whether video decoding is enabled. Default TRUE.
	pub fn get_video_enabled(&self) -> bool {
		self.video_enabled
	}

	pub fn set_video_enabled(&mut self, enabled: bool) {
		self.video_enabled = enabled;

		if !enabled {
			self.feed.borrow_mut().video_packet_type = 0;
			return;
		}

		let packet_type = if self.init_decoders() && self.video_decoder.is_some() { DEMUX_PACKET_VIDEO_1 } else { 0 };
		self.feed.borrow_mut().video_packet_type = packet_type;
	}

	/// Get the display width/height of the video stream.
	pub fn get_width(&mut self) -> i32 {
		if !self.init_decoders() || self.video_decoder.is_none() {
			return 0;
		}
		self.flush_pending(STREAM_VIDEO);
		self.video_decoder.as_mut().map_or(0, |v| v.get_width())
	}

	pub fn get_height(&mut self) -> i32 {
		if !self.init_decoders() || self.video_decoder.is_none() {
			return 0;
		}
		self.flush_pending(STREAM_VIDEO);
		self.video_decoder.as_mut().map_or(0, |v| v.get_height())
	}

	/// Get the samplerate of the audio stream in samples per second.
	pub fn get_samplerate(&mut self) -> i32 {
		if !self.init_decoders() || self.audio_decoder.is_none() {
			return 0;
		}
		self.flush_pending(STREAM_AUDIO);
		self.audio_decoder.as_mut().map_or(0, |a| a.get_samplerate())
	}

	/// Get the current internal time in seconds.
	pub fn get_time(&self) -> f64 {
		self.time
	}

	/// Get whether the file has ended. If looping is enabled, this will always
	/// return FALSE.
	pub fn has_ended(&self) -> bool {
		self.has_ended
	}

	/// Decode and return one video frame. Returns None if no frame could be decoded
	/// (either because the source ended or data is corrupt). If you only want to
	/// decode video, you should disable audio via set_audio_enabled().
	/// The returned Frame is valid until the next call to decode_video().
	pub fn decode_video(&mut self) -> Option<Frame<'_>> {
		if !self.init_decoders() {
			return None;
		}

		if self.feed.borrow().video_packet_type == 0 {
			return None;
		}

		self.flush_pending(STREAM_VIDEO);
		let decoded = self.video_decoder.as_mut()?.decode();
		match decoded {
			Some(info) => {
				self.time = info.time;
				Some(self.video_decoder.as_ref()?.frame(info))
			}
			None => {
				if self.feed.borrow().demux.has_ended() {
					self.handle_end();
				}
				None
			}
		}
	}

	/// Decode and return one audio frame. Returns None if no frame could be decoded
	/// (either because the source ended or data is corrupt). If you only want to
	/// decode audio, you should disable video via set_video_enabled().
	/// The returned Samples are valid until the next call to decode_audio().
	pub fn decode_audio(&mut self) -> Option<&Samples> {
		if !self.init_decoders() {
			return None;
		}

		if self.feed.borrow().audio_packet_type == 0 {
			return None;
		}

		self.flush_pending(STREAM_AUDIO);
		let decoded = self.audio_decoder.as_mut()?.decode();
		if decoded {
			let audio = self.audio_decoder.as_ref()?;
			self.time = audio.samples.time;
			Some(&audio.samples)
		} else {
			if self.feed.borrow().demux.has_ended() {
				self.handle_end();
			}
			None
		}
	}

	fn handle_end(&mut self) {
		self.has_ended = true;
	}
}

// -----------------------------------------------------------------------------
// plm_buffer implementation

#[derive(Clone, Copy, PartialEq)]
enum BufferMode {
	File,
	Ring,
}

enum Source {
	None,
	File(File),
	Packets(Rc<RefCell<Feed>>, usize),
}

struct Buffer {
	bit_index: usize,
	capacity: usize,
	length: usize,
	total_size: usize,
	discard_read_bytes: bool,
	has_ended: bool,
	source: Source,
	bytes: Vec<u8>,
	mode: BufferMode,
}

#[derive(Clone, Copy)]
struct Vlc(i16, i16);

#[derive(Clone, Copy)]
struct VlcUint(i16, u16);

impl Buffer {
	fn create_with_filename(filename: &str) -> Option<Buffer> {
		let fh = File::open(filename).ok()?;
		Some(Buffer::create_with_file(fh))
	}

	fn create_with_file(mut fh: File) -> Buffer {
		let mut buffer = Buffer::create_with_capacity(BUFFER_DEFAULT_SIZE);
		buffer.mode = BufferMode::File;
		buffer.discard_read_bytes = true;

		buffer.total_size = fh.seek(SeekFrom::End(0)).unwrap_or(0) as usize;
		let _ = fh.seek(SeekFrom::Start(0));

		buffer.source = Source::File(fh);
		buffer
	}

	fn create_with_capacity(capacity: usize) -> Buffer {
		Buffer {
			bit_index: 0,
			capacity,
			length: 0,
			total_size: 0,
			discard_read_bytes: true,
			has_ended: false,
			source: Source::None,
			bytes: vec![0; capacity],
			mode: BufferMode::Ring,
		}
	}

	fn create_for_packets(feed: Rc<RefCell<Feed>>, stream: usize) -> Buffer {
		let mut buffer = Buffer::create_with_capacity(BUFFER_DEFAULT_SIZE);
		buffer.source = Source::Packets(feed, stream);
		buffer
	}

	fn write(&mut self, bytes: &[u8]) -> usize {
		let length = bytes.len();
		if self.discard_read_bytes {
			// This should be a ring buffer, but instead it just shifts all unread
			// data to the beginning of the buffer and appends new data at the end.
			// Seems to be good enough.

			self.discard_read_bytes();
			if self.mode == BufferMode::Ring {
				self.total_size = 0;
			}
		}

		// Do we have to resize to fit the new data?
		let bytes_available = self.capacity - self.length;
		if bytes_available < length {
			let mut new_size = self.capacity;
			loop {
				new_size *= 2;
				if new_size - self.length >= length {
					break;
				}
			}
			self.bytes.resize(new_size, 0);
			self.capacity = new_size;
		}

		self.bytes[self.length..self.length + length].copy_from_slice(bytes);
		self.length += length;
		self.has_ended = false;
		length
	}

	fn signal_end(&mut self) {
		self.total_size = self.length;
	}

	fn discard_read_bytes(&mut self) {
		let byte_pos = self.bit_index >> 3;
		if byte_pos == self.length {
			self.bit_index = 0;
			self.length = 0;
		} else if byte_pos > 0 {
			self.bytes.copy_within(byte_pos..self.length, 0);
			self.bit_index -= byte_pos << 3;
			self.length -= byte_pos;
		}
	}

	fn load_file(&mut self) {
		if self.discard_read_bytes {
			self.discard_read_bytes();
		}

		let mut bytes_read = 0;
		if let Source::File(fh) = &mut self.source {
			let dest = &mut self.bytes[self.length..self.capacity];
			while bytes_read < dest.len() {
				match fh.read(&mut dest[bytes_read..]) {
					Ok(0) | Err(_) => break,
					Ok(n) => bytes_read += n,
				}
			}
		}
		self.length += bytes_read;

		if bytes_read == 0 {
			self.has_ended = true;
		}
	}

	/// Calls the load callback; false when there is none.
	fn load(&mut self) -> bool {
		match &self.source {
			Source::None => false,
			Source::File(_) => {
				self.load_file();
				true
			}
			Source::Packets(feed, stream) => {
				let feed = Rc::clone(feed);
				let stream = *stream;
				let mut feed = feed.borrow_mut();
				let requested_type = feed.packet_type(stream);
				feed.read_packets(requested_type, stream, self);
				true
			}
		}
	}

	fn has_ended(&self) -> bool {
		self.has_ended
	}

	fn has(&mut self, count: usize) -> bool {
		if (self.length << 3).wrapping_sub(self.bit_index) >= count {
			return true;
		}

		if self.load() && (self.length << 3).wrapping_sub(self.bit_index) >= count {
			return true;
		}

		if self.total_size != 0 && self.length == self.total_size {
			self.has_ended = true;
		}
		false
	}

	fn read(&mut self, count: i32) -> i32 {
		if !self.has(count as usize) {
			return 0;
		}

		let mut count = count;
		let mut value: i32 = 0;
		while count != 0 {
			let current_byte = self.bytes[self.bit_index >> 3] as i32;

			let remaining = 8 - (self.bit_index & 7) as i32; // Remaining bits in byte
			let read = if remaining < count { remaining } else { count }; // Bits in self run
			let shift = remaining - read;
			let mask = 0xff >> (8 - read);

			value = (value.wrapping_shl(read as u32)) | ((current_byte & (mask << shift)) >> shift);

			self.bit_index += read as usize;
			count -= read;
		}

		value
	}

	fn align(&mut self) {
		self.bit_index = ((self.bit_index + 7) >> 3) << 3; // Align to next byte
	}

	fn skip(&mut self, count: usize) {
		if self.has(count) {
			self.bit_index += count;
		}
	}

	fn skip_bytes(&mut self, v: u8) -> usize {
		self.align();
		let mut skipped = 0;
		while self.has(8) && self.bytes[self.bit_index >> 3] == v {
			self.bit_index += 8;
			skipped += 1;
		}
		skipped
	}

	fn next_start_code(&mut self) -> i32 {
		self.align();

		while self.has(5 << 3) {
			let byte_index = self.bit_index >> 3;
			if self.bytes[byte_index] == 0x00
				&& self.bytes[byte_index + 1] == 0x00
				&& self.bytes[byte_index + 2] == 0x01
			{
				self.bit_index = (byte_index + 4) << 3;
				return self.bytes[byte_index + 3] as i32;
			}
			self.bit_index += 8;
		}
		-1
	}

	fn find_start_code(&mut self, code: i32) -> i32 {
		loop {
			let current = self.next_start_code();
			if current == code || current == -1 {
				return current;
			}
		}
	}

	fn has_start_code(&mut self, code: i32) -> i32 {
		let previous_bit_index = self.bit_index;
		let previous_discard_read_bytes = self.discard_read_bytes;

		self.discard_read_bytes = false;
		let current = self.find_start_code(code);

		self.bit_index = previous_bit_index;
		self.discard_read_bytes = previous_discard_read_bytes;
		current
	}

	fn peek_non_zero(&mut self, bit_count: i32) -> bool {
		if !self.has(bit_count as usize) {
			return false;
		}

		let val = self.read(bit_count);
		self.bit_index -= bit_count as usize;
		val != 0
	}

	fn read_vlc(&mut self, table: &[Vlc]) -> i16 {
		let mut state = Vlc(0, 0);
		loop {
			state = table[(state.0 as i32 + self.read(1)) as usize];
			if state.0 <= 0 {
				break;
			}
		}
		state.1
	}

	fn read_vlc_uint(&mut self, table: &[VlcUint]) -> u16 {
		let mut state = VlcUint(0, 0);
		loop {
			state = table[(state.0 as i32 + self.read(1)) as usize];
			if state.0 <= 0 {
				break;
			}
		}
		state.1
	}
}

// ----------------------------------------------------------------------------
// plm_demux implementation

const START_PACK: i32 = 0xBA;
#[allow(dead_code)]
const START_END: i32 = 0xB9;
const START_SYSTEM: i32 = 0xBB;

const DEMUX_PACKET_PRIVATE: i32 = 0xBD;
const DEMUX_PACKET_AUDIO_1: i32 = 0xC0;
#[allow(dead_code)]
const DEMUX_PACKET_AUDIO_2: i32 = 0xC1;
#[allow(dead_code)]
const DEMUX_PACKET_AUDIO_3: i32 = 0xC2;
const DEMUX_PACKET_AUDIO_4: i32 = 0xC3;
const DEMUX_PACKET_VIDEO_1: i32 = 0xE0;

/// A packet; `data` is the offset of its payload in the demuxer's buffer.
#[derive(Clone, Copy, Default)]
struct Packet {
	type_: i32,
	pts: f64,
	length: usize,
	data: usize,
}

struct Demux {
	buffer: Buffer,
	system_clock_ref: f64,

	last_decoded_pts: f64,

	start_code: i32,
	has_pack_header: bool,
	has_system_header: bool,
	has_headers: bool,

	num_audio_streams: i32,
	num_video_streams: i32,
	current_packet: Packet,
	next_packet: Packet,
}

impl Demux {
	fn create(buffer: Buffer) -> Demux {
		let mut demux = Demux {
			buffer,
			system_clock_ref: 0.0,
			last_decoded_pts: 0.0,
			start_code: -1,
			has_pack_header: false,
			has_system_header: false,
			has_headers: false,
			num_audio_streams: 0,
			num_video_streams: 0,
			current_packet: Packet::default(),
			next_packet: Packet::default(),
		};
		demux.has_headers();
		demux
	}

	fn has_headers(&mut self) -> bool {
		if self.has_headers {
			return true;
		}

		// Decode pack header
		if !self.has_pack_header {
			if self.start_code != START_PACK && self.buffer.find_start_code(START_PACK) == -1 {
				return false;
			}

			self.start_code = START_PACK;
			if !self.buffer.has(64) {
				return false;
			}
			self.start_code = -1;

			if self.buffer.read(4) != 0x02 {
				return false;
			}

			self.system_clock_ref = self.decode_time();
			self.buffer.skip(1);
			self.buffer.skip(22); // mux_rate * 50
			self.buffer.skip(1);

			self.has_pack_header = true;
		}

		// Decode system header
		if !self.has_system_header {
			if self.start_code != START_SYSTEM && self.buffer.find_start_code(START_SYSTEM) == -1 {
				return false;
			}

			self.start_code = START_SYSTEM;
			if !self.buffer.has(56) {
				return false;
			}
			self.start_code = -1;

			self.buffer.skip(16); // header_length
			self.buffer.skip(24); // rate bound
			self.num_audio_streams = self.buffer.read(6);
			self.buffer.skip(5); // misc flags
			self.num_video_streams = self.buffer.read(5);

			self.has_system_header = true;
		}

		self.has_headers = true;
		true
	}

	fn get_num_video_streams(&mut self) -> i32 {
		if self.has_headers() { self.num_video_streams } else { 0 }
	}

	fn get_num_audio_streams(&mut self) -> i32 {
		if self.has_headers() { self.num_audio_streams } else { 0 }
	}

	fn has_ended(&self) -> bool {
		self.buffer.has_ended()
	}

	fn decode(&mut self) -> Option<Packet> {
		if !self.has_headers() {
			return None;
		}

		if self.current_packet.length != 0 {
			let bits_till_next_packet = self.current_packet.length << 3;
			if !self.buffer.has(bits_till_next_packet) {
				return None;
			}
			self.buffer.skip(bits_till_next_packet);
			self.current_packet.length = 0;
		}

		// Pending packet waiting for data?
		if self.next_packet.length != 0 {
			return self.get_packet();
		}

		// Pending packet waiting for header?
		if self.start_code != -1 {
			return self.decode_packet(self.start_code);
		}

		loop {
			self.start_code = self.buffer.next_start_code();
			if self.start_code == DEMUX_PACKET_VIDEO_1
				|| self.start_code == DEMUX_PACKET_PRIVATE
				|| (self.start_code >= DEMUX_PACKET_AUDIO_1 && self.start_code <= DEMUX_PACKET_AUDIO_4)
			{
				return self.decode_packet(self.start_code);
			}
			if self.start_code == -1 {
				break;
			}
		}

		None
	}

	fn decode_time(&mut self) -> f64 {
		let mut clock = self.buffer.read(3).wrapping_shl(30) as i64;
		self.buffer.skip(1);
		clock |= (self.buffer.read(15) << 15) as i64;
		self.buffer.skip(1);
		clock |= self.buffer.read(15) as i64;
		self.buffer.skip(1);
		clock as f64 / 90000.0
	}

	fn decode_packet(&mut self, type_: i32) -> Option<Packet> {
		if !self.buffer.has(16 << 3) {
			return None;
		}

		self.start_code = -1;

		self.next_packet.type_ = type_;
		self.next_packet.length = self.buffer.read(16) as usize;
		self.next_packet.length = self.next_packet.length.wrapping_sub(self.buffer.skip_bytes(0xff)); // stuffing

		// skip P-STD
		if self.buffer.read(2) == 0x01 {
			self.buffer.skip(16);
			self.next_packet.length = self.next_packet.length.wrapping_sub(2);
		}

		let pts_dts_marker = self.buffer.read(2);
		if pts_dts_marker == 0x03 {
			self.next_packet.pts = self.decode_time();
			self.last_decoded_pts = self.next_packet.pts;
			self.buffer.skip(40); // skip dts
			self.next_packet.length = self.next_packet.length.wrapping_sub(10);
		} else if pts_dts_marker == 0x02 {
			self.next_packet.pts = self.decode_time();
			self.last_decoded_pts = self.next_packet.pts;
			self.next_packet.length = self.next_packet.length.wrapping_sub(5);
		} else if pts_dts_marker == 0x00 {
			self.next_packet.pts = PACKET_INVALID_TS;
			self.buffer.skip(4);
			self.next_packet.length = self.next_packet.length.wrapping_sub(1);
		} else {
			return None; // invalid
		}

		self.get_packet()
	}

	fn get_packet(&mut self) -> Option<Packet> {
		if !self.buffer.has(self.next_packet.length.wrapping_shl(3)) {
			return None;
		}

		self.current_packet.data = self.buffer.bit_index >> 3;
		self.current_packet.length = self.next_packet.length;
		self.current_packet.type_ = self.next_packet.type_;
		self.current_packet.pts = self.next_packet.pts;

		self.next_packet.length = 0;
		Some(self.current_packet)
	}
}

// -----------------------------------------------------------------------------
// plm_video implementation

// Inspired by Java MPEG-1 Video Decoder and Player by Zoltan Korandi
// https://sourceforge.net/projects/javampeg1video/

const VIDEO_PICTURE_TYPE_INTRA: i32 = 1;
const VIDEO_PICTURE_TYPE_PREDICTIVE: i32 = 2;
const VIDEO_PICTURE_TYPE_B: i32 = 3;

const START_SEQUENCE: i32 = 0xB3;
const START_SLICE_FIRST: i32 = 0x01;
const START_SLICE_LAST: i32 = 0xAF;
const START_PICTURE: i32 = 0x00;
const START_EXTENSION: i32 = 0xB5;
const START_USER_DATA: i32 = 0xB2;

fn start_is_slice(c: i32) -> bool {
	(START_SLICE_FIRST..=START_SLICE_LAST).contains(&c)
}

static VIDEO_PIXEL_ASPECT_RATIO: [f32; 14] = [
	1.0000_f64 as f32, /* square pixels */
	0.6735_f64 as f32, /* 3:4? */
	0.7031_f64 as f32, /* MPEG-1 / MPEG-2 video encoding divergence? */
	0.7615_f64 as f32,
	0.8055_f64 as f32,
	0.8437_f64 as f32,
	0.8935_f64 as f32,
	0.9157_f64 as f32,
	0.9815_f64 as f32,
	1.0255_f64 as f32,
	1.0695_f64 as f32,
	1.0950_f64 as f32,
	1.1575_f64 as f32,
	1.2051_f64 as f32,
];

static VIDEO_PICTURE_RATE: [f64; 16] = [
	0.000, 23.976, 24.000, 25.000, 29.970, 30.000, 50.000, 59.940, 60.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000,
	0.000,
];

#[rustfmt::skip]
static VIDEO_ZIG_ZAG: [u8; 64] = [
	 0,  1,  8, 16,  9,  2,  3, 10,
	17, 24, 32, 25, 18, 11,  4,  5,
	12, 19, 26, 33, 40, 48, 41, 34,
	27, 20, 13,  6,  7, 14, 21, 28,
	35, 42, 49, 56, 57, 50, 43, 36,
	29, 22, 15, 23, 30, 37, 44, 51,
	58, 59, 52, 45, 38, 31, 39, 46,
	53, 60, 61, 54, 47, 55, 62, 63,
];

#[rustfmt::skip]
static VIDEO_INTRA_QUANT_MATRIX: [u8; 64] = [
	 8, 16, 19, 22, 26, 27, 29, 34,
	16, 16, 22, 24, 27, 29, 34, 37,
	19, 22, 26, 27, 29, 34, 34, 38,
	22, 22, 26, 27, 29, 34, 37, 40,
	22, 26, 27, 29, 32, 35, 40, 48,
	26, 27, 29, 32, 35, 40, 48, 58,
	26, 27, 29, 34, 38, 46, 56, 69,
	27, 29, 35, 38, 46, 56, 69, 83,
];

static VIDEO_NON_INTRA_QUANT_MATRIX: [u8; 64] = [16; 64];

#[rustfmt::skip]
static VIDEO_PREMULTIPLIER_MATRIX: [u8; 64] = [
	32, 44, 42, 38, 32, 25, 17,  9,
	44, 62, 58, 52, 44, 35, 24, 12,
	42, 58, 55, 49, 42, 33, 23, 12,
	38, 52, 49, 44, 38, 30, 20, 10,
	32, 44, 42, 38, 32, 25, 17,  9,
	25, 35, 33, 30, 25, 20, 14,  7,
	17, 24, 23, 20, 17, 14,  9,  5,
	 9, 12, 12, 10,  9,  7,  5,  2,
];

#[rustfmt::skip]
static MACROBLOCK_ADDRESS_INCREMENT: [Vlc; 80] = [
	Vlc(1 << 1, 0), Vlc(0, 1),  //   0: x
	Vlc(2 << 1, 0), Vlc(3 << 1, 0),  //   1: 0x
	Vlc(4 << 1, 0), Vlc(5 << 1, 0),  //   2: 00x
	Vlc(0, 3), Vlc(0, 2),  //   3: 01x
	Vlc(6 << 1, 0), Vlc(7 << 1, 0),  //   4: 000x
	Vlc(0, 5), Vlc(0, 4),  //   5: 001x
	Vlc(8 << 1, 0), Vlc(9 << 1, 0),  //   6: 0000x
	Vlc(0, 7), Vlc(0, 6),  //   7: 0001x
	Vlc(10 << 1, 0), Vlc(11 << 1, 0),  //   8: 0000 0x
	Vlc(12 << 1, 0), Vlc(13 << 1, 0),  //   9: 0000 1x
	Vlc(14 << 1, 0), Vlc(15 << 1, 0),  //  10: 0000 00x
	Vlc(16 << 1, 0), Vlc(17 << 1, 0),  //  11: 0000 01x
	Vlc(18 << 1, 0), Vlc(19 << 1, 0),  //  12: 0000 10x
	Vlc(0, 9), Vlc(0, 8),  //  13: 0000 11x
	Vlc(-1, 0), Vlc(20 << 1, 0),  //  14: 0000 000x
	Vlc(-1, 0), Vlc(21 << 1, 0),  //  15: 0000 001x
	Vlc(22 << 1, 0), Vlc(23 << 1, 0),  //  16: 0000 010x
	Vlc(0, 15), Vlc(0, 14),  //  17: 0000 011x
	Vlc(0, 13), Vlc(0, 12),  //  18: 0000 100x
	Vlc(0, 11), Vlc(0, 10),  //  19: 0000 101x
	Vlc(24 << 1, 0), Vlc(25 << 1, 0),  //  20: 0000 0001x
	Vlc(26 << 1, 0), Vlc(27 << 1, 0),  //  21: 0000 0011x
	Vlc(28 << 1, 0), Vlc(29 << 1, 0),  //  22: 0000 0100x
	Vlc(30 << 1, 0), Vlc(31 << 1, 0),  //  23: 0000 0101x
	Vlc(32 << 1, 0), Vlc(-1, 0),  //  24: 0000 0001 0x
	Vlc(-1, 0), Vlc(33 << 1, 0),  //  25: 0000 0001 1x
	Vlc(34 << 1, 0), Vlc(35 << 1, 0),  //  26: 0000 0011 0x
	Vlc(36 << 1, 0), Vlc(37 << 1, 0),  //  27: 0000 0011 1x
	Vlc(38 << 1, 0), Vlc(39 << 1, 0),  //  28: 0000 0100 0x
	Vlc(0, 21), Vlc(0, 20),  //  29: 0000 0100 1x
	Vlc(0, 19), Vlc(0, 18),  //  30: 0000 0101 0x
	Vlc(0, 17), Vlc(0, 16),  //  31: 0000 0101 1x
	Vlc(0, 35), Vlc(-1, 0),  //  32: 0000 0001 00x
	Vlc(-1, 0), Vlc(0, 34),  //  33: 0000 0001 11x
	Vlc(0, 33), Vlc(0, 32),  //  34: 0000 0011 00x
	Vlc(0, 31), Vlc(0, 30),  //  35: 0000 0011 01x
	Vlc(0, 29), Vlc(0, 28),  //  36: 0000 0011 10x
	Vlc(0, 27), Vlc(0, 26),  //  37: 0000 0011 11x
	Vlc(0, 25), Vlc(0, 24),  //  38: 0000 0100 00x
	Vlc(0, 23), Vlc(0, 22),  //  39: 0000 0100 01x
];

#[rustfmt::skip]
static MACROBLOCK_TYPE_INTRA: [Vlc; 4] = [
	Vlc(1 << 1, 0), Vlc(0, 0x01),  //   0: x
	Vlc(-1, 0), Vlc(0, 0x11),  //   1: 0x
];

#[rustfmt::skip]
static MACROBLOCK_TYPE_PREDICTIVE: [Vlc; 14] = [
	Vlc(1 << 1, 0), Vlc(0, 0x0a),  //   0: x
	Vlc(2 << 1, 0), Vlc(0, 0x02),  //   1: 0x
	Vlc(3 << 1, 0), Vlc(0, 0x08),  //   2: 00x
	Vlc(4 << 1, 0), Vlc(5 << 1, 0),  //   3: 000x
	Vlc(6 << 1, 0), Vlc(0, 0x12),  //   4: 0000x
	Vlc(0, 0x1a), Vlc(0, 0x01),  //   5: 0001x
	Vlc(-1, 0), Vlc(0, 0x11),  //   6: 0000 0x
];

#[rustfmt::skip]
static MACROBLOCK_TYPE_B: [Vlc; 22] = [
	Vlc(1 << 1, 0), Vlc(2 << 1, 0),  //   0: x
	Vlc(3 << 1, 0), Vlc(4 << 1, 0),  //   1: 0x
	Vlc(0, 0x0c), Vlc(0, 0x0e),  //   2: 1x
	Vlc(5 << 1, 0), Vlc(6 << 1, 0),  //   3: 00x
	Vlc(0, 0x04), Vlc(0, 0x06),  //   4: 01x
	Vlc(7 << 1, 0), Vlc(8 << 1, 0),  //   5: 000x
	Vlc(0, 0x08), Vlc(0, 0x0a),  //   6: 001x
	Vlc(9 << 1, 0), Vlc(10 << 1, 0),  //   7: 0000x
	Vlc(0, 0x1e), Vlc(0, 0x01),  //   8: 0001x
	Vlc(-1, 0), Vlc(0, 0x11),  //   9: 0000 0x
	Vlc(0, 0x16), Vlc(0, 0x1a),  //  10: 0000 1x
];

#[rustfmt::skip]
static CODE_BLOCK_PATTERN: [Vlc; 126] = [
	Vlc(1 << 1, 0), Vlc(2 << 1, 0),  //   0: x
	Vlc(3 << 1, 0), Vlc(4 << 1, 0),  //   1: 0x
	Vlc(5 << 1, 0), Vlc(6 << 1, 0),  //   2: 1x
	Vlc(7 << 1, 0), Vlc(8 << 1, 0),  //   3: 00x
	Vlc(9 << 1, 0), Vlc(10 << 1, 0),  //   4: 01x
	Vlc(11 << 1, 0), Vlc(12 << 1, 0),  //   5: 10x
	Vlc(13 << 1, 0), Vlc(0, 60),  //   6: 11x
	Vlc(14 << 1, 0), Vlc(15 << 1, 0),  //   7: 000x
	Vlc(16 << 1, 0), Vlc(17 << 1, 0),  //   8: 001x
	Vlc(18 << 1, 0), Vlc(19 << 1, 0),  //   9: 010x
	Vlc(20 << 1, 0), Vlc(21 << 1, 0),  //  10: 011x
	Vlc(22 << 1, 0), Vlc(23 << 1, 0),  //  11: 100x
	Vlc(0, 32), Vlc(0, 16),  //  12: 101x
	Vlc(0, 8), Vlc(0, 4),  //  13: 110x
	Vlc(24 << 1, 0), Vlc(25 << 1, 0),  //  14: 0000x
	Vlc(26 << 1, 0), Vlc(27 << 1, 0),  //  15: 0001x
	Vlc(28 << 1, 0), Vlc(29 << 1, 0),  //  16: 0010x
	Vlc(30 << 1, 0), Vlc(31 << 1, 0),  //  17: 0011x
	Vlc(0, 62), Vlc(0, 2),  //  18: 0100x
	Vlc(0, 61), Vlc(0, 1),  //  19: 0101x
	Vlc(0, 56), Vlc(0, 52),  //  20: 0110x
	Vlc(0, 44), Vlc(0, 28),  //  21: 0111x
	Vlc(0, 40), Vlc(0, 20),  //  22: 1000x
	Vlc(0, 48), Vlc(0, 12),  //  23: 1001x
	Vlc(32 << 1, 0), Vlc(33 << 1, 0),  //  24: 0000 0x
	Vlc(34 << 1, 0), Vlc(35 << 1, 0),  //  25: 0000 1x
	Vlc(36 << 1, 0), Vlc(37 << 1, 0),  //  26: 0001 0x
	Vlc(38 << 1, 0), Vlc(39 << 1, 0),  //  27: 0001 1x
	Vlc(40 << 1, 0), Vlc(41 << 1, 0),  //  28: 0010 0x
	Vlc(42 << 1, 0), Vlc(43 << 1, 0),  //  29: 0010 1x
	Vlc(0, 63), Vlc(0, 3),  //  30: 0011 0x
	Vlc(0, 36), Vlc(0, 24),  //  31: 0011 1x
	Vlc(44 << 1, 0), Vlc(45 << 1, 0),  //  32: 0000 00x
	Vlc(46 << 1, 0), Vlc(47 << 1, 0),  //  33: 0000 01x
	Vlc(48 << 1, 0), Vlc(49 << 1, 0),  //  34: 0000 10x
	Vlc(50 << 1, 0), Vlc(51 << 1, 0),  //  35: 0000 11x
	Vlc(52 << 1, 0), Vlc(53 << 1, 0),  //  36: 0001 00x
	Vlc(54 << 1, 0), Vlc(55 << 1, 0),  //  37: 0001 01x
	Vlc(56 << 1, 0), Vlc(57 << 1, 0),  //  38: 0001 10x
	Vlc(58 << 1, 0), Vlc(59 << 1, 0),  //  39: 0001 11x
	Vlc(0, 34), Vlc(0, 18),  //  40: 0010 00x
	Vlc(0, 10), Vlc(0, 6),  //  41: 0010 01x
	Vlc(0, 33), Vlc(0, 17),  //  42: 0010 10x
	Vlc(0, 9), Vlc(0, 5),  //  43: 0010 11x
	Vlc(-1, 0), Vlc(60 << 1, 0),  //  44: 0000 000x
	Vlc(61 << 1, 0), Vlc(62 << 1, 0),  //  45: 0000 001x
	Vlc(0, 58), Vlc(0, 54),  //  46: 0000 010x
	Vlc(0, 46), Vlc(0, 30),  //  47: 0000 011x
	Vlc(0, 57), Vlc(0, 53),  //  48: 0000 100x
	Vlc(0, 45), Vlc(0, 29),  //  49: 0000 101x
	Vlc(0, 38), Vlc(0, 26),  //  50: 0000 110x
	Vlc(0, 37), Vlc(0, 25),  //  51: 0000 111x
	Vlc(0, 43), Vlc(0, 23),  //  52: 0001 000x
	Vlc(0, 51), Vlc(0, 15),  //  53: 0001 001x
	Vlc(0, 42), Vlc(0, 22),  //  54: 0001 010x
	Vlc(0, 50), Vlc(0, 14),  //  55: 0001 011x
	Vlc(0, 41), Vlc(0, 21),  //  56: 0001 100x
	Vlc(0, 49), Vlc(0, 13),  //  57: 0001 101x
	Vlc(0, 35), Vlc(0, 19),  //  58: 0001 110x
	Vlc(0, 11), Vlc(0, 7),  //  59: 0001 111x
	Vlc(0, 39), Vlc(0, 27),  //  60: 0000 0001x
	Vlc(0, 59), Vlc(0, 55),  //  61: 0000 0010x
	Vlc(0, 47), Vlc(0, 31),  //  62: 0000 0011x
];

#[rustfmt::skip]
static MOTION: [Vlc; 68] = [
	Vlc(1 << 1, 0), Vlc(0, 0),  //   0: x
	Vlc(2 << 1, 0), Vlc(3 << 1, 0),  //   1: 0x
	Vlc(4 << 1, 0), Vlc(5 << 1, 0),  //   2: 00x
	Vlc(0, 1), Vlc(0, -1),  //   3: 01x
	Vlc(6 << 1, 0), Vlc(7 << 1, 0),  //   4: 000x
	Vlc(0, 2), Vlc(0, -2),  //   5: 001x
	Vlc(8 << 1, 0), Vlc(9 << 1, 0),  //   6: 0000x
	Vlc(0, 3), Vlc(0, -3),  //   7: 0001x
	Vlc(10 << 1, 0), Vlc(11 << 1, 0),  //   8: 0000 0x
	Vlc(12 << 1, 0), Vlc(13 << 1, 0),  //   9: 0000 1x
	Vlc(-1, 0), Vlc(14 << 1, 0),  //  10: 0000 00x
	Vlc(15 << 1, 0), Vlc(16 << 1, 0),  //  11: 0000 01x
	Vlc(17 << 1, 0), Vlc(18 << 1, 0),  //  12: 0000 10x
	Vlc(0, 4), Vlc(0, -4),  //  13: 0000 11x
	Vlc(-1, 0), Vlc(19 << 1, 0),  //  14: 0000 001x
	Vlc(20 << 1, 0), Vlc(21 << 1, 0),  //  15: 0000 010x
	Vlc(0, 7), Vlc(0, -7),  //  16: 0000 011x
	Vlc(0, 6), Vlc(0, -6),  //  17: 0000 100x
	Vlc(0, 5), Vlc(0, -5),  //  18: 0000 101x
	Vlc(22 << 1, 0), Vlc(23 << 1, 0),  //  19: 0000 0011x
	Vlc(24 << 1, 0), Vlc(25 << 1, 0),  //  20: 0000 0100x
	Vlc(26 << 1, 0), Vlc(27 << 1, 0),  //  21: 0000 0101x
	Vlc(28 << 1, 0), Vlc(29 << 1, 0),  //  22: 0000 0011 0x
	Vlc(30 << 1, 0), Vlc(31 << 1, 0),  //  23: 0000 0011 1x
	Vlc(32 << 1, 0), Vlc(33 << 1, 0),  //  24: 0000 0100 0x
	Vlc(0, 10), Vlc(0, -10),  //  25: 0000 0100 1x
	Vlc(0, 9), Vlc(0, -9),  //  26: 0000 0101 0x
	Vlc(0, 8), Vlc(0, -8),  //  27: 0000 0101 1x
	Vlc(0, 16), Vlc(0, -16),  //  28: 0000 0011 00x
	Vlc(0, 15), Vlc(0, -15),  //  29: 0000 0011 01x
	Vlc(0, 14), Vlc(0, -14),  //  30: 0000 0011 10x
	Vlc(0, 13), Vlc(0, -13),  //  31: 0000 0011 11x
	Vlc(0, 12), Vlc(0, -12),  //  32: 0000 0100 00x
	Vlc(0, 11), Vlc(0, -11),  //  33: 0000 0100 01x
];

#[rustfmt::skip]
static DCT_SIZE_LUMINANCE: [Vlc; 18] = [
	Vlc(1 << 1, 0), Vlc(2 << 1, 0),  //   0: x
	Vlc(0, 1), Vlc(0, 2),  //   1: 0x
	Vlc(3 << 1, 0), Vlc(4 << 1, 0),  //   2: 1x
	Vlc(0, 0), Vlc(0, 3),  //   3: 10x
	Vlc(0, 4), Vlc(5 << 1, 0),  //   4: 11x
	Vlc(0, 5), Vlc(6 << 1, 0),  //   5: 111x
	Vlc(0, 6), Vlc(7 << 1, 0),  //   6: 1111x
	Vlc(0, 7), Vlc(8 << 1, 0),  //   7: 1111 1x
	Vlc(0, 8), Vlc(-1, 0),  //   8: 1111 11x
];

#[rustfmt::skip]
static DCT_SIZE_CHROMINANCE: [Vlc; 18] = [
	Vlc(1 << 1, 0), Vlc(2 << 1, 0),  //   0: x
	Vlc(0, 0), Vlc(0, 1),  //   1: 0x
	Vlc(0, 2), Vlc(3 << 1, 0),  //   2: 1x
	Vlc(0, 3), Vlc(4 << 1, 0),  //   3: 11x
	Vlc(0, 4), Vlc(5 << 1, 0),  //   4: 111x
	Vlc(0, 5), Vlc(6 << 1, 0),  //   5: 1111x
	Vlc(0, 6), Vlc(7 << 1, 0),  //   6: 1111 1x
	Vlc(0, 7), Vlc(8 << 1, 0),  //   7: 1111 11x
	Vlc(0, 8), Vlc(-1, 0),  //   8: 1111 111x
];

#[rustfmt::skip]
static DCT_COEFF: [VlcUint; 224] = [
	VlcUint(1 << 1, 0), VlcUint(0, 0x0001),  //   0: x
	VlcUint(2 << 1, 0), VlcUint(3 << 1, 0),  //   1: 0x
	VlcUint(4 << 1, 0), VlcUint(5 << 1, 0),  //   2: 00x
	VlcUint(6 << 1, 0), VlcUint(0, 0x0101),  //   3: 01x
	VlcUint(7 << 1, 0), VlcUint(8 << 1, 0),  //   4: 000x
	VlcUint(9 << 1, 0), VlcUint(10 << 1, 0),  //   5: 001x
	VlcUint(0, 0x0002), VlcUint(0, 0x0201),  //   6: 010x
	VlcUint(11 << 1, 0), VlcUint(12 << 1, 0),  //   7: 0000x
	VlcUint(13 << 1, 0), VlcUint(14 << 1, 0),  //   8: 0001x
	VlcUint(15 << 1, 0), VlcUint(0, 0x0003),  //   9: 0010x
	VlcUint(0, 0x0401), VlcUint(0, 0x0301),  //  10: 0011x
	VlcUint(16 << 1, 0), VlcUint(0, 0xffff),  //  11: 0000 0x
	VlcUint(17 << 1, 0), VlcUint(18 << 1, 0),  //  12: 0000 1x
	VlcUint(0, 0x0701), VlcUint(0, 0x0601),  //  13: 0001 0x
	VlcUint(0, 0x0102), VlcUint(0, 0x0501),  //  14: 0001 1x
	VlcUint(19 << 1, 0), VlcUint(20 << 1, 0),  //  15: 0010 0x
	VlcUint(21 << 1, 0), VlcUint(22 << 1, 0),  //  16: 0000 00x
	VlcUint(0, 0x0202), VlcUint(0, 0x0901),  //  17: 0000 10x
	VlcUint(0, 0x0004), VlcUint(0, 0x0801),  //  18: 0000 11x
	VlcUint(23 << 1, 0), VlcUint(24 << 1, 0),  //  19: 0010 00x
	VlcUint(25 << 1, 0), VlcUint(26 << 1, 0),  //  20: 0010 01x
	VlcUint(27 << 1, 0), VlcUint(28 << 1, 0),  //  21: 0000 000x
	VlcUint(29 << 1, 0), VlcUint(30 << 1, 0),  //  22: 0000 001x
	VlcUint(0, 0x0d01), VlcUint(0, 0x0006),  //  23: 0010 000x
	VlcUint(0, 0x0c01), VlcUint(0, 0x0b01),  //  24: 0010 001x
	VlcUint(0, 0x0302), VlcUint(0, 0x0103),  //  25: 0010 010x
	VlcUint(0, 0x0005), VlcUint(0, 0x0a01),  //  26: 0010 011x
	VlcUint(31 << 1, 0), VlcUint(32 << 1, 0),  //  27: 0000 0000x
	VlcUint(33 << 1, 0), VlcUint(34 << 1, 0),  //  28: 0000 0001x
	VlcUint(35 << 1, 0), VlcUint(36 << 1, 0),  //  29: 0000 0010x
	VlcUint(37 << 1, 0), VlcUint(38 << 1, 0),  //  30: 0000 0011x
	VlcUint(39 << 1, 0), VlcUint(40 << 1, 0),  //  31: 0000 0000 0x
	VlcUint(41 << 1, 0), VlcUint(42 << 1, 0),  //  32: 0000 0000 1x
	VlcUint(43 << 1, 0), VlcUint(44 << 1, 0),  //  33: 0000 0001 0x
	VlcUint(45 << 1, 0), VlcUint(46 << 1, 0),  //  34: 0000 0001 1x
	VlcUint(0, 0x1001), VlcUint(0, 0x0502),  //  35: 0000 0010 0x
	VlcUint(0, 0x0007), VlcUint(0, 0x0203),  //  36: 0000 0010 1x
	VlcUint(0, 0x0104), VlcUint(0, 0x0f01),  //  37: 0000 0011 0x
	VlcUint(0, 0x0e01), VlcUint(0, 0x0402),  //  38: 0000 0011 1x
	VlcUint(47 << 1, 0), VlcUint(48 << 1, 0),  //  39: 0000 0000 00x
	VlcUint(49 << 1, 0), VlcUint(50 << 1, 0),  //  40: 0000 0000 01x
	VlcUint(51 << 1, 0), VlcUint(52 << 1, 0),  //  41: 0000 0000 10x
	VlcUint(53 << 1, 0), VlcUint(54 << 1, 0),  //  42: 0000 0000 11x
	VlcUint(55 << 1, 0), VlcUint(56 << 1, 0),  //  43: 0000 0001 00x
	VlcUint(57 << 1, 0), VlcUint(58 << 1, 0),  //  44: 0000 0001 01x
	VlcUint(59 << 1, 0), VlcUint(60 << 1, 0),  //  45: 0000 0001 10x
	VlcUint(61 << 1, 0), VlcUint(62 << 1, 0),  //  46: 0000 0001 11x
	VlcUint(-1, 0), VlcUint(63 << 1, 0),  //  47: 0000 0000 000x
	VlcUint(64 << 1, 0), VlcUint(65 << 1, 0),  //  48: 0000 0000 001x
	VlcUint(66 << 1, 0), VlcUint(67 << 1, 0),  //  49: 0000 0000 010x
	VlcUint(68 << 1, 0), VlcUint(69 << 1, 0),  //  50: 0000 0000 011x
	VlcUint(70 << 1, 0), VlcUint(71 << 1, 0),  //  51: 0000 0000 100x
	VlcUint(72 << 1, 0), VlcUint(73 << 1, 0),  //  52: 0000 0000 101x
	VlcUint(74 << 1, 0), VlcUint(75 << 1, 0),  //  53: 0000 0000 110x
	VlcUint(76 << 1, 0), VlcUint(77 << 1, 0),  //  54: 0000 0000 111x
	VlcUint(0, 0x000b), VlcUint(0, 0x0802),  //  55: 0000 0001 000x
	VlcUint(0, 0x0403), VlcUint(0, 0x000a),  //  56: 0000 0001 001x
	VlcUint(0, 0x0204), VlcUint(0, 0x0702),  //  57: 0000 0001 010x
	VlcUint(0, 0x1501), VlcUint(0, 0x1401),  //  58: 0000 0001 011x
	VlcUint(0, 0x0009), VlcUint(0, 0x1301),  //  59: 0000 0001 100x
	VlcUint(0, 0x1201), VlcUint(0, 0x0105),  //  60: 0000 0001 101x
	VlcUint(0, 0x0303), VlcUint(0, 0x0008),  //  61: 0000 0001 110x
	VlcUint(0, 0x0602), VlcUint(0, 0x1101),  //  62: 0000 0001 111x
	VlcUint(78 << 1, 0), VlcUint(79 << 1, 0),  //  63: 0000 0000 0001x
	VlcUint(80 << 1, 0), VlcUint(81 << 1, 0),  //  64: 0000 0000 0010x
	VlcUint(82 << 1, 0), VlcUint(83 << 1, 0),  //  65: 0000 0000 0011x
	VlcUint(84 << 1, 0), VlcUint(85 << 1, 0),  //  66: 0000 0000 0100x
	VlcUint(86 << 1, 0), VlcUint(87 << 1, 0),  //  67: 0000 0000 0101x
	VlcUint(88 << 1, 0), VlcUint(89 << 1, 0),  //  68: 0000 0000 0110x
	VlcUint(90 << 1, 0), VlcUint(91 << 1, 0),  //  69: 0000 0000 0111x
	VlcUint(0, 0x0a02), VlcUint(0, 0x0902),  //  70: 0000 0000 1000x
	VlcUint(0, 0x0503), VlcUint(0, 0x0304),  //  71: 0000 0000 1001x
	VlcUint(0, 0x0205), VlcUint(0, 0x0107),  //  72: 0000 0000 1010x
	VlcUint(0, 0x0106), VlcUint(0, 0x000f),  //  73: 0000 0000 1011x
	VlcUint(0, 0x000e), VlcUint(0, 0x000d),  //  74: 0000 0000 1100x
	VlcUint(0, 0x000c), VlcUint(0, 0x1a01),  //  75: 0000 0000 1101x
	VlcUint(0, 0x1901), VlcUint(0, 0x1801),  //  76: 0000 0000 1110x
	VlcUint(0, 0x1701), VlcUint(0, 0x1601),  //  77: 0000 0000 1111x
	VlcUint(92 << 1, 0), VlcUint(93 << 1, 0),  //  78: 0000 0000 0001 0x
	VlcUint(94 << 1, 0), VlcUint(95 << 1, 0),  //  79: 0000 0000 0001 1x
	VlcUint(96 << 1, 0), VlcUint(97 << 1, 0),  //  80: 0000 0000 0010 0x
	VlcUint(98 << 1, 0), VlcUint(99 << 1, 0),  //  81: 0000 0000 0010 1x
	VlcUint(100 << 1, 0), VlcUint(101 << 1, 0),  //  82: 0000 0000 0011 0x
	VlcUint(102 << 1, 0), VlcUint(103 << 1, 0),  //  83: 0000 0000 0011 1x
	VlcUint(0, 0x001f), VlcUint(0, 0x001e),  //  84: 0000 0000 0100 0x
	VlcUint(0, 0x001d), VlcUint(0, 0x001c),  //  85: 0000 0000 0100 1x
	VlcUint(0, 0x001b), VlcUint(0, 0x001a),  //  86: 0000 0000 0101 0x
	VlcUint(0, 0x0019), VlcUint(0, 0x0018),  //  87: 0000 0000 0101 1x
	VlcUint(0, 0x0017), VlcUint(0, 0x0016),  //  88: 0000 0000 0110 0x
	VlcUint(0, 0x0015), VlcUint(0, 0x0014),  //  89: 0000 0000 0110 1x
	VlcUint(0, 0x0013), VlcUint(0, 0x0012),  //  90: 0000 0000 0111 0x
	VlcUint(0, 0x0011), VlcUint(0, 0x0010),  //  91: 0000 0000 0111 1x
	VlcUint(104 << 1, 0), VlcUint(105 << 1, 0),  //  92: 0000 0000 0001 00x
	VlcUint(106 << 1, 0), VlcUint(107 << 1, 0),  //  93: 0000 0000 0001 01x
	VlcUint(108 << 1, 0), VlcUint(109 << 1, 0),  //  94: 0000 0000 0001 10x
	VlcUint(110 << 1, 0), VlcUint(111 << 1, 0),  //  95: 0000 0000 0001 11x
	VlcUint(0, 0x0028), VlcUint(0, 0x0027),  //  96: 0000 0000 0010 00x
	VlcUint(0, 0x0026), VlcUint(0, 0x0025),  //  97: 0000 0000 0010 01x
	VlcUint(0, 0x0024), VlcUint(0, 0x0023),  //  98: 0000 0000 0010 10x
	VlcUint(0, 0x0022), VlcUint(0, 0x0021),  //  99: 0000 0000 0010 11x
	VlcUint(0, 0x0020), VlcUint(0, 0x010e),  // 100: 0000 0000 0011 00x
	VlcUint(0, 0x010d), VlcUint(0, 0x010c),  // 101: 0000 0000 0011 01x
	VlcUint(0, 0x010b), VlcUint(0, 0x010a),  // 102: 0000 0000 0011 10x
	VlcUint(0, 0x0109), VlcUint(0, 0x0108),  // 103: 0000 0000 0011 11x
	VlcUint(0, 0x0112), VlcUint(0, 0x0111),  // 104: 0000 0000 0001 000x
	VlcUint(0, 0x0110), VlcUint(0, 0x010f),  // 105: 0000 0000 0001 001x
	VlcUint(0, 0x0603), VlcUint(0, 0x1002),  // 106: 0000 0000 0001 010x
	VlcUint(0, 0x0f02), VlcUint(0, 0x0e02),  // 107: 0000 0000 0001 011x
	VlcUint(0, 0x0d02), VlcUint(0, 0x0c02),  // 108: 0000 0000 0001 100x
	VlcUint(0, 0x0b02), VlcUint(0, 0x1f01),  // 109: 0000 0000 0001 101x
	VlcUint(0, 0x1e01), VlcUint(0, 0x1d01),  // 110: 0000 0000 0001 110x
	VlcUint(0, 0x1c01), VlcUint(0, 0x1b01),  // 111: 0000 0000 0001 111x
];

fn video_macroblock_type(picture_type: i32) -> &'static [Vlc] {
	match picture_type {
		VIDEO_PICTURE_TYPE_INTRA => &MACROBLOCK_TYPE_INTRA,
		VIDEO_PICTURE_TYPE_PREDICTIVE => &MACROBLOCK_TYPE_PREDICTIVE,
		_ => &MACROBLOCK_TYPE_B,
	}
}

fn video_dct_size(plane_index: usize) -> &'static [Vlc] {
	if plane_index == 0 { &DCT_SIZE_LUMINANCE } else { &DCT_SIZE_CHROMINANCE }
}

#[derive(Clone, Copy, Default)]
struct VideoMotion {
	full_px: bool,
	is_set: bool,
	r_size: i32,
	h: i32,
	v: i32,
}

/// One of the three frames; `base` is the offset of its Y plane in `frames_data`
/// (Cr and Cb follow it, as in the C library's single allocation).
#[derive(Clone, Copy, Default)]
struct FrameInfo {
	time: f64,
	base: usize,
}

struct Video {
	framerate: f64,
	pixel_aspect_ratio: f64,
	time: f64,
	frames_decoded: i32,
	width: i32,
	height: i32,
	mb_width: i32,
	mb_height: i32,
	mb_size: i32,

	luma_width: i32,
	luma_height: i32,

	chroma_width: i32,
	chroma_height: i32,

	start_code: i32,
	picture_type: i32,

	motion_forward: VideoMotion,
	motion_backward: VideoMotion,

	has_sequence_header: bool,

	quantizer_scale: i32,
	slice_begin: bool,
	macroblock_address: i32,

	mb_row: i32,
	mb_col: i32,

	macroblock_type: i32,
	macroblock_intra: bool,

	dc_predictor: [i32; 3],

	buffer: Buffer,

	frame_current: FrameInfo,
	frame_forward: FrameInfo,
	frame_backward: FrameInfo,

	frames_data: Vec<u8>,

	block_data: [i32; 64],
	intra_quant_matrix: [u8; 64],
	non_intra_quant_matrix: [u8; 64],

	has_reference_frame: bool,
	assume_no_b_frames: bool,
}

fn clamp(n: i32) -> u8 {
	if n > 255 {
		255
	} else if n < 0 {
		0
	} else {
		n as u8
	}
}

impl Video {
	fn create_with_buffer(buffer: Buffer) -> Box<Video> {
		let mut video = Box::new(Video {
			framerate: 0.0,
			pixel_aspect_ratio: 0.0,
			time: 0.0,
			frames_decoded: 0,
			width: 0,
			height: 0,
			mb_width: 0,
			mb_height: 0,
			mb_size: 0,
			luma_width: 0,
			luma_height: 0,
			chroma_width: 0,
			chroma_height: 0,
			start_code: 0,
			picture_type: 0,
			motion_forward: VideoMotion::default(),
			motion_backward: VideoMotion::default(),
			has_sequence_header: false,
			quantizer_scale: 0,
			slice_begin: false,
			macroblock_address: 0,
			mb_row: 0,
			mb_col: 0,
			macroblock_type: 0,
			macroblock_intra: false,
			dc_predictor: [0; 3],
			buffer,
			frame_current: FrameInfo::default(),
			frame_forward: FrameInfo::default(),
			frame_backward: FrameInfo::default(),
			frames_data: Vec::new(),
			block_data: [0; 64],
			intra_quant_matrix: [0; 64],
			non_intra_quant_matrix: [0; 64],
			has_reference_frame: false,
			assume_no_b_frames: false,
		});

		// Attempt to decode the sequence header
		video.start_code = video.buffer.find_start_code(START_SEQUENCE);
		if video.start_code != -1 {
			video.decode_sequence_header();
		}
		video
	}

	fn get_width(&mut self) -> i32 {
		if self.has_header() { self.width } else { 0 }
	}

	fn get_height(&mut self) -> i32 {
		if self.has_header() { self.height } else { 0 }
	}

	fn frame(&self, info: FrameInfo) -> Frame<'_> {
		let luma_plane_size = (self.luma_width * self.luma_height) as usize;
		let chroma_plane_size = (self.chroma_width * self.chroma_height) as usize;
		let y = info.base;
		let cr = y + luma_plane_size;
		let cb = cr + chroma_plane_size;
		Frame {
			time: info.time,
			width: self.width as u32,
			height: self.height as u32,
			y: Plane {
				width: self.luma_width as u32,
				height: self.luma_height as u32,
				data: &self.frames_data[y..y + luma_plane_size],
			},
			cr: Plane {
				width: self.chroma_width as u32,
				height: self.chroma_height as u32,
				data: &self.frames_data[cr..cr + chroma_plane_size],
			},
			cb: Plane {
				width: self.chroma_width as u32,
				height: self.chroma_height as u32,
				data: &self.frames_data[cb..cb + chroma_plane_size],
			},
		}
	}

	fn decode(&mut self) -> Option<FrameInfo> {
		if !self.has_header() {
			return None;
		}

		#[derive(Clone, Copy)]
		enum Which {
			Current,
			Forward,
			Backward,
		}

		let which;
		loop {
			if self.start_code != START_PICTURE {
				self.start_code = self.buffer.find_start_code(START_PICTURE);

				if self.start_code == -1 {
					// If we reached the end of the file and the previously decoded
					// frame was a reference frame, we still have to return it.
					if self.has_reference_frame
						&& !self.assume_no_b_frames
						&& self.buffer.has_ended()
						&& (self.picture_type == VIDEO_PICTURE_TYPE_INTRA
							|| self.picture_type == VIDEO_PICTURE_TYPE_PREDICTIVE)
					{
						self.has_reference_frame = false;
						which = Which::Backward;
						break;
					}

					return None;
				}
			}

			// Make sure we have a full picture in the buffer before attempting to
			// decode it. Sadly, this can only be done by seeking for the start code
			// of the next picture. Also, if we didn't find the start code for the
			// next picture, but the source has ended, we assume that this last
			// picture is in the buffer.
			if self.buffer.has_start_code(START_PICTURE) == -1 && !self.buffer.has_ended() {
				return None;
			}
			self.buffer.discard_read_bytes();

			self.decode_picture();

			if self.assume_no_b_frames {
				which = Which::Backward;
			} else if self.picture_type == VIDEO_PICTURE_TYPE_B {
				which = Which::Current;
			} else if self.has_reference_frame {
				which = Which::Forward;
			} else {
				self.has_reference_frame = true;
				continue;
			}
			break;
		}

		let frame = match which {
			Which::Current => &mut self.frame_current,
			Which::Forward => &mut self.frame_forward,
			Which::Backward => &mut self.frame_backward,
		};
		frame.time = self.time;
		let info = *frame;
		self.frames_decoded += 1;
		self.time = self.frames_decoded as f64 / self.framerate;

		Some(info)
	}

	fn has_header(&mut self) -> bool {
		if self.has_sequence_header {
			return true;
		}

		if self.start_code != START_SEQUENCE {
			self.start_code = self.buffer.find_start_code(START_SEQUENCE);
		}
		if self.start_code == -1 {
			return false;
		}

		if !self.decode_sequence_header() {
			return false;
		}

		true
	}

	fn decode_sequence_header(&mut self) -> bool {
		let max_header_size = 64 + 2 * 64 * 8; // 64 bit header + 2x 64 byte matrix
		if !self.buffer.has(max_header_size) {
			return false;
		}

		self.width = self.buffer.read(12);
		self.height = self.buffer.read(12);

		if self.width <= 0 || self.height <= 0 {
			return false;
		}

		// Get pixel aspect ratio
		let mut pixel_aspect_ratio_code = self.buffer.read(4);
		pixel_aspect_ratio_code -= 1;
		if pixel_aspect_ratio_code < 0 {
			pixel_aspect_ratio_code = 0;
		}
		let par_last = VIDEO_PIXEL_ASPECT_RATIO.len() as i32 - 1;
		if pixel_aspect_ratio_code > par_last {
			pixel_aspect_ratio_code = par_last;
		}
		self.pixel_aspect_ratio = VIDEO_PIXEL_ASPECT_RATIO[pixel_aspect_ratio_code as usize] as f64;

		// Get frame rate
		self.framerate = VIDEO_PICTURE_RATE[self.buffer.read(4) as usize];

		// Skip bit_rate, marker, buffer_size and constrained bit
		self.buffer.skip(18 + 1 + 10 + 1);

		// Load custom intra quant matrix?
		if self.buffer.read(1) != 0 {
			for &idx in VIDEO_ZIG_ZAG.iter() {
				self.intra_quant_matrix[idx as usize] = self.buffer.read(8) as u8;
			}
		} else {
			self.intra_quant_matrix = VIDEO_INTRA_QUANT_MATRIX;
		}

		// Load custom non intra quant matrix?
		if self.buffer.read(1) != 0 {
			for &idx in VIDEO_ZIG_ZAG.iter() {
				self.non_intra_quant_matrix[idx as usize] = self.buffer.read(8) as u8;
			}
		} else {
			self.non_intra_quant_matrix = VIDEO_NON_INTRA_QUANT_MATRIX;
		}

		self.mb_width = (self.width + 15) >> 4;
		self.mb_height = (self.height + 15) >> 4;
		self.mb_size = self.mb_width * self.mb_height;

		self.luma_width = self.mb_width << 4;
		self.luma_height = self.mb_height << 4;

		self.chroma_width = self.mb_width << 3;
		self.chroma_height = self.mb_height << 3;

		// Allocate one big chunk of data for all 3 frames = 9 planes
		let luma_plane_size = (self.luma_width * self.luma_height) as usize;
		let chroma_plane_size = (self.chroma_width * self.chroma_height) as usize;
		let frame_data_size = luma_plane_size + 2 * chroma_plane_size;

		// Half-pel motion at the bottom edge reads one row past a plane; past the
		// last plane that would be outside the allocation, so it gets a spare row.
		self.frames_data = vec![0; frame_data_size * 3 + self.luma_width as usize + 1];
		self.frame_current = FrameInfo { time: 0.0, base: frame_data_size * 0 };
		self.frame_forward = FrameInfo { time: 0.0, base: frame_data_size * 1 };
		self.frame_backward = FrameInfo { time: 0.0, base: frame_data_size * 2 };

		self.has_sequence_header = true;
		true
	}

	fn plane_offsets(&self, frame: FrameInfo) -> (usize, usize, usize) {
		let luma_plane_size = (self.luma_width * self.luma_height) as usize;
		let chroma_plane_size = (self.chroma_width * self.chroma_height) as usize;
		let y = frame.base;
		(y, y + luma_plane_size, y + luma_plane_size + chroma_plane_size)
	}

	fn decode_picture(&mut self) {
		self.buffer.skip(10); // skip temporalReference
		self.picture_type = self.buffer.read(3);
		self.buffer.skip(16); // skip vbv_delay

		// D frames or unknown coding type
		if self.picture_type <= 0 || self.picture_type > VIDEO_PICTURE_TYPE_B {
			return;
		}

		// Forward full_px, f_code
		if self.picture_type == VIDEO_PICTURE_TYPE_PREDICTIVE || self.picture_type == VIDEO_PICTURE_TYPE_B {
			self.motion_forward.full_px = self.buffer.read(1) != 0;
			let f_code = self.buffer.read(3);
			if f_code == 0 {
				// Ignore picture with zero f_code
				return;
			}
			self.motion_forward.r_size = f_code - 1;
		}

		// Backward full_px, f_code
		if self.picture_type == VIDEO_PICTURE_TYPE_B {
			self.motion_backward.full_px = self.buffer.read(1) != 0;
			let f_code = self.buffer.read(3);
			if f_code == 0 {
				// Ignore picture with zero f_code
				return;
			}
			self.motion_backward.r_size = f_code - 1;
		}

		let frame_temp = self.frame_forward;
		if self.picture_type == VIDEO_PICTURE_TYPE_INTRA || self.picture_type == VIDEO_PICTURE_TYPE_PREDICTIVE {
			self.frame_forward = self.frame_backward;
		}

		// Find first slice start code; skip extension and user data
		loop {
			self.start_code = self.buffer.next_start_code();
			if self.start_code != START_EXTENSION && self.start_code != START_USER_DATA {
				break;
			}
		}

		// Decode all slices
		while start_is_slice(self.start_code) {
			self.decode_slice(self.start_code & 0x000000FF);
			if self.macroblock_address >= self.mb_size - 1 {
				break;
			}
			self.start_code = self.buffer.next_start_code();
		}

		// If this is a reference picture rotate the prediction pointers
		if self.picture_type == VIDEO_PICTURE_TYPE_INTRA || self.picture_type == VIDEO_PICTURE_TYPE_PREDICTIVE {
			self.frame_backward = self.frame_current;
			self.frame_current = frame_temp;
		}
	}

	fn decode_slice(&mut self, slice: i32) {
		self.slice_begin = true;
		self.macroblock_address = (slice - 1) * self.mb_width - 1;

		// Reset motion vectors and DC predictors
		self.motion_forward.h = 0;
		self.motion_backward.h = 0;
		self.motion_forward.v = 0;
		self.motion_backward.v = 0;
		self.dc_predictor = [128; 3];

		self.quantizer_scale = self.buffer.read(5);

		// Skip extra
		while self.buffer.read(1) != 0 {
			self.buffer.skip(8);
		}

		loop {
			self.decode_macroblock();
			if !(self.macroblock_address < self.mb_size - 1 && self.buffer.peek_non_zero(23)) {
				break;
			}
		}
	}

	fn decode_macroblock(&mut self) {
		// Decode increment
		let mut increment = 0;
		let mut t = self.buffer.read_vlc(&MACROBLOCK_ADDRESS_INCREMENT) as i32;

		while t == 34 {
			// macroblock_stuffing
			t = self.buffer.read_vlc(&MACROBLOCK_ADDRESS_INCREMENT) as i32;
		}
		while t == 35 {
			// macroblock_escape
			increment += 33;
			t = self.buffer.read_vlc(&MACROBLOCK_ADDRESS_INCREMENT) as i32;
		}
		increment += t;

		// Process any skipped macroblocks
		if self.slice_begin {
			// The first increment of each slice is relative to beginning of the
			// previous row, not the previous macroblock
			self.slice_begin = false;
			self.macroblock_address += increment;
		} else {
			if self.macroblock_address + increment >= self.mb_size {
				return; // invalid
			}
			if increment > 1 {
				// Skipped macroblocks reset DC predictors
				self.dc_predictor = [128; 3];

				// Skipped macroblocks in P-pictures reset motion vectors
				if self.picture_type == VIDEO_PICTURE_TYPE_PREDICTIVE {
					self.motion_forward.h = 0;
					self.motion_forward.v = 0;
				}
			}

			// Predict skipped macroblocks
			while increment > 1 {
				self.macroblock_address += 1;
				self.mb_row = self.macroblock_address / self.mb_width;
				self.mb_col = self.macroblock_address % self.mb_width;

				self.predict_macroblock();
				increment -= 1;
			}
			self.macroblock_address += 1;
		}

		self.mb_row = self.macroblock_address / self.mb_width;
		self.mb_col = self.macroblock_address % self.mb_width;

		if self.mb_col >= self.mb_width || self.mb_row >= self.mb_height {
			return; // corrupt stream;
		}

		// Process the current macroblock
		let table = video_macroblock_type(self.picture_type);
		self.macroblock_type = self.buffer.read_vlc(table) as i32;

		self.macroblock_intra = (self.macroblock_type & 0x01) != 0;
		self.motion_forward.is_set = (self.macroblock_type & 0x08) != 0;
		self.motion_backward.is_set = (self.macroblock_type & 0x04) != 0;

		// Quantizer scale
		if (self.macroblock_type & 0x10) != 0 {
			self.quantizer_scale = self.buffer.read(5);
		}

		if self.macroblock_intra {
			// Intra-coded macroblocks reset motion vectors
			self.motion_forward.h = 0;
			self.motion_backward.h = 0;
			self.motion_forward.v = 0;
			self.motion_backward.v = 0;
		} else {
			// Non-intra macroblocks reset DC predictors
			self.dc_predictor = [128; 3];

			self.decode_motion_vectors();
			self.predict_macroblock();
		}

		// Decode blocks
		let cbp = if (self.macroblock_type & 0x02) != 0 {
			self.buffer.read_vlc(&CODE_BLOCK_PATTERN) as i32
		} else if self.macroblock_intra {
			0x3f
		} else {
			0
		};

		let mut mask = 0x20;
		for block in 0..6 {
			if (cbp & mask) != 0 {
				self.decode_block(block);
			}
			mask >>= 1;
		}
	}

	fn decode_motion_vectors(&mut self) {
		// Forward
		if self.motion_forward.is_set {
			let r_size = self.motion_forward.r_size;
			self.motion_forward.h = self.decode_motion_vector(r_size, self.motion_forward.h);
			self.motion_forward.v = self.decode_motion_vector(r_size, self.motion_forward.v);
		} else if self.picture_type == VIDEO_PICTURE_TYPE_PREDICTIVE {
			// No motion information in P-picture, reset vectors
			self.motion_forward.h = 0;
			self.motion_forward.v = 0;
		}

		if self.motion_backward.is_set {
			let r_size = self.motion_backward.r_size;
			self.motion_backward.h = self.decode_motion_vector(r_size, self.motion_backward.h);
			self.motion_backward.v = self.decode_motion_vector(r_size, self.motion_backward.v);
		}
	}

	fn decode_motion_vector(&mut self, r_size: i32, motion: i32) -> i32 {
		let fscale = 1 << r_size;
		let m_code = self.buffer.read_vlc(&MOTION) as i32;
		let d;

		if (m_code != 0) && (fscale != 1) {
			let r = self.buffer.read(r_size);
			let mut dd = ((m_code.abs() - 1) << r_size) + r + 1;
			if m_code < 0 {
				dd = -dd;
			}
			d = dd;
		} else {
			d = m_code;
		}

		let mut motion = motion.wrapping_add(d);
		if motion > (fscale << 4) - 1 {
			motion = motion.wrapping_sub(fscale << 5);
		} else if motion < ((fscale.wrapping_neg() as u32).wrapping_shl(4)) as i32 {
			motion = motion.wrapping_add(fscale << 5);
		}

		motion
	}

	fn predict_macroblock(&mut self) {
		let mut fw_h = self.motion_forward.h;
		let mut fw_v = self.motion_forward.v;

		if self.motion_forward.full_px {
			fw_h = fw_h.wrapping_shl(1);
			fw_v = fw_v.wrapping_shl(1);
		}

		if self.picture_type == VIDEO_PICTURE_TYPE_B {
			let mut bw_h = self.motion_backward.h;
			let mut bw_v = self.motion_backward.v;

			if self.motion_backward.full_px {
				bw_h = bw_h.wrapping_shl(1);
				bw_v = bw_v.wrapping_shl(1);
			}

			if self.motion_forward.is_set {
				self.copy_macroblock(self.frame_forward, fw_h, fw_v);
				if self.motion_backward.is_set {
					self.interpolate_macroblock(self.frame_backward, bw_h, bw_v);
				}
			} else {
				self.copy_macroblock(self.frame_backward, bw_h, bw_v);
			}
		} else {
			self.copy_macroblock(self.frame_forward, fw_h, fw_v);
		}
	}

	fn copy_macroblock(&mut self, s: FrameInfo, motion_h: i32, motion_v: i32) {
		let (sy, scr, scb) = self.plane_offsets(s);
		let (dy, dcr, dcb) = self.plane_offsets(self.frame_current);
		self.process_macroblock(sy, dy, motion_h, motion_v, 16, false);
		self.process_macroblock(scr, dcr, motion_h / 2, motion_v / 2, 8, false);
		self.process_macroblock(scb, dcb, motion_h / 2, motion_v / 2, 8, false);
	}

	fn interpolate_macroblock(&mut self, s: FrameInfo, motion_h: i32, motion_v: i32) {
		let (sy, scr, scb) = self.plane_offsets(s);
		let (dy, dcr, dcb) = self.plane_offsets(self.frame_current);
		self.process_macroblock(sy, dy, motion_h, motion_v, 16, true);
		self.process_macroblock(scr, dcr, motion_h / 2, motion_v / 2, 8, true);
		self.process_macroblock(scb, dcb, motion_h / 2, motion_v / 2, 8, true);
	}

	fn process_macroblock(
		&mut self,
		s: usize,
		d: usize,
		motion_h: i32,
		motion_v: i32,
		block_size: i32,
		interpolate: bool,
	) {
		let dw = self.mb_width * block_size;

		let hp = motion_h >> 1;
		let vp = motion_v >> 1;
		let odd_h = (motion_h & 1) == 1;
		let odd_v = (motion_v & 1) == 1;

		let si = (((self.mb_row * block_size).wrapping_add(vp)).wrapping_mul(dw))
			.wrapping_add(self.mb_col * block_size)
			.wrapping_add(hp) as u32;
		let di = ((self.mb_row * dw + self.mb_col) * block_size) as u32;

		let max_address = (dw * (self.mb_height * block_size - block_size + 1) - block_size) as u32;
		if si > max_address || di > max_address {
			return; // corrupt video
		}

		let data = &mut self.frames_data;
		let dw = dw as usize;
		let bs = block_size as usize;
		let mut si = s + si as usize;
		let mut di = d + di as usize;
		let scan = dw - bs;

		macro_rules! block_set {
			(| $s:ident, $d:ident | $op:expr) => {
				for _ in 0..bs {
					for _ in 0..bs {
						let $s = |o: usize| data[si + o] as i32;
						let $d = data[di] as i32;
						data[di] = ($op) as u8;
						si += 1;
						di += 1;
					}
					si += scan;
					di += scan;
				}
			};
		}

		match (interpolate, odd_h, odd_v) {
			(false, false, false) => block_set!(|s, _d| s(0)),
			(false, false, true) => block_set!(|s, _d| (s(0) + s(dw) + 1) >> 1),
			(false, true, false) => block_set!(|s, _d| (s(0) + s(1) + 1) >> 1),
			(false, true, true) => block_set!(|s, _d| (s(0) + s(1) + s(dw) + s(dw + 1) + 2) >> 2),

			(true, false, false) => block_set!(|s, d| (d + s(0) + 1) >> 1),
			(true, false, true) => block_set!(|s, d| (d + ((s(0) + s(dw) + 1) >> 1) + 1) >> 1),
			(true, true, false) => block_set!(|s, d| (d + ((s(0) + s(1) + 1) >> 1) + 1) >> 1),
			(true, true, true) => block_set!(|s, d| (d + ((s(0) + s(1) + s(dw) + s(dw + 1) + 2) >> 2) + 1) >> 1),
		}
	}

	fn decode_block(&mut self, block: i32) {
		let mut n: i32 = 0;
		let quant_matrix;

		// Decode DC coefficient of intra-coded blocks
		if self.macroblock_intra {
			// DC prediction
			let plane_index = if block > 3 { (block - 3) as usize } else { 0 };
			let predictor = self.dc_predictor[plane_index];
			let dct_size = self.buffer.read_vlc(video_dct_size(plane_index)) as i32;

			// Read DC coeff
			if dct_size > 0 {
				let differential = self.buffer.read(dct_size);
				if (differential & (1 << (dct_size - 1))) != 0 {
					self.block_data[0] = predictor + differential;
				} else {
					self.block_data[0] = predictor + (-(1 << dct_size) | (differential + 1));
				}
			} else {
				self.block_data[0] = predictor;
			}

			// Save predictor value
			self.dc_predictor[plane_index] = self.block_data[0];

			// Dequantize + premultiply
			self.block_data[0] = self.block_data[0].wrapping_shl(3 + 5);

			quant_matrix = self.intra_quant_matrix;
			n = 1;
		} else {
			quant_matrix = self.non_intra_quant_matrix;
		}

		// Decode AC coefficients (+DC for non-intra)
		let mut level: i32;
		loop {
			let run: i32;
			let coeff = self.buffer.read_vlc_uint(&DCT_COEFF);

			if (coeff == 0x0001) && (n > 0) && (self.buffer.read(1) == 0) {
				// end_of_block
				break;
			}
			if coeff == 0xffff {
				// escape
				run = self.buffer.read(6);
				level = self.buffer.read(8);
				if level == 0 {
					level = self.buffer.read(8);
				} else if level == 128 {
					level = self.buffer.read(8) - 256;
				} else if level > 128 {
					level -= 256;
				}
			} else {
				run = (coeff >> 8) as i32;
				level = (coeff & 0xff) as i32;
				if self.buffer.read(1) != 0 {
					level = -level;
				}
			}

			n += run;
			if !(0..64).contains(&n) {
				return; // invalid
			}

			let de_zig_zagged = VIDEO_ZIG_ZAG[n as usize] as usize;
			n += 1;

			// Dequantize, oddify, clip
			level = (level as u32).wrapping_shl(1) as i32;
			if !self.macroblock_intra {
				level += if level < 0 { -1 } else { 1 };
			}
			level = (level.wrapping_mul(self.quantizer_scale).wrapping_mul(quant_matrix[de_zig_zagged] as i32)) >> 4;
			if (level & 1) == 0 {
				level -= if level > 0 { 1 } else { -1 };
			}
			if level > 2047 {
				level = 2047;
			} else if level < -2048 {
				level = -2048;
			}

			// Save premultiplied coefficient
			self.block_data[de_zig_zagged] = level * VIDEO_PREMULTIPLIER_MATRIX[de_zig_zagged] as i32;
		}

		// Move block to its place
		let (y, cr, cb) = self.plane_offsets(self.frame_current);
		let d;
		let dw;
		let mut di;

		if block < 4 {
			d = y;
			dw = self.luma_width;
			di = (self.mb_row * self.luma_width + self.mb_col) << 4;
			if (block & 1) != 0 {
				di += 8;
			}
			if (block & 2) != 0 {
				di += self.luma_width << 3;
			}
		} else {
			d = if block == 4 { cb } else { cr };
			dw = self.chroma_width;
			di = ((self.mb_row * self.luma_width) << 2) + (self.mb_col << 3);
		}

		let start = d as i64 + di as i64;
		let in_bounds = start >= 0 && start as usize + 7 * dw as usize + 8 <= self.frames_data.len();
		let data = &mut self.frames_data;
		let s = &mut self.block_data;
		let dw = dw as usize;
		let mut di = start as usize;
		let mut si = 0;

		macro_rules! block_set {
			(| $d:ident, $s:ident | $op:expr) => {
				if in_bounds {
					for _ in 0..8 {
						for _ in 0..8 {
							let $d = data[di] as i32;
							let $s = s[si];
							data[di] = $op;
							si += 1;
							di += 1;
						}
						di += dw - 8;
					}
				}
			};
		}

		if self.macroblock_intra {
			// Overwrite (no prediction)
			if n == 1 {
				let clamped = clamp((s[0] + 128) >> 8);
				block_set!(|_d, _s| clamped);
				s[0] = 0;
			} else {
				idct(s);
				block_set!(|_d, s| clamp(s));
				*s = [0; 64];
			}
		} else {
			// Add data to the predicted macroblock
			if n == 1 {
				let value = (s[0] + 128) >> 8;
				block_set!(|d, _s| clamp(d + value));
				s[0] = 0;
			} else {
				idct(s);
				block_set!(|d, s| clamp(d + s));
				*s = [0; 64];
			}
		}
	}
}

fn idct(block: &mut [i32; 64]) {
	// Transform columns
	for i in 0..8 {
		let b1 = block[4 * 8 + i];
		let b3 = block[2 * 8 + i].wrapping_add(block[6 * 8 + i]);
		let b4 = block[5 * 8 + i].wrapping_sub(block[3 * 8 + i]);
		let tmp1 = block[1 * 8 + i].wrapping_add(block[7 * 8 + i]);
		let tmp2 = block[3 * 8 + i].wrapping_add(block[5 * 8 + i]);
		let b6 = block[1 * 8 + i].wrapping_sub(block[7 * 8 + i]);
		let b7 = tmp1.wrapping_add(tmp2);
		let m0 = block[0 * 8 + i];
		let x4 = ((b6.wrapping_mul(473).wrapping_sub(b4.wrapping_mul(196)).wrapping_add(128)) >> 8).wrapping_sub(b7);
		let x0 = x4.wrapping_sub((tmp1.wrapping_sub(tmp2).wrapping_mul(362).wrapping_add(128)) >> 8);
		let x1 = m0.wrapping_sub(b1);
		let x2 = ((block[2 * 8 + i].wrapping_sub(block[6 * 8 + i]).wrapping_mul(362).wrapping_add(128)) >> 8)
			.wrapping_sub(b3);
		let x3 = m0.wrapping_add(b1);
		let y3 = x1.wrapping_add(x2);
		let y4 = x3.wrapping_add(b3);
		let y5 = x1.wrapping_sub(x2);
		let y6 = x3.wrapping_sub(b3);
		let y7 = x0
			.wrapping_neg()
			.wrapping_sub((b4.wrapping_mul(473).wrapping_add(b6.wrapping_mul(196)).wrapping_add(128)) >> 8);
		block[0 * 8 + i] = b7.wrapping_add(y4);
		block[1 * 8 + i] = x4.wrapping_add(y3);
		block[2 * 8 + i] = y5.wrapping_sub(x0);
		block[3 * 8 + i] = y6.wrapping_sub(y7);
		block[4 * 8 + i] = y6.wrapping_add(y7);
		block[5 * 8 + i] = x0.wrapping_add(y5);
		block[6 * 8 + i] = y3.wrapping_sub(x4);
		block[7 * 8 + i] = y4.wrapping_sub(b7);
	}

	// Transform rows
	for i in (0..64).step_by(8) {
		let b1 = block[4 + i];
		let b3 = block[2 + i].wrapping_add(block[6 + i]);
		let b4 = block[5 + i].wrapping_sub(block[3 + i]);
		let tmp1 = block[1 + i].wrapping_add(block[7 + i]);
		let tmp2 = block[3 + i].wrapping_add(block[5 + i]);
		let b6 = block[1 + i].wrapping_sub(block[7 + i]);
		let b7 = tmp1.wrapping_add(tmp2);
		let m0 = block[0 + i];
		let x4 = ((b6.wrapping_mul(473).wrapping_sub(b4.wrapping_mul(196)).wrapping_add(128)) >> 8).wrapping_sub(b7);
		let x0 = x4.wrapping_sub((tmp1.wrapping_sub(tmp2).wrapping_mul(362).wrapping_add(128)) >> 8);
		let x1 = m0.wrapping_sub(b1);
		let x2 = ((block[2 + i].wrapping_sub(block[6 + i]).wrapping_mul(362).wrapping_add(128)) >> 8).wrapping_sub(b3);
		let x3 = m0.wrapping_add(b1);
		let y3 = x1.wrapping_add(x2);
		let y4 = x3.wrapping_add(b3);
		let y5 = x1.wrapping_sub(x2);
		let y6 = x3.wrapping_sub(b3);
		let y7 = x0
			.wrapping_neg()
			.wrapping_sub((b4.wrapping_mul(473).wrapping_add(b6.wrapping_mul(196)).wrapping_add(128)) >> 8);
		block[0 + i] = (b7.wrapping_add(y4).wrapping_add(128)) >> 8;
		block[1 + i] = (x4.wrapping_add(y3).wrapping_add(128)) >> 8;
		block[2 + i] = (y5.wrapping_sub(x0).wrapping_add(128)) >> 8;
		block[3 + i] = (y6.wrapping_sub(y7).wrapping_add(128)) >> 8;
		block[4 + i] = (y6.wrapping_add(y7).wrapping_add(128)) >> 8;
		block[5 + i] = (x0.wrapping_add(y5).wrapping_add(128)) >> 8;
		block[6 + i] = (y3.wrapping_sub(x4).wrapping_add(128)) >> 8;
		block[7 + i] = (y4.wrapping_sub(b7).wrapping_add(128)) >> 8;
	}
}

// YCbCr conversion following the BT.601 standard:
// https://infogalactic.com/info/YCbCr#ITU-R_BT.601_conversion

/// Convert the YCrCb data of a frame into interleaved R G B A data. The stride
/// specifies the width in bytes of the destination buffer. I.e. the number of
/// bytes from one line to the next. The stride must be at least
/// (frame->width * bytes_per_pixel). The buffer pointed to by dest must have a
/// size of at least (stride * frame->height).
/// Note that the alpha component of the dest buffer is always left untouched.
pub fn frame_to_rgba(frame: &Frame, dest: &mut [u8], stride: i32) {
	const BYTES_PER_PIXEL: usize = 4;
	const RI: usize = 0;
	const GI: usize = 1;
	const BI: usize = 2;
	let cols = (frame.width >> 1) as i32;
	let rows = (frame.height >> 1) as i32;
	let yw = frame.y.width as i32;
	let cw = frame.cb.width as i32;
	let stride = stride as usize;
	for row in 0..rows {
		let mut c_index = (row * cw) as usize;
		let mut y_index = (row * 2 * yw) as usize;
		let mut d_index = row as usize * 2 * stride;
		for _ in 0..cols {
			let cr = frame.cr.data[c_index] as i32 - 128;
			let cb = frame.cb.data[c_index] as i32 - 128;
			let r = (cr * 104597) >> 16;
			let g = (cb * 25674 + cr * 53278) >> 16;
			let b = (cb * 132201) >> 16;
			for (y_offset, dest_offset) in
				[(0, 0), (1, BYTES_PER_PIXEL), (yw as usize, stride), (yw as usize + 1, stride + BYTES_PER_PIXEL)]
			{
				let y = ((frame.y.data[y_index + y_offset] as i32 - 16) * 76309) >> 16;
				dest[d_index + dest_offset + RI] = clamp(y + r);
				dest[d_index + dest_offset + GI] = clamp(y - g);
				dest[d_index + dest_offset + BI] = clamp(y + b);
			}
			c_index += 1;
			y_index += 2;
			d_index += 2 * BYTES_PER_PIXEL;
		}
	}
}

// -----------------------------------------------------------------------------
// plm_audio implementation

// Based on kjmp2 by Martin J. Fiedler
// http://keyj.emphy.de/kjmp2/

const AUDIO_FRAME_SYNC: i32 = 0x7ff;

#[allow(dead_code)]
const AUDIO_MPEG_2_5: i32 = 0x0;
#[allow(dead_code)]
const AUDIO_MPEG_2: i32 = 0x2;
const AUDIO_MPEG_1: i32 = 0x3;

#[allow(dead_code)]
const AUDIO_LAYER_III: i32 = 0x1;
const AUDIO_LAYER_II: i32 = 0x2;
#[allow(dead_code)]
const AUDIO_LAYER_I: i32 = 0x3;

#[allow(dead_code)]
const AUDIO_MODE_STEREO: i32 = 0x0;
const AUDIO_MODE_JOINT_STEREO: i32 = 0x1;
#[allow(dead_code)]
const AUDIO_MODE_DUAL_CHANNEL: i32 = 0x2;
const AUDIO_MODE_MONO: i32 = 0x3;

static AUDIO_SAMPLE_RATE: [u16; 8] = [
	44100, 48000, 32000, 0, // MPEG-1
	22050, 24000, 16000, 0, // MPEG-2
];

static AUDIO_BIT_RATE: [i16; 28] = [
	32, 48, 56, 64, 80, 96, 112, 128, 160, 192, 224, 256, 320, 384, // MPEG-1
	8, 16, 24, 32, 40, 48, 56, 64, 80, 96, 112, 128, 144, 160, // MPEG-2
];

static AUDIO_SCALEFACTOR_BASE: [i32; 3] = [0x02000000, 0x01965FEA, 0x01428A30];

#[rustfmt::skip]
static AUDIO_SYNTHESIS_WINDOW: [f32; 512] = [
	     0.0,     -0.5,     -0.5,     -0.5,     -0.5,     -0.5,
	    -0.5,     -1.0,     -1.0,     -1.0,     -1.0,     -1.5,
	    -1.5,     -2.0,     -2.0,     -2.5,     -2.5,     -3.0,
	    -3.5,     -3.5,     -4.0,     -4.5,     -5.0,     -5.5,
	    -6.5,     -7.0,     -8.0,     -8.5,     -9.5,    -10.5,
	   -12.0,    -13.0,    -14.5,    -15.5,    -17.5,    -19.0,
	   -20.5,    -22.5,    -24.5,    -26.5,    -29.0,    -31.5,
	   -34.0,    -36.5,    -39.5,    -42.5,    -45.5,    -48.5,
	   -52.0,    -55.5,    -58.5,    -62.5,    -66.0,    -69.5,
	   -73.5,    -77.0,    -80.5,    -84.5,    -88.0,    -91.5,
	   -95.0,    -98.0,   -101.0,   -104.0,    106.5,    109.0,
	   111.0,    112.5,    113.5,    114.0,    114.0,    113.5,
	   112.0,    110.5,    107.5,    104.0,    100.0,     94.5,
	    88.5,     81.5,     73.0,     63.5,     53.0,     41.5,
	    28.5,     14.5,     -1.0,    -18.0,    -36.0,    -55.5,
	   -76.5,    -98.5,   -122.0,   -147.0,   -173.5,   -200.5,
	  -229.5,   -259.5,   -290.5,   -322.5,   -355.5,   -389.5,
	  -424.0,   -459.5,   -495.5,   -532.0,   -568.5,   -605.0,
	  -641.5,   -678.0,   -714.0,   -749.0,   -783.5,   -817.0,
	  -849.0,   -879.5,   -908.5,   -935.0,   -959.5,   -981.0,
	 -1000.5,  -1016.0,  -1028.5,  -1037.5,  -1042.5,  -1043.5,
	 -1040.0,  -1031.5,   1018.5,   1000.0,    976.0,    946.5,
	   911.0,    869.5,    822.0,    767.5,    707.0,    640.0,
	   565.5,    485.0,    397.0,    302.5,    201.0,     92.5,
	   -22.5,   -144.0,   -272.5,   -407.0,   -547.5,   -694.0,
	  -846.0,  -1003.0,  -1165.0,  -1331.5,  -1502.0,  -1675.5,
	 -1852.5,  -2031.5,  -2212.5,  -2394.0,  -2576.5,  -2758.5,
	 -2939.5,  -3118.5,  -3294.5,  -3467.5,  -3635.5,  -3798.5,
	 -3955.0,  -4104.5,  -4245.5,  -4377.5,  -4499.0,  -4609.5,
	 -4708.0,  -4792.5,  -4863.5,  -4919.0,  -4958.0,  -4979.5,
	 -4983.0,  -4967.5,  -4931.5,  -4875.0,  -4796.0,  -4694.5,
	 -4569.5,  -4420.0,  -4246.0,  -4046.0,  -3820.0,  -3567.0,
	  3287.0,   2979.5,   2644.0,   2280.5,   1888.0,   1467.5,
	  1018.5,    541.0,     35.0,   -499.0,  -1061.0,  -1650.0,
	 -2266.5,  -2909.0,  -3577.0,  -4270.0,  -4987.5,  -5727.5,
	 -6490.0,  -7274.0,  -8077.5,  -8899.5,  -9739.0, -10594.5,
	-11464.5, -12347.0, -13241.0, -14144.5, -15056.0, -15973.5,
	-16895.5, -17820.0, -18744.5, -19668.0, -20588.0, -21503.0,
	-22410.5, -23308.5, -24195.0, -25068.5, -25926.5, -26767.0,
	-27589.0, -28389.0, -29166.5, -29919.0, -30644.5, -31342.0,
	-32009.5, -32645.0, -33247.0, -33814.5, -34346.0, -34839.5,
	-35295.0, -35710.0, -36084.5, -36417.5, -36707.5, -36954.0,
	-37156.5, -37315.0, -37428.0, -37496.0,  37519.0,  37496.0,
	 37428.0,  37315.0,  37156.5,  36954.0,  36707.5,  36417.5,
	 36084.5,  35710.0,  35295.0,  34839.5,  34346.0,  33814.5,
	 33247.0,  32645.0,  32009.5,  31342.0,  30644.5,  29919.0,
	 29166.5,  28389.0,  27589.0,  26767.0,  25926.5,  25068.5,
	 24195.0,  23308.5,  22410.5,  21503.0,  20588.0,  19668.0,
	 18744.5,  17820.0,  16895.5,  15973.5,  15056.0,  14144.5,
	 13241.0,  12347.0,  11464.5,  10594.5,   9739.0,   8899.5,
	  8077.5,   7274.0,   6490.0,   5727.5,   4987.5,   4270.0,
	  3577.0,   2909.0,   2266.5,   1650.0,   1061.0,    499.0,
	   -35.0,   -541.0,  -1018.5,  -1467.5,  -1888.0,  -2280.5,
	 -2644.0,  -2979.5,   3287.0,   3567.0,   3820.0,   4046.0,
	  4246.0,   4420.0,   4569.5,   4694.5,   4796.0,   4875.0,
	  4931.5,   4967.5,   4983.0,   4979.5,   4958.0,   4919.0,
	  4863.5,   4792.5,   4708.0,   4609.5,   4499.0,   4377.5,
	  4245.5,   4104.5,   3955.0,   3798.5,   3635.5,   3467.5,
	  3294.5,   3118.5,   2939.5,   2758.5,   2576.5,   2394.0,
	  2212.5,   2031.5,   1852.5,   1675.5,   1502.0,   1331.5,
	  1165.0,   1003.0,    846.0,    694.0,    547.5,    407.0,
	   272.5,    144.0,     22.5,    -92.5,   -201.0,   -302.5,
	  -397.0,   -485.0,   -565.5,   -640.0,   -707.0,   -767.5,
	  -822.0,   -869.5,   -911.0,   -946.5,   -976.0,  -1000.0,
	  1018.5,   1031.5,   1040.0,   1043.5,   1042.5,   1037.5,
	  1028.5,   1016.0,   1000.5,    981.0,    959.5,    935.0,
	   908.5,    879.5,    849.0,    817.0,    783.5,    749.0,
	   714.0,    678.0,    641.5,    605.0,    568.5,    532.0,
	   495.5,    459.5,    424.0,    389.5,    355.5,    322.5,
	   290.5,    259.5,    229.5,    200.5,    173.5,    147.0,
	   122.0,     98.5,     76.5,     55.5,     36.0,     18.0,
	     1.0,    -14.5,    -28.5,    -41.5,    -53.0,    -63.5,
	   -73.0,    -81.5,    -88.5,    -94.5,   -100.0,   -104.0,
	  -107.5,   -110.5,   -112.0,   -113.5,   -114.0,   -114.0,
	  -113.5,   -112.5,   -111.0,   -109.0,    106.5,    104.0,
	   101.0,     98.0,     95.0,     91.5,     88.0,     84.5,
	    80.5,     77.0,     73.5,     69.5,     66.0,     62.5,
	    58.5,     55.5,     52.0,     48.5,     45.5,     42.5,
	    39.5,     36.5,     34.0,     31.5,     29.0,     26.5,
	    24.5,     22.5,     20.5,     19.0,     17.5,     15.5,
	    14.5,     13.0,     12.0,     10.5,      9.5,      8.5,
	     8.0,      7.0,      6.5,      5.5,      5.0,      4.5,
	     4.0,      3.5,      3.5,      3.0,      2.5,      2.5,
	     2.0,      2.0,      1.5,      1.5,      1.0,      1.0,
	     1.0,      1.0,      0.5,      0.5,      0.5,      0.5,
	     0.5,      0.5
];

// Quantizer lookup, step 1: bitrate classes
#[rustfmt::skip]
static AUDIO_QUANT_LUT_STEP_1: [[u8; 16]; 2] = [
	// 32, 48, 56, 64, 80, 96,112,128,160,192,224,256,320,384 <- bitrate
	[ 0,  0,  1,  1,  1,  2,  2,  2,  2,  2,  2,  2,  2,  2, 0, 0 ], // mono
	// 16, 24, 28, 32, 40, 48, 56, 64, 80, 96,112,128,160,192 <- bitrate / chan
	[ 0,  0,  0,  0,  0,  0,  1,  1,  1,  2,  2,  2,  2,  2, 0, 0 ], // stereo
];

// Quantizer lookup, step 2: bitrate class, sample rate -> B2 table idx, sblimit
const AUDIO_QUANT_TAB_A: u8 = 27 | 64; // Table 3-B.2a: high-rate, sblimit = 27
const AUDIO_QUANT_TAB_B: u8 = 30 | 64; // Table 3-B.2b: high-rate, sblimit = 30
const AUDIO_QUANT_TAB_C: u8 = 8; // Table 3-B.2c:  low-rate, sblimit =  8
const AUDIO_QUANT_TAB_D: u8 = 12; // Table 3-B.2d:  low-rate, sblimit = 12

#[rustfmt::skip]
static QUANT_LUT_STEP_2: [[u8; 3]; 3] = [
	//44.1 kHz,          48 kHz,            32 kHz
	[ AUDIO_QUANT_TAB_C, AUDIO_QUANT_TAB_C, AUDIO_QUANT_TAB_D ], // 32 - 48 kbit/sec/ch
	[ AUDIO_QUANT_TAB_A, AUDIO_QUANT_TAB_A, AUDIO_QUANT_TAB_A ], // 56 - 80 kbit/sec/ch
	[ AUDIO_QUANT_TAB_B, AUDIO_QUANT_TAB_A, AUDIO_QUANT_TAB_B ], // 96+	 kbit/sec/ch
];

// Quantizer lookup, step 3: B2 table, subband -> nbal, row index
// (upper 4 bits: nbal, lower 4 bits: row index)
#[rustfmt::skip]
static AUDIO_QUANT_LUT_STEP_3: [[u8; 32]; 3] = [
	// Low-rate table (3-B.2c and 3-B.2d)
	[
		0x44,0x44,
		0x34,0x34,0x34,0x34,0x34,0x34,0x34,0x34,0x34,0x34,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	],
	// High-rate table (3-B.2a and 3-B.2b)
	[
		0x43,0x43,0x43,
		0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,
		0x31,0x31,0x31,0x31,0x31,0x31,0x31,0x31,0x31,0x31,0x31,0x31,
		0x20,0x20,0x20,0x20,0x20,0x20,0x20,
		0,0,
	],
	// MPEG-2 LSR table (B.2 in ISO 13818-3)
	[
		0x45,0x45,0x45,0x45,
		0x34,0x34,0x34,0x34,0x34,0x34,0x34,
		0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,
		0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,
		0,0,
	],
];

// Quantizer lookup, step 4: table row, allocation[] value -> quant table index
#[rustfmt::skip]
static AUDIO_QUANT_LUT_STEP_4: [[u8; 16]; 6] = [
	[ 0, 1, 2, 17, 0, 0, 0,  0,  0,  0,  0,  0,  0,  0,  0,  0 ],
	[ 0, 1, 2,  3, 4, 5, 6, 17,  0,  0,  0,  0,  0,  0,  0,  0 ],
	[ 0, 1, 2,  3, 4, 5, 6,  7,  8,  9, 10, 11, 12, 13, 14, 17 ],
	[ 0, 1, 3,  5, 6, 7, 8,  9, 10, 11, 12, 13, 14, 15, 16, 17 ],
	[ 0, 1, 2,  4, 5, 6, 7,  8,  9, 10, 11, 12, 13, 14, 15, 17 ],
	[ 0, 1, 2,  3, 4, 5, 6,  7,  8,  9, 10, 11, 12, 13, 14, 15 ],
];

struct QuantizerSpec {
	levels: u16,
	group: u8,
	bits: u8,
}

#[rustfmt::skip]
static AUDIO_QUANT_TAB: [QuantizerSpec; 17] = [
	QuantizerSpec { levels:     3, group: 1, bits:  5 },  //  1
	QuantizerSpec { levels:     5, group: 1, bits:  7 },  //  2
	QuantizerSpec { levels:     7, group: 0, bits:  3 },  //  3
	QuantizerSpec { levels:     9, group: 1, bits: 10 },  //  4
	QuantizerSpec { levels:    15, group: 0, bits:  4 },  //  5
	QuantizerSpec { levels:    31, group: 0, bits:  5 },  //  6
	QuantizerSpec { levels:    63, group: 0, bits:  6 },  //  7
	QuantizerSpec { levels:   127, group: 0, bits:  7 },  //  8
	QuantizerSpec { levels:   255, group: 0, bits:  8 },  //  9
	QuantizerSpec { levels:   511, group: 0, bits:  9 },  // 10
	QuantizerSpec { levels:  1023, group: 0, bits: 10 },  // 11
	QuantizerSpec { levels:  2047, group: 0, bits: 11 },  // 12
	QuantizerSpec { levels:  4095, group: 0, bits: 12 },  // 13
	QuantizerSpec { levels:  8191, group: 0, bits: 13 },  // 14
	QuantizerSpec { levels: 16383, group: 0, bits: 14 },  // 15
	QuantizerSpec { levels: 32767, group: 0, bits: 15 },  // 16
	QuantizerSpec { levels: 65535, group: 0, bits: 16 },  // 17
];

struct Audio {
	time: f64,
	samples_decoded: i32,
	samplerate_index: i32,
	bitrate_index: i32,
	version: i32,
	layer: i32,
	mode: i32,
	bound: i32,
	v_pos: i32,
	next_frame_data_size: i32,
	has_header: bool,

	buffer: Buffer,

	allocation: [[Option<&'static QuantizerSpec>; 32]; 2],
	scale_factor_info: [[u8; 32]; 2],
	scale_factor: [[[i32; 3]; 32]; 2],
	sample: [[[i32; 3]; 32]; 2],

	samples: Samples,
	d: [f32; 1024],
	v: [[f32; 1024]; 2],
	u: [f32; 32],
}

impl Audio {
	fn create_with_buffer(buffer: Buffer) -> Box<Audio> {
		let mut audio = Box::new(Audio {
			time: 0.0,
			samples_decoded: 0,
			samplerate_index: 3, // Indicates 0
			bitrate_index: 0,
			version: 0,
			layer: 0,
			mode: 0,
			bound: 0,
			v_pos: 0,
			next_frame_data_size: 0,
			has_header: false,
			buffer,
			allocation: [[None; 32]; 2],
			scale_factor_info: [[0; 32]; 2],
			scale_factor: [[[0; 3]; 32]; 2],
			sample: [[[0; 3]; 32]; 2],
			samples: Samples {
				time: 0.0,
				count: AUDIO_SAMPLES_PER_FRAME as u32,
				interleaved: [0.0; AUDIO_SAMPLES_PER_FRAME * 2],
			},
			d: [0.0; 1024],
			v: [[0.0; 1024]; 2],
			u: [0.0; 32],
		});

		audio.d[..512].copy_from_slice(&AUDIO_SYNTHESIS_WINDOW);
		audio.d[512..].copy_from_slice(&AUDIO_SYNTHESIS_WINDOW);

		// Attempt to decode first header
		audio.next_frame_data_size = audio.decode_header();

		audio
	}

	fn has_header(&mut self) -> bool {
		if self.has_header {
			return true;
		}

		self.next_frame_data_size = self.decode_header();
		self.has_header
	}

	fn get_samplerate(&mut self) -> i32 {
		if self.has_header() { AUDIO_SAMPLE_RATE[self.samplerate_index as usize] as i32 } else { 0 }
	}

	/// Decodes one frame into `samples`; false when there was none.
	fn decode(&mut self) -> bool {
		// Do we have at least enough information to decode the frame header?
		if self.next_frame_data_size == 0 {
			if !self.buffer.has(48) {
				return false;
			}
			self.next_frame_data_size = self.decode_header();
		}

		if self.next_frame_data_size == 0 || !self.buffer.has((self.next_frame_data_size << 3) as usize) {
			return false;
		}

		self.decode_frame();
		self.next_frame_data_size = 0;

		self.samples.time = self.time;

		self.samples_decoded += AUDIO_SAMPLES_PER_FRAME as i32;
		self.time = self.samples_decoded as f64 / AUDIO_SAMPLE_RATE[self.samplerate_index as usize] as f64;

		true
	}

	fn find_frame_sync(&mut self) -> bool {
		let buffer = &mut self.buffer;
		let mut i = buffer.bit_index >> 3;
		while i < buffer.length.wrapping_sub(1) {
			if buffer.bytes[i] == 0xFF && (buffer.bytes[i + 1] & 0xFE) == 0xFC {
				buffer.bit_index = ((i + 1) << 3) + 3;
				return true;
			}
			i += 1;
		}
		buffer.bit_index = (i + 1) << 3;
		false
	}

	fn decode_header(&mut self) -> i32 {
		if !self.buffer.has(48) {
			return 0;
		}

		self.buffer.skip_bytes(0x00);
		let sync = self.buffer.read(11);

		// Attempt to resync if no syncword was found. This sucks balls. The MP2
		// stream contains a syncword just before every frame (11 bits set to 1).
		// However, this syncword is not guaranteed to not occur elsewhere in the
		// stream. So, if we have to resync, we also have to check if the header
		// (samplerate, bitrate) differs from the one we had before. This all
		// may still lead to garbage data being decoded :/

		if sync != AUDIO_FRAME_SYNC && !self.find_frame_sync() {
			return 0;
		}

		self.version = self.buffer.read(2);
		self.layer = self.buffer.read(2);
		let has_crc = self.buffer.read(1) == 0;

		if self.version != AUDIO_MPEG_1 || self.layer != AUDIO_LAYER_II {
			return 0;
		}

		let bitrate_index = self.buffer.read(4) - 1;
		if bitrate_index > 13 {
			return 0;
		}

		let samplerate_index = self.buffer.read(2);
		if samplerate_index == 3 {
			return 0;
		}

		let padding = self.buffer.read(1);
		self.buffer.skip(1); // f_private
		let mode = self.buffer.read(2);

		// If we already have a header, make sure the samplerate, bitrate and mode
		// are still the same, otherwise we might have missed sync.
		if self.has_header
			&& (self.bitrate_index != bitrate_index || self.samplerate_index != samplerate_index || self.mode != mode)
		{
			return 0;
		}

		self.bitrate_index = bitrate_index;
		self.samplerate_index = samplerate_index;
		self.mode = mode;
		self.has_header = true;

		// Parse the mode_extension, set up the stereo bound
		if mode == AUDIO_MODE_JOINT_STEREO {
			self.bound = (self.buffer.read(2) + 1) << 2;
		} else {
			self.buffer.skip(2);
			self.bound = if mode == AUDIO_MODE_MONO { 0 } else { 32 };
		}

		// Discard the last 4 bits of the header and the CRC value, if present
		self.buffer.skip(4); // copyright(1), original(1), emphasis(2)
		if has_crc {
			self.buffer.skip(16);
		}

		// Compute frame size, check if we have enough data to decode the whole
		// frame.
		let bitrate = AUDIO_BIT_RATE[self.bitrate_index as usize] as i32;
		let samplerate = AUDIO_SAMPLE_RATE[self.samplerate_index as usize] as i32;
		let frame_size = (144000 * bitrate / samplerate) + padding;
		frame_size - if has_crc { 6 } else { 4 }
	}

	fn decode_frame(&mut self) {
		// Prepare the quantizer table lookups
		let tab1 = if self.mode == AUDIO_MODE_MONO { 0 } else { 1 };
		let tab2 = AUDIO_QUANT_LUT_STEP_1[tab1][self.bitrate_index as usize] as usize;
		let mut tab3 = QUANT_LUT_STEP_2[tab2][self.samplerate_index as usize] as i32;
		let sblimit = tab3 & 63;
		tab3 >>= 6;

		if self.bound > sblimit {
			self.bound = sblimit;
		}

		// Read the allocation information
		for sb in 0..self.bound {
			self.allocation[0][sb as usize] = self.read_allocation(sb, tab3);
			self.allocation[1][sb as usize] = self.read_allocation(sb, tab3);
		}

		for sb in self.bound..sblimit {
			let allocation = self.read_allocation(sb, tab3);
			self.allocation[0][sb as usize] = allocation;
			self.allocation[1][sb as usize] = allocation;
		}

		// Read scale factor selector information
		let channels = if self.mode == AUDIO_MODE_MONO { 1 } else { 2 };
		for sb in 0..sblimit as usize {
			for ch in 0..channels {
				if self.allocation[ch][sb].is_some() {
					self.scale_factor_info[ch][sb] = self.buffer.read(2) as u8;
				}
			}
			if self.mode == AUDIO_MODE_MONO {
				self.scale_factor_info[1][sb] = self.scale_factor_info[0][sb];
			}
		}

		// Read scale factors
		for sb in 0..sblimit as usize {
			for ch in 0..channels {
				if self.allocation[ch][sb].is_some() {
					match self.scale_factor_info[ch][sb] {
						0 => {
							self.scale_factor[ch][sb][0] = self.buffer.read(6);
							self.scale_factor[ch][sb][1] = self.buffer.read(6);
							self.scale_factor[ch][sb][2] = self.buffer.read(6);
						}
						1 => {
							let v = self.buffer.read(6);
							self.scale_factor[ch][sb][0] = v;
							self.scale_factor[ch][sb][1] = v;
							self.scale_factor[ch][sb][2] = self.buffer.read(6);
						}
						2 => {
							let v = self.buffer.read(6);
							self.scale_factor[ch][sb] = [v; 3];
						}
						3 => {
							self.scale_factor[ch][sb][0] = self.buffer.read(6);
							let v = self.buffer.read(6);
							self.scale_factor[ch][sb][1] = v;
							self.scale_factor[ch][sb][2] = v;
						}
						_ => {}
					}
				}
			}
			if self.mode == AUDIO_MODE_MONO {
				self.scale_factor[1][sb] = self.scale_factor[0][sb];
			}
		}

		// Coefficient input and reconstruction
		let mut out_pos = 0;
		for part in 0..3 {
			for _granule in 0..4 {
				// Read the samples
				for sb in 0..self.bound as usize {
					self.read_samples(0, sb, part);
					self.read_samples(1, sb, part);
				}
				for sb in self.bound as usize..sblimit as usize {
					self.read_samples(0, sb, part);
					self.sample[1][sb] = self.sample[0][sb];
				}
				for sb in sblimit as usize..32 {
					self.sample[0][sb] = [0; 3];
					self.sample[1][sb] = [0; 3];
				}

				// Synthesis loop
				for p in 0..3 {
					// Shifting step
					self.v_pos = (self.v_pos - 64) & 1023;

					for ch in 0..2 {
						idct36(&self.sample[ch], p, &mut self.v[ch], self.v_pos as usize);

						// Build U, windowing, calculate output
						self.u = [0.0; 32];

						let mut d_index = (512 - (self.v_pos >> 1)) as usize;
						let mut v_index = ((self.v_pos % 128) >> 1) as usize;
						while v_index < 1024 {
							for i in 0..32 {
								self.u[i] += self.d[d_index] * self.v[ch][v_index];
								d_index += 1;
								v_index += 1;
							}

							v_index += 128 - 32;
							d_index += 64 - 32;
						}

						d_index -= 512 - 32;
						v_index = (128 - 32 + 1024) - v_index;
						while v_index < 1024 {
							for i in 0..32 {
								self.u[i] += self.d[d_index] * self.v[ch][v_index];
								d_index += 1;
								v_index += 1;
							}

							v_index += 128 - 32;
							d_index += 64 - 32;
						}

						// Output samples
						for j in 0..32 {
							self.samples.interleaved[((out_pos + j) << 1) + ch] = self.u[j] / -1090519040.0f32;
						}
					} // End of synthesis channel loop
					out_pos += 32;
				} // End of synthesis sub-block loop
			} // Decoding of the granule finished
		}

		self.buffer.align();
	}

	fn read_allocation(&mut self, sb: i32, tab3: i32) -> Option<&'static QuantizerSpec> {
		let tab4 = AUDIO_QUANT_LUT_STEP_3[tab3 as usize][sb as usize] as i32;
		let qtab = AUDIO_QUANT_LUT_STEP_4[(tab4 & 15) as usize][self.buffer.read(tab4 >> 4) as usize] as usize;
		if qtab != 0 { Some(&AUDIO_QUANT_TAB[qtab - 1]) } else { None }
	}

	fn read_samples(&mut self, ch: usize, sb: usize, part: usize) {
		let q = self.allocation[ch][sb];
		let mut sf = self.scale_factor[ch][sb][part];

		let Some(q) = q else {
			// No bits allocated for this subband
			self.sample[ch][sb] = [0; 3];
			return;
		};

		// Resolve scalefactor
		if sf == 63 {
			sf = 0;
		} else {
			let shift = sf / 3;
			sf = (AUDIO_SCALEFACTOR_BASE[(sf % 3) as usize] + ((1 << shift) >> 1)) >> shift;
		}

		// Decode samples
		let mut adj = q.levels as i32;
		let sample = &mut self.sample[ch][sb];
		if q.group != 0 {
			// Decode grouped samples
			let mut val = self.buffer.read(q.bits as i32);
			sample[0] = val % adj;
			val /= adj;
			sample[1] = val % adj;
			sample[2] = val / adj;
		} else {
			// Decode direct samples
			sample[0] = self.buffer.read(q.bits as i32);
			sample[1] = self.buffer.read(q.bits as i32);
			sample[2] = self.buffer.read(q.bits as i32);
		}

		// Postmultiply samples
		let scale = 65536 / (adj + 1);
		adj = ((adj + 1) >> 1) - 1;

		for s in sample.iter_mut() {
			let val = (adj - *s) * scale;
			*s = (val.wrapping_mul(sf >> 12) + ((val.wrapping_mul(sf & 4095) + 2048) >> 12)) >> 12;
		}
	}
}

fn idct36(s: &[[i32; 3]; 32], ss: usize, d: &mut [f32; 1024], dp: usize) {
	let f = |a: usize, b: usize| s[a][ss].wrapping_add(s[b][ss]) as f32;
	let g = |a: usize, b: usize, c: f32| s[a][ss].wrapping_sub(s[b][ss]) as f32 * c;

	let mut t01 = f(0, 31);
	let mut t02 = g(0, 31, 0.500602998235f32);
	let mut t03 = f(1, 30);
	let mut t04 = g(1, 30, 0.505470959898f32);
	let mut t05 = f(2, 29);
	let mut t06 = g(2, 29, 0.515447309923f32);
	let mut t07 = f(3, 28);
	let mut t08 = g(3, 28, 0.53104259109f32);
	let mut t09 = f(4, 27);
	let mut t10 = g(4, 27, 0.553103896034f32);
	let mut t11 = f(5, 26);
	let mut t12 = g(5, 26, 0.582934968206f32);
	let mut t13 = f(6, 25);
	let mut t14 = g(6, 25, 0.622504123036f32);
	let mut t15 = f(7, 24);
	let mut t16 = g(7, 24, 0.674808341455f32);
	let mut t17 = f(8, 23);
	let mut t18 = g(8, 23, 0.744536271002f32);
	let mut t19 = f(9, 22);
	let mut t20 = g(9, 22, 0.839349645416f32);
	let mut t21 = f(10, 21);
	let mut t22 = g(10, 21, 0.972568237862f32);
	let mut t23 = f(11, 20);
	let mut t24 = g(11, 20, 1.16943993343f32);
	let mut t25 = f(12, 19);
	let mut t26 = g(12, 19, 1.48416461631f32);
	let mut t27 = f(13, 18);
	let mut t28 = g(13, 18, 2.05778100995f32);
	let mut t29 = f(14, 17);
	let mut t30 = g(14, 17, 3.40760841847f32);
	let mut t31 = f(15, 16);
	let mut t32 = g(15, 16, 10.1900081235f32);

	let mut t33 = t01 + t31;
	t31 = (t01 - t31) * 0.502419286188f32;
	t01 = t03 + t29;
	t29 = (t03 - t29) * 0.52249861494f32;
	t03 = t05 + t27;
	t27 = (t05 - t27) * 0.566944034816f32;
	t05 = t07 + t25;
	t25 = (t07 - t25) * 0.64682178336f32;
	t07 = t09 + t23;
	t23 = (t09 - t23) * 0.788154623451f32;
	t09 = t11 + t21;
	t21 = (t11 - t21) * 1.06067768599f32;
	t11 = t13 + t19;
	t19 = (t13 - t19) * 1.72244709824f32;
	t13 = t15 + t17;
	t17 = (t15 - t17) * 5.10114861869f32;
	t15 = t33 + t13;
	t13 = (t33 - t13) * 0.509795579104f32;
	t33 = t01 + t11;
	t01 = (t01 - t11) * 0.601344886935f32;
	t11 = t03 + t09;
	t09 = (t03 - t09) * 0.899976223136f32;
	t03 = t05 + t07;
	t07 = (t05 - t07) * 2.56291544774f32;
	t05 = t15 + t03;
	t15 = (t15 - t03) * 0.541196100146f32;
	t03 = t33 + t11;
	t11 = (t33 - t11) * 1.30656296488f32;
	t33 = t05 + t03;
	t05 = (t05 - t03) * 0.707106781187f32;
	t03 = t15 + t11;
	t15 = (t15 - t11) * 0.707106781187f32;
	t03 += t15;
	t11 = t13 + t07;
	t13 = (t13 - t07) * 0.541196100146f32;
	t07 = t01 + t09;
	t09 = (t01 - t09) * 1.30656296488f32;
	t01 = t11 + t07;
	t07 = (t11 - t07) * 0.707106781187f32;
	t11 = t13 + t09;
	t13 = (t13 - t09) * 0.707106781187f32;
	t11 += t13;
	t01 += t11;
	t11 += t07;
	t07 += t13;
	t09 = t31 + t17;
	t31 = (t31 - t17) * 0.509795579104f32;
	t17 = t29 + t19;
	t29 = (t29 - t19) * 0.601344886935f32;
	t19 = t27 + t21;
	t21 = (t27 - t21) * 0.899976223136f32;
	t27 = t25 + t23;
	t23 = (t25 - t23) * 2.56291544774f32;
	t25 = t09 + t27;
	t09 = (t09 - t27) * 0.541196100146f32;
	t27 = t17 + t19;
	t19 = (t17 - t19) * 1.30656296488f32;
	t17 = t25 + t27;
	t27 = (t25 - t27) * 0.707106781187f32;
	t25 = t09 + t19;
	t19 = (t09 - t19) * 0.707106781187f32;
	t25 += t19;
	t09 = t31 + t23;
	t31 = (t31 - t23) * 0.541196100146f32;
	t23 = t29 + t21;
	t21 = (t29 - t21) * 1.30656296488f32;
	t29 = t09 + t23;
	t23 = (t09 - t23) * 0.707106781187f32;
	t09 = t31 + t21;
	t31 = (t31 - t21) * 0.707106781187f32;
	t09 += t31;
	t29 += t09;
	t09 += t23;
	t23 += t31;
	t17 += t29;
	t29 += t25;
	t25 += t09;
	t09 += t27;
	t27 += t23;
	t23 += t19;
	t19 += t31;
	t21 = t02 + t32;
	t02 = (t02 - t32) * 0.502419286188f32;
	t32 = t04 + t30;
	t04 = (t04 - t30) * 0.52249861494f32;
	t30 = t06 + t28;
	t28 = (t06 - t28) * 0.566944034816f32;
	t06 = t08 + t26;
	t08 = (t08 - t26) * 0.64682178336f32;
	t26 = t10 + t24;
	t10 = (t10 - t24) * 0.788154623451f32;
	t24 = t12 + t22;
	t22 = (t12 - t22) * 1.06067768599f32;
	t12 = t14 + t20;
	t20 = (t14 - t20) * 1.72244709824f32;
	t14 = t16 + t18;
	t16 = (t16 - t18) * 5.10114861869f32;
	t18 = t21 + t14;
	t14 = (t21 - t14) * 0.509795579104f32;
	t21 = t32 + t12;
	t32 = (t32 - t12) * 0.601344886935f32;
	t12 = t30 + t24;
	t24 = (t30 - t24) * 0.899976223136f32;
	t30 = t06 + t26;
	t26 = (t06 - t26) * 2.56291544774f32;
	t06 = t18 + t30;
	t18 = (t18 - t30) * 0.541196100146f32;
	t30 = t21 + t12;
	t12 = (t21 - t12) * 1.30656296488f32;
	t21 = t06 + t30;
	t30 = (t06 - t30) * 0.707106781187f32;
	t06 = t18 + t12;
	t12 = (t18 - t12) * 0.707106781187f32;
	t06 += t12;
	t18 = t14 + t26;
	t26 = (t14 - t26) * 0.541196100146f32;
	t14 = t32 + t24;
	t24 = (t32 - t24) * 1.30656296488f32;
	t32 = t18 + t14;
	t14 = (t18 - t14) * 0.707106781187f32;
	t18 = t26 + t24;
	t24 = (t26 - t24) * 0.707106781187f32;
	t18 += t24;
	t32 += t18;
	t18 += t14;
	t26 = t14 + t24;
	t14 = t02 + t16;
	t02 = (t02 - t16) * 0.509795579104f32;
	t16 = t04 + t20;
	t04 = (t04 - t20) * 0.601344886935f32;
	t20 = t28 + t22;
	t22 = (t28 - t22) * 0.899976223136f32;
	t28 = t08 + t10;
	t10 = (t08 - t10) * 2.56291544774f32;
	t08 = t14 + t28;
	t14 = (t14 - t28) * 0.541196100146f32;
	t28 = t16 + t20;
	t20 = (t16 - t20) * 1.30656296488f32;
	t16 = t08 + t28;
	t28 = (t08 - t28) * 0.707106781187f32;
	t08 = t14 + t20;
	t20 = (t14 - t20) * 0.707106781187f32;
	t08 += t20;
	t14 = t02 + t10;
	t02 = (t02 - t10) * 0.541196100146f32;
	t10 = t04 + t22;
	t22 = (t04 - t22) * 1.30656296488f32;
	t04 = t14 + t10;
	t10 = (t14 - t10) * 0.707106781187f32;
	t14 = t02 + t22;
	t02 = (t02 - t22) * 0.707106781187f32;
	t14 += t02;
	t04 += t14;
	t14 += t10;
	t10 += t02;
	t16 += t04;
	t04 += t08;
	t08 += t14;
	t14 += t28;
	t28 += t10;
	t10 += t20;
	t20 += t02;
	t21 += t16;
	t16 += t32;
	t32 += t04;
	t04 += t06;
	t06 += t08;
	t08 += t18;
	t18 += t14;
	t14 += t30;
	t30 += t28;
	t28 += t26;
	t26 += t10;
	t10 += t12;
	t12 += t20;
	t20 += t24;
	t24 += t02;

	d[dp + 48] = -t33;
	d[dp + 47] = -t21;
	d[dp + 49] = -t21;
	d[dp + 46] = -t17;
	d[dp + 50] = -t17;
	d[dp + 45] = -t16;
	d[dp + 51] = -t16;
	d[dp + 44] = -t01;
	d[dp + 52] = -t01;
	d[dp + 43] = -t32;
	d[dp + 53] = -t32;
	d[dp + 42] = -t29;
	d[dp + 54] = -t29;
	d[dp + 41] = -t04;
	d[dp + 55] = -t04;
	d[dp + 40] = -t03;
	d[dp + 56] = -t03;
	d[dp + 39] = -t06;
	d[dp + 57] = -t06;
	d[dp + 38] = -t25;
	d[dp + 58] = -t25;
	d[dp + 37] = -t08;
	d[dp + 59] = -t08;
	d[dp + 36] = -t11;
	d[dp + 60] = -t11;
	d[dp + 35] = -t18;
	d[dp + 61] = -t18;
	d[dp + 34] = -t09;
	d[dp + 62] = -t09;
	d[dp + 33] = -t14;
	d[dp + 63] = -t14;
	d[dp + 32] = -t05;
	d[dp + 0] = t05;
	d[dp + 31] = -t30;
	d[dp + 1] = t30;
	d[dp + 30] = -t27;
	d[dp + 2] = t27;
	d[dp + 29] = -t28;
	d[dp + 3] = t28;
	d[dp + 28] = -t07;
	d[dp + 4] = t07;
	d[dp + 27] = -t26;
	d[dp + 5] = t26;
	d[dp + 26] = -t23;
	d[dp + 6] = t23;
	d[dp + 25] = -t10;
	d[dp + 7] = t10;
	d[dp + 24] = -t15;
	d[dp + 8] = t15;
	d[dp + 23] = -t12;
	d[dp + 9] = t12;
	d[dp + 22] = -t19;
	d[dp + 10] = t19;
	d[dp + 21] = -t20;
	d[dp + 11] = t20;
	d[dp + 20] = -t13;
	d[dp + 12] = t13;
	d[dp + 19] = -t24;
	d[dp + 13] = t24;
	d[dp + 18] = -t31;
	d[dp + 14] = t31;
	d[dp + 17] = -t02;
	d[dp + 15] = t02;
	d[dp + 16] = 0.0;
}

#[cfg(test)]
mod tests {
	use super::*;
	use std::fmt::Write as _;
	use std::path::{Path, PathBuf};

	fn find_ci(dir: &Path, name: &str) -> Option<PathBuf> {
		for entry in std::fs::read_dir(dir).ok()?.flatten() {
			let path = entry.path();
			if path.is_dir() {
				if let Some(found) = find_ci(&path, name) {
					return Some(found);
				}
			} else if entry.file_name().to_string_lossy().eq_ignore_ascii_case(name) {
				return Some(path);
			}
		}
		None
	}

	fn fnv(mut h: u64, bytes: &[u8]) -> u64 {
		for &b in bytes {
			h ^= b as u64;
			h = h.wrapping_mul(0x100000001b3);
		}
		h
	}

	const FNV_BASIS: u64 = 0xcbf29ce484222325;

	/// Decodes intro1.mpg the way play_mpeg() does (all audio, then all video) and
	/// compares against checksums from the C pl_mpeg.h built with -ffp-contract=off.
	/// PLM_DUMP=<file> writes the per-frame log in the C reference program's format.
	#[test]
	fn intro_film_matches_c() {
		let Some(path) = find_ci(Path::new(&crate::res::archive::test_disc()), "intro1.mpg") else {
			return;
		};
		let path = path.to_str().unwrap();
		let mut log = String::new();

		let mut sound = Plm::create_with_filename(path).unwrap();
		sound.set_video_enabled(false);
		writeln!(log, "samplerate {}", sound.get_samplerate()).unwrap();
		let mut ah = FNV_BASIS;
		let (mut count, mut frames) = (0u64, 0u64);
		while let Some(s) = sound.decode_audio() {
			for v in &s.interleaved[..2 * s.count as usize] {
				ah = fnv(ah, &v.to_ne_bytes());
			}
			ah = fnv(ah, &s.time.to_ne_bytes());
			count += s.count as u64;
			frames += 1;
		}
		writeln!(
			log,
			"audio frames {} samples {} hash {:016x} time {:.6} ended {}",
			frames,
			count,
			ah,
			sound.get_time(),
			sound.has_ended() as i32
		)
		.unwrap();
		drop(sound);

		let mut film = Plm::create_with_filename(path).unwrap();
		film.set_audio_enabled(false);
		let (fw, fh) = (film.get_width(), film.get_height());
		writeln!(log, "size {} {}", fw, fh).unwrap();
		let mut rgba = vec![0u8; (fw * fh * 4) as usize];
		let mut all = FNV_BASIS;
		let mut n = 0;
		while let Some(f) = film.decode_video() {
			frame_to_rgba(&f, &mut rgba, fw * 4);
			let h = fnv(FNV_BASIS, &rgba);
			all = fnv(all, &h.to_ne_bytes());
			writeln!(log, "frame {} {:.6} {:016x}", n, f.time, h).unwrap();
			n += 1;
		}
		writeln!(
			log,
			"video frames {} hash {:016x} time {:.6} ended {}",
			n,
			all,
			film.get_time(),
			film.has_ended() as i32
		)
		.unwrap();

		if let Ok(dump) = std::env::var("PLM_DUMP") {
			std::fs::write(dump, &log).unwrap();
		}

		assert!(log.starts_with("samplerate 44100\n"));
		assert!(log.contains("\naudio frames 2361 samples 2719872 hash 788f190a2665e636 time 61.648980 ended 1\n"));
		assert!(log.contains("\nsize 320 240\n"));
		assert!(log.contains("\nframe 0 0.000000 2138d4b36d35cc65\n"));
		assert!(log.ends_with("\nvideo frames 1539 hash 04ab7fa897b3cc07 time 61.520000 ended 1\n"));
	}
}
