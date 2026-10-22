//! Miss Honeybunny (MenuData/Hunny.acs): the original shows her with Microsoft Agent
//! (DaviAgent.pas: Show plays Showing, Hide plays Hiding, the Agent server idles her in
//! between); the port reads the character file and plays her itself.
//!
//! An ACS file: u32 0xABCDABC3, then locators (u32 offset, size) of the character, its
//! animations, images and sounds. Strings are u32 length, UTF-16 and a terminating 0.
//!   character   u16 version x2, locator of its texts, GUID, u16 width, height, u8 the
//!               transparent colour, u32 flags (0x20 voice info follows, 0x200 balloon
//!               info), u32 animation set version, the voice and balloon info, the
//!               palette (u32 count, BGRX), ...
//!   animations  u32 count; per one its name, locator: name, u8 transition, return
//!               animation, u16 frames; per frame u16 images (u32 index, i16 x, y),
//!               u16 sound, u16 duration (1/100 s), i16 exit frame, u8 branches (u16
//!               frame, u16 per cent), u8 overlays (mouths: none here)
//!   images      u32 count; per one a locator and a checksum: u8, u16 width, height,
//!               u8 compressed, u32 size and the bytes: 8-bit indices, bottom-up rows of
//!               4-byte multiples, packed with Agent's LZ77 (bits LSB first: 0 and 8 bits
//!               a byte as is; 1 and an offset of 6, 9, 12 or 20 bits, then a length)

use std::collections::BTreeMap;
use std::fs;
use std::rc::Rc;

use crate::res::image::{Image, rgb};

struct Reader<'a> {
	d: &'a [u8],
	p: usize,
	bad: bool,
}

impl<'a> Reader<'a> {
	fn new(d: &'a [u8], p: usize) -> Self {
		Self { d, p, bad: false }
	}
	fn need(&mut self, n: usize) -> bool {
		if self.p.saturating_add(n) > self.d.len() {
			self.bad = true;
		}
		!self.bad
	}
	fn u8(&mut self) -> u8 {
		if self.need(1) {
			self.p += 1;
			self.d[self.p - 1]
		} else {
			0
		}
	}
	fn u16(&mut self) -> u16 {
		if !self.need(2) {
			return 0;
		}
		let v = self.d[self.p] as u16 | (self.d[self.p + 1] as u16) << 8;
		self.p += 2;
		v
	}
	fn s16(&mut self) -> i16 {
		self.u16() as i16
	}
	fn u32(&mut self) -> u32 {
		if !self.need(4) {
			return 0;
		}
		let d = &self.d[self.p..];
		let v = d[0] as u32 | (d[1] as u32) << 8 | (d[2] as u32) << 16 | (d[3] as u32) << 24;
		self.p += 4;
		v
	}
	/// UTF-16, kept as Latin-1.
	fn str(&mut self) -> String {
		let n = self.u32();
		let mut s = String::new();
		if n == 0 || !self.need(n as usize * 2 + 2) {
			return s;
		}
		for i in 0..n as usize {
			s.push(self.d[self.p + i * 2] as char);
		}
		self.p += n as usize * 2 + 2;
		s
	}
}

struct Bits<'a> {
	src: &'a [u8],
	pos: usize,
	bit: i32,
	over: bool,
}

impl Bits<'_> {
	fn get(&mut self) -> u32 {
		if self.pos >= self.src.len() {
			self.over = true;
			return 0;
		}
		let v = (self.src[self.pos] >> self.bit & 1) as u32;
		self.bit += 1;
		if self.bit == 8 {
			self.bit = 0;
			self.pos += 1;
		}
		v
	}
	fn bits(&mut self, k: i32) -> u32 {
		let mut v = 0;
		for i in 0..k {
			v |= self.get() << i;
		}
		v
	}
}

