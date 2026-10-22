//! Sound: a software mixer on SDL's audio (it takes the place of DirectSound and the
//! game's sound_lib). Samples are the game's WAV files (PCM, 8 or 16 bit, mono or
//! stereo, 8000..44100 Hz); each voice plays one with its own volume, pitch and pan, once
//! or looping. Without an audio device everything is silently ignored.

use std::ffi::{CStr, c_int, c_void};
use std::sync::atomic::{AtomicU32, Ordering};
use std::sync::{Arc, Mutex, MutexGuard};

use sdl2_sys::*;
// sdl2_sys has a constant named None.
use std::option::Option::None;

#[derive(Clone)]
pub struct Sample {
	/// mono, -1..1
	pub data: Vec<f32>,
	pub rate: i32,
}

impl Default for Sample {
	fn default() -> Self {
		Sample { data: Vec::new(), rate: 22050 }
	}
}

/// Decodes a WAV file; None if it isn't one the game uses.
pub fn decode_wav(d: &[u8]) -> Option<Arc<Sample>> {
	if d.len() < 44 || &d[0..4] != b"RIFF" || &d[8..12] != b"WAVE" {
		return None;
	}
	let u16_at = |p: usize| d[p] as u32 | (d[p + 1] as u32) << 8;
	let u32_at = |p: usize| d[p] as u32 | (d[p + 1] as u32) << 8 | (d[p + 2] as u32) << 16 | (d[p + 3] as u32) << 24;
	let mut channels = 0i32;
	let mut bits = 0i32;
	let mut rate = 0i32;
	let mut data = 0usize;
	let mut len = 0usize;
	let mut p = 12usize;
	while p + 8 <= d.len() {
		let n = u32_at(p + 4);
		if &d[p..p + 4] == b"fmt " && p + 24 <= d.len() {
			if u16_at(p + 8) != 1 {
				return None;
			}
			channels = u16_at(p + 10) as i32;
			rate = u32_at(p + 12) as i32;
			bits = u16_at(p + 22) as i32;
		} else if &d[p..p + 4] == b"data" {
			data = p + 8;
			len = (n as usize).min(d.len() - data);
		}
		p += 8 + n as usize + (n & 1) as usize;
	}
	if data == 0 || (bits != 8 && bits != 16) || !(1..=2).contains(&channels) || rate <= 0 {
		return None;
	}
	let mut s = Sample { data: Vec::new(), rate };
	let frame = channels as usize * (bits / 8) as usize;
	let frames = len / frame;
	s.data.resize(frames, 0.0);
	for i in 0..frames {
		let mut sum = 0f32;
		for c in 0..channels {
			let p = data + i * frame + c as usize * (bits / 8) as usize;
			sum +=
				if bits == 8 { (d[p] as i32 - 128) as f32 / 128.0 } else { u16_at(p) as u16 as i16 as f32 / 32768.0 };
		}
		s.data[i] = sum / channels as f32;
	}
	Some(Arc::new(s))
}

struct Voice {
	s: Arc<Sample>,
	pos: f64,
	volume: f32,
	pitch: f32,
	pan: f32,
	looping: bool,
	id: i32,
}

struct Impl {
	dev: SDL_AudioDeviceID,
	rate: i32,
	voices: Vec<Voice>,
	next_id: i32,
}

/// The process-wide mixer (`Mixer::get()`). Its state sits behind a mutex that the audio
/// callback thread takes too; `master` is an f32 kept in an atomic (read with `master()`,
/// written with `set_master()`), as the callback reads it without the lock.
pub struct Mixer {
	/// The master volume (0..1) of effects and music voices, as f32 bits.
	master: AtomicU32,
	imp: Mutex<Option<Impl>>,
}

static MIXER: Mixer = Mixer { master: AtomicU32::new(0x3f80_0000), imp: Mutex::new(None) };

fn sdl_error() -> String {
	// SAFETY: SDL_GetError returns a valid NUL-terminated string.
	unsafe { CStr::from_ptr(SDL_GetError()).to_string_lossy().into_owned() }
}

unsafe extern "C" fn callback(user: *mut c_void, stream: *mut u8, bytes: c_int) {
	// SAFETY: user is the static MIXER given to SDL_OpenAudioDevice.
	let m = unsafe { &*(user as *const Mixer) };
	let frames = bytes / (size_of::<f32>() * 2) as i32;
	// SAFETY: SDL hands over a buffer of `bytes` bytes in the F32 stereo format asked for.
	let out = unsafe { std::slice::from_raw_parts_mut(stream as *mut f32, (frames * 2) as usize) };
	out.fill(0.0);
	let mut g = m.lock();
	let Some(imp) = g.as_mut() else {
		return;
	};
	let mv = m.master();
	let rate = imp.rate;
	for v in imp.voices.iter_mut() {
		let d = &v.s.data;
		let step = (v.pitch * v.s.rate as f32 / rate as f32) as f64;
		let l = v.volume * mv * 1.0f32.min(1.0 - v.pan);
		let r = v.volume * mv * 1.0f32.min(1.0 + v.pan);
		for i in 0..frames as usize {
			if v.pos >= d.len() as f64 {
				if !v.looping || d.is_empty() {
					v.id = 0;
					break;
				}
				v.pos %= d.len() as f64;
			}
			let a = v.pos as usize;
			let b = if a + 1 < d.len() {
				a + 1
			} else if v.looping {
				0
			} else {
				a
			};
			let f = (v.pos - a as f64) as f32;
			let x = d[a] + (d[b] - d[a]) * f;
			out[i * 2] += x * l;
			out[i * 2 + 1] += x * r;
			v.pos += step;
		}
	}
	imp.voices.retain(|v| v.id != 0);
	for o in out.iter_mut() {
		*o = o.clamp(-1.0, 1.0);
	}
}