fn decompress(src: &[u8], out: &mut Vec<u8>) -> bool {
	if src.len() < 2 || src[0] != 0 {
		return false;
	}
	let mut b = Bits { src, pos: 1, bit: 0, over: false };
	while !b.over {
		if b.get() == 0 {
			out.push(b.bits(8) as u8);
			continue;
		}
		let mut width = 6;
		let mut add: u32 = 1;
		if b.get() != 0 {
			width = 9;
			add = 65;
			if b.get() != 0 {
				width = 12;
				add = 577;
				if b.get() != 0 {
					width = 20;
					add = 4673;
				}
			}
		}
		let mut offset = b.bits(width);
		if width == 20 && offset == 0xFFFFF {
			return true;
		}
		offset += add;
		let mut count: u32 = if width == 20 { 3 } else { 2 };
		let mut k = 0;
		while k < 11 && b.get() != 0 {
			k += 1;
		}
		count = count.wrapping_add((1u32 << k) - 1 + b.bits(k));
		if offset as usize > out.len() {
			return false;
		}
		for _ in 0..count {
			out.push(out[out.len() - offset as usize]);
		}
	}
	false
}

#[derive(Clone, Debug)]
pub struct Frame {
	/// the first on top
	pub images: Vec<i32>,
	pub offsets: Vec<(i32, i32)>,
	pub duration_ms: i32,
	pub exit: i32,
	/// frame, per cent
	pub branches: Vec<(i32, i32)>,
}

impl Default for Frame {
	fn default() -> Self {
		Self { images: Vec::new(), offsets: Vec::new(), duration_ms: 100, exit: -1, branches: Vec::new() }
	}
}

#[derive(Clone, Default, Debug)]
pub struct Animation {
	pub frames: Vec<Frame>,
}

#[derive(Default)]
pub struct AgentCharacter {
	pub width: i32,
	pub height: i32,
	pub images: Vec<Rc<Image>>,
	/// upper-case names
	pub animations: BTreeMap<String, Animation>,
}

impl AgentCharacter {
	pub fn load(&mut self, path: &str) -> bool {
		let d = fs::read(path).unwrap_or_default();
		let mut r = Reader::new(&d, 0);
		if r.u32() != 0xABCDABC3 {
			return false;
		}
		let char_at = r.u32();
		r.u32();
		let anim_at = r.u32();
		r.u32();
		let image_at = r.u32();

		r.p = char_at as usize;
		r.p += 4 + 8 + 16;
		self.width = r.u16() as i32;
		self.height = r.u16() as i32;
		let transparent = r.u8();
		let flags = r.u32();
		r.p += 4;
		if flags & 0x20 != 0 {
			r.p += 16 + 16 + 4 + 2;
			if r.u8() != 0 {
				r.p += 4;
				r.str();
				r.p += 4;
				r.str();
			}
		}
		if flags & 0x200 != 0 {
			r.p += 2 + 12;
			r.str();
			r.p += 4 + 4 + 2;
		}
		let colours = r.u32().min(256);
		let mut palette = [0u32; 256];
		for i in 0..colours as usize {
			let b = r.u8();
			let g = r.u8();
			let rr = r.u8();
			r.u8();
			palette[i] = rgb(rr, g, b);
		}
		palette[transparent as usize] = 0;

		r.p = image_at as usize;
		let mut count = r.u32();
		let mut where_: Vec<(u32, u32)> = Vec::new();
		let mut i = 0;
		while i < count && !r.bad {
			let at = r.u32();
			let size = r.u32();
			r.u32();
			where_.push((at, size));
			i += 1;
		}
		for &(at, _size) in &where_ {
			let mut img = Image::default();
			let mut ir = Reader::new(&d, at as usize);
			ir.u8();
			let w = ir.u16() as i32;
			let h = ir.u16() as i32;
			let packed = ir.u8() != 0;
			let n = ir.u32() as usize;
			let stride = (w as usize + 3) & !3usize;
			let mut px: Vec<u8> = Vec::new();
			if ir.need(n) {
				if packed {
					decompress(&d[ir.p..ir.p + n], &mut px);
				} else {
					px = d[ir.p..ir.p + n].to_vec();
				}
			}
			if px.len() >= stride * h as usize {
				img.width = w;
				img.height = h;
				img.pixels.resize(w as usize * h as usize, 0);
				for y in 0..h as usize {
					for x in 0..w as usize {
						img.pixels[y * w as usize + x] = palette[px[(h as usize - 1 - y) * stride + x] as usize];
					}
				}
			}
			self.images.push(Rc::new(img));
		}

		r.p = anim_at as usize;
		count = r.u32();
		let mut i = 0;
		while i < count && !r.bad {
			let name = r.str().to_ascii_uppercase();
			let at = r.u32();
			r.u32();
			let mut ar = Reader::new(&d, at as usize);
			ar.str();
			ar.u8();
			ar.str();
			let mut a = Animation::default();
			let nf = ar.u16() as i32;
			let mut f = 0;
			while f < nf && !ar.bad {
				let mut fr = Frame::default();
				let ni = ar.u16() as i32;
				let mut k = 0;
				while k < ni && !ar.bad {
					fr.images.push(ar.u32() as i32);
					let ox = ar.s16() as i32;
					let oy = ar.s16() as i32;
					fr.offsets.push((ox, oy));
					k += 1;
				}
				ar.u16();
				fr.duration_ms = ar.u16() as i32 * 10;
				fr.exit = ar.s16() as i32;
				let nb = ar.u8();
				for _ in 0..nb {
					let to = ar.u16() as i32;
					let pc = ar.u16() as i32;
					fr.branches.push((to, pc));
				}
				// Mouth overlays: u8 type, u8 replace, u16 image, u8, u8 region, i16 x, y,
				// u16 w, h, then the region if any. Her file has none; skipped all the same.
				let no = ar.u8();
				let mut k = 0;
				while k < no && !ar.bad {
					ar.p += 4;
					ar.u8();
					let region = ar.u8() != 0;
					ar.p += 8;
					if region {
						ar.p += ar.u32() as usize;
					}
					k += 1;
				}
				a.frames.push(fr);
				f += 1;
			}
			if !ar.bad {
				self.animations.insert(name, a);
			}
			i += 1;
		}
		!r.bad && !self.images.is_empty()
	}
}

#[derive(Clone, Copy, PartialEq, Eq)]
enum State {
	Hidden,
	Showing,
	Idle,
	Hiding,
}

/// Playing her: Show and Hide, idling while she is up (the Agent server's IdlingLevel1
/// after a few seconds, the later levels the longer she waits).
pub struct AgentPlayer {
	pub character: Option<Rc<AgentCharacter>>,
	pub x: i32,
	pub y: i32,

	state: State,
	/// the name of the animation playing in character.animations
	playing: Option<String>,
	at: usize,
	left: f32,
	idle_wait: f32,
	shown_for: f32,
	rest_image: i32,
	rnd: u32,
}

impl Default for AgentPlayer {
	fn default() -> Self {
		Self {
			character: None,
			x: 0,
			y: 0,
			state: State::Hidden,
			playing: None,
			at: 0,
			left: 0.0,
			idle_wait: 0.0,
			shown_for: 0.0,
			rest_image: -1,
			rnd: 12345,
		}
	}
}

impl AgentPlayer {
	fn random(&mut self) -> u32 {
		self.rnd = self.rnd.wrapping_mul(1103515245).wrapping_add(12345);
		self.rnd >> 16
	}

	fn play(&mut self, name: &str) {
		self.playing = None;
		let Some(ch) = &self.character else {
			return;
		};
		let Some(a) = ch.animations.get(name) else {
			return;
		};
		if a.frames.is_empty() {
			return;
		}
		self.left = a.frames[0].duration_ms as f32 / 1000.0;
		self.playing = Some(name.to_string());
		self.at = 0;
	}

	pub fn show(&mut self, at_x: i32, at_y: i32) {
		self.x = at_x;
		self.y = at_y;
		if self.state == State::Showing || self.state == State::Idle {
			return;
		}
		self.state = State::Showing;
		self.shown_for = 0.0;
		self.idle_wait = 4.0 + (self.random() % 5) as f32;
		self.play("SHOWING");
		if self.playing.is_none() {
			self.state = State::Idle;
		}
	}

	pub fn hide(&mut self) {
		if self.state == State::Hidden || self.state == State::Hiding {
			return;
		}
		self.state = State::Hiding;
		self.play("HIDING");
		if self.playing.is_none() {
			self.state = State::Hidden;
		}
	}

	pub fn visible(&self) -> bool {
		self.state != State::Hidden
	}