impl Mixer {
	pub fn get() -> &'static Mixer {
		&MIXER
	}

	fn lock(&self) -> MutexGuard<'_, Option<Impl>> {
		self.imp.lock().unwrap_or_else(|e| e.into_inner())
	}

	/// The master volume (0..1): effects and music voices.
	pub fn master(&self) -> f32 {
		f32::from_bits(self.master.load(Ordering::Relaxed))
	}

	pub fn set_master(&self, v: f32) {
		self.master.store(v.to_bits(), Ordering::Relaxed);
	}

	pub fn open(&self) -> bool {
		if self.lock().is_some() {
			return true;
		}
		// SAFETY: plain SDL calls; the callback's userdata is the static mixer, which lives
		// for the whole process.
		unsafe {
			if SDL_InitSubSystem(SDL_INIT_AUDIO) != 0 {
				return false;
			}
			let mut want: SDL_AudioSpec = std::mem::zeroed();
			let mut have: SDL_AudioSpec = std::mem::zeroed();
			want.freq = 44100;
			want.format = AUDIO_F32SYS as SDL_AudioFormat;
			want.channels = 2;
			want.samples = 1024;
			want.callback = Some(callback);
			want.userdata = self as *const Mixer as *mut c_void;
			let dev = SDL_OpenAudioDevice(std::ptr::null(), 0, &want, &mut have, 0);
			if dev == 0 {
				eprintln!("no sound: {}", sdl_error());
				return false;
			}
			*self.lock() = Some(Impl { dev, rate: have.freq, voices: Vec::new(), next_id: 1 });
			SDL_PauseAudioDevice(dev, 0);
		}
		true
	}

	pub fn close(&self) {
		let Some(dev) = self.lock().as_ref().map(|i| i.dev) else {
			return;
		};
		// SAFETY: dev is the device open() opened; the lock is not held, as closing waits
		// for the callback, which takes it.
		unsafe { SDL_CloseAudioDevice(dev) };
		*self.lock() = None;
	}

	/// Starts a voice; returns its handle (0: none).
	pub fn play(&self, s: Option<Arc<Sample>>, volume: f32, looping: bool, pitch: f32, pan: f32) -> i32 {
		let mut g = self.lock();
		let Some(imp) = g.as_mut() else {
			return 0;
		};
		let Some(s) = s.filter(|s| !s.data.is_empty()) else {
			return 0;
		};
		let id = imp.next_id;
		imp.next_id += 1;
		imp.voices.push(Voice { s, pos: 0.0, volume, pitch, pan, looping, id });
		id
	}

	pub fn set(&self, voice: i32, volume: f32, pitch: f32, pan: f32) {
		if voice == 0 {
			return;
		}
		if let Some(imp) = self.lock().as_mut() {
			for v in imp.voices.iter_mut().filter(|v| v.id == voice) {
				v.volume = volume;
				v.pitch = pitch;
				v.pan = pan;
			}
		}
	}

	pub fn stop(&self, voice: i32) {
		if voice == 0 {
			return;
		}
		if let Some(imp) = self.lock().as_mut() {
			for v in imp.voices.iter_mut().filter(|v| v.id == voice) {
				v.id = 0;
			}
		}
	}

	pub fn stop_all(&self) {
		if let Some(imp) = self.lock().as_mut() {
			imp.voices.clear();
		}
	}

	pub fn playing(&self, voice: i32) -> bool {
		if voice == 0 {
			return false;
		}
		self.lock().as_ref().is_some_and(|imp| imp.voices.iter().any(|v| v.id == voice))
	}
}

#[cfg(test)]
mod tests {
	use super::*;
	use crate::res::archive::read_file_ci;

	#[test]
	fn decodes_the_menu_music() {
		if !std::path::Path::new(&crate::res::archive::test_data()).is_dir() {
			return;
		}
		let bytes = read_file_ci(&crate::res::archive::test_data(), "MenuData/menumsc.wav").expect("menumsc.wav");
		let s = decode_wav(&bytes).expect("a WAV");
		assert!(s.rate >= 8000 && s.rate <= 44100);
		assert!(!s.data.is_empty());
		assert!(s.data.iter().all(|x| (-1.0..=1.0).contains(x)));
		assert!(decode_wav(&bytes[..40]).is_none());
	}

	#[test]
	fn closed_mixer_ignores_everything() {
		let s = Arc::new(Sample { data: vec![0.5; 10], rate: 22050 });
		let m = Mixer::get();
		assert_eq!(m.play(Some(s), 1.0, false, 1.0, 0.0), 0);
		assert!(!m.playing(1));
	}
}