	pub fn update(&mut self, dt: f32) {
		if self.state == State::Hidden {
			return;
		}
		self.shown_for += dt;
		if let Some(name) = self.playing.clone() {
			let ch = self.character.clone().expect("playing without a character");
			let playing = &ch.animations[&name];
			self.left -= dt;
			while self.left <= 0.0 {
				let f = &playing.frames[self.at];
				let mut next = self.at + 1;
				if !f.branches.is_empty() {
					let roll = (self.random() % 100) as i32;
					let mut sum = 0;
					for &(to, pc) in &f.branches {
						sum += pc;
						if roll < sum {
							next = to as usize;
							break;
						}
					}
				}
				if !f.images.is_empty() {
					self.rest_image = f.images[0];
				}
				if next >= playing.frames.len() {
					self.playing = None;
					if self.state == State::Hiding {
						self.state = State::Hidden;
					} else {
						self.state = State::Idle;
					}
					break;
				}
				self.at = next;
				self.left += playing.frames[self.at].duration_ms as f32 / 1000.0;
			}
			return;
		}
		if self.state == State::Idle {
			self.idle_wait -= dt;
			if self.idle_wait <= 0.0 {
				self.idle_wait = 5.0 + (self.random() % 6) as f32;
				self.play(if self.shown_for < 30.0 {
					"IDLINGLEVEL1"
				} else if self.shown_for < 60.0 {
					"IDLINGLEVEL2"
				} else {
					"IDLINGLEVEL3"
				});
			}
		}
	}

	/// The picture now (None when hidden), to draw at (x, y).
	pub fn frame(&self) -> Option<&Image> {
		if self.state == State::Hidden {
			return None;
		}
		let ch = self.character.as_ref()?;
		let playing = self.playing.as_ref().map(|n| &ch.animations[n]);
		let img = match playing {
			Some(p) if !p.frames[self.at].images.is_empty() => p.frames[self.at].images[0],
			_ => self.rest_image,
		};
		if img < 0 || img as usize >= ch.images.len() {
			return None;
		}
		let p = &*ch.images[img as usize];
		if p.pixels.is_empty() { None } else { Some(p) }
	}
}

#[cfg(test)]
mod tests {
	use super::*;

	#[test]
	fn decompress_literals_and_end() {
		// 0 flag, literal 'A' (bits LSB first), then the 20-bit end marker.
		let mut bits: Vec<u32> = Vec::new();
		bits.push(0);
		for i in 0..8 {
			bits.push((b'A' as u32 >> i) & 1);
		}
		bits.push(0);
		for i in 0..8 {
			bits.push((b'B' as u32 >> i) & 1);
		}
		// a copy: 1, 0 (6-bit offset) offset 1 - 1 = 0, length 2 + 0
		bits.extend([1, 0]);
		bits.extend([0; 6]);
		bits.push(0);
		bits.extend([1, 1, 1, 1]);
		bits.extend([1; 20]);
		let mut src = vec![0u8];
		for (i, b) in bits.iter().enumerate() {
			if i % 8 == 0 {
				src.push(0);
			}
			*src.last_mut().unwrap() |= (*b as u8) << (i % 8);
		}
		let mut out = Vec::new();
		assert!(decompress(&src, &mut out));
		assert_eq!(out, b"ABBB");
	}

	#[test]
	fn hunny_acs() {
		let path = crate::res::archive::find_file_ci(&crate::res::archive::test_data(), "MenuData/Hunny.acs");
		if path.is_empty() {
			return;
		}
		let mut ch = AgentCharacter::default();
		assert!(ch.load(&path));
		assert!(ch.width > 0 && ch.height > 0);
		assert!(ch.images.iter().all(|i| !i.pixels.is_empty()));
		assert!(ch.animations.contains_key("SHOWING"));
		assert!(ch.animations.contains_key("HIDING"));

		let mut p = AgentPlayer { character: Some(Rc::new(ch)), ..Default::default() };
		p.show(10, 20);
		assert!(p.visible());
		for _ in 0..200 {
			p.update(0.05);
		}
		assert!(p.frame().is_some());
		p.hide();
		for _ in 0..400 {
			p.update(0.05);
		}
		assert!(!p.visible());
	}
}
