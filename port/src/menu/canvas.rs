//! The menu's 800x600 screen, drawn in software like the original's GDI and DirectDraw
//! surfaces, and shown with sys_present. Pixels are RGBA bytes in memory.

use std::rc::Rc;

use crate::res::archive::latin1_bytes;
use crate::res::image::Image;
use crate::third_party::stb_truetype::{self as stbtt, FontInfo};


#[derive(Clone)]
pub struct Canvas {
	pub w: i32,
	pub h: i32,
	pub px: Vec<u32>,
}

impl Default for Canvas {
	fn default() -> Self {
		Canvas { w: 800, h: 600, px: vec![0; 800 * 600] }
	}
}

fn mix(dst: u32, src: u32, a: f32) -> u32 {
	let mut d = dst.to_ne_bytes();
	let s = src.to_ne_bytes();
	for k in 0..3 {
		d[k] = ((((s[k] as i32 - d[k] as i32) as f32) * a + d[k] as f32) + 0.5) as u8;
	}
	d[3] = 255;
	u32::from_ne_bytes(d)
}

impl Canvas {
	pub fn clear(&mut self, c: u32) {
		self.px.fill(c);
	}

	/// Draws img with its top left at (x, y), blending by its alpha (times alpha).
	pub fn blit(&mut self, img: &Image, x: i32, y: i32, alpha: f32) {
		let mut yy = 0.max(-y);
		while yy < img.height && y + yy < self.h {
			let s = &img.pixels[yy as usize * img.width as usize..];
			let d = &mut self.px[(y + yy) as usize * self.w as usize..];
			let mut xx = 0.max(-x);
			while xx < img.width && x + xx < self.w {
				let a = (s[xx as usize] >> 24) as u8;
				if a != 0 {
					let f = a as f32 / 255.0 * alpha;
					let di = (x + xx) as usize;
					d[di] = if f >= 1.0 { s[xx as usize] | 0xff000000 } else { mix(d[di], s[xx as usize], f) };
				}
				xx += 1;
			}
			yy += 1;
		}
	}

	pub fn fill(&mut self, x: i32, y: i32, fw: i32, fh: i32, c: u32, alpha: f32) {
		for yy in 0.max(y)..self.h.min(y + fh) {
			for xx in 0.max(x)..self.w.min(x + fw) {
				let i = yy as usize * self.w as usize + xx as usize;
				self.px[i] = mix(self.px[i], c, alpha);
			}
		}
	}
}

struct Info {
	f: FontInfo<Vec<u8>>,
}

/// A TrueType font (the menu's own, embedded in Menu.exe), rendered with stb_truetype.
#[derive(Clone, Default)]
pub struct TrueType {
	info: Option<Rc<Info>>,
}

/// Windows-1252 to Unicode (the 0x80..0x9f block differs from Latin-1).
fn cp1252(c: u8) -> i32 {
	const HI: [u16; 32] = [
		0x20ac, 0x81, 0x201a, 0x192, 0x201e, 0x2026, 0x2020, 0x2021, 0x2c6, 0x2030, 0x160, 0x2039, 0x152, 0x8d, 0x17d,
		0x8f, 0x90, 0x2018, 0x2019, 0x201c, 0x201d, 0x2022, 0x2013, 0x2014, 0x2dc, 0x2122, 0x161, 0x203a, 0x153, 0x9d,
		0x17e, 0x178,
	];
	if (0x80..0xa0).contains(&c) { HI[(c - 0x80) as usize] as i32 } else { c as i32 }
}

impl TrueType {
	pub fn load(&mut self, ttf: Vec<u8>) -> bool {
		self.info = None;
		if ttf.is_empty() {
			return false;
		}
		let Some(offset) = stbtt::get_font_offset_for_index(&ttf, 0) else {
			return false;
		};
		match FontInfo::new(ttf, offset as usize) {
			Some(f) => {
				self.info = Some(Rc::new(Info { f }));
				true
			}
			None => false,
		}
	}

	pub fn ok(&self) -> bool {
		self.info.is_some()
	}

	pub fn width(&self, text: &str, px: f32) -> f32 {
		let Some(info) = &self.info else {
			return 0.0;
		};
		let f = &info.f;
		let text = latin1_bytes(text);
		let scale = f.scale_for_pixel_height(px);
		let mut w = 0.0f32;
		for i in 0..text.len() {
			let c = cp1252(text[i]);
			let adv = f.get_codepoint_h_metrics(c as u32).advance_width;
			w = (adv as f32 * scale + w);
			if i + 1 < text.len() {
				w = (scale * (f.get_codepoint_kern_advance(c as u32, cp1252(text[i + 1]) as u32) as f32) + w);
			}
		}
		w
	}

	/// Words wrapped into lines no wider than w.
	pub fn wrap(&self, text: &str, px: f32, w: f32) -> Vec<String> {
		let mut lines = Vec::new();
		let mut line = String::new();
		let mut word = String::new();
		let flush_word = |lines: &mut Vec<String>, line: &mut String, word: &mut String| {
			if word.is_empty() {
				return;
			}
			let t = if line.is_empty() { word.clone() } else { format!("{} {}", line, word) };
			if !line.is_empty() && self.width(&t, px) > w {
				lines.push(std::mem::replace(line, word.clone()));
			} else {
				*line = t;
			}
			word.clear();
		};
		for c in text.chars() {
			if c == ' ' {
				flush_word(&mut lines, &mut line, &mut word);
			} else if c == '\n' || c == '@' {
				// menu.ini breaks lines with @
				flush_word(&mut lines, &mut line, &mut word);
				lines.push(std::mem::take(&mut line));
			} else {
				word.push(c);
			}
		}
		flush_word(&mut lines, &mut line, &mut word);
		if !line.is_empty() {
			lines.push(line);
		}
		lines
	}

	/// Text in Windows-1252 at (x, y) (the top of the line), px pixels high (Delphi's
	/// Font.Height, the character height), in colour c.
	pub fn draw(&self, cv: &mut Canvas, x: i32, y: i32, text: &str, px: f32, colour: u32) {
		let Some(info) = &self.info else {
			return;
		};
		let f = &info.f;
		let text = latin1_bytes(text);
		let scale = f.scale_for_pixel_height(px);
		let ascent = f.get_v_metrics().ascent;
		let base = (ascent as f32 * scale + y as f32);
		let mut pen = x as f32;
		for i in 0..text.len() {
			let c = cp1252(text[i]);
			let adv = f.get_codepoint_h_metrics(c as u32).advance_width;
			let (x0, y0, x1, y1) = stbtt::get_codepoint_bitmap_box_subpixel(f, c, scale, scale, pen - pen.floor(), 0.0);
			let gw = x1 - x0;
			let gh = y1 - y0;
			if gw > 0 && gh > 0 {
				let mut bm = vec![0u8; gw as usize * gh as usize];
				stbtt::make_codepoint_bitmap_subpixel(f, &mut bm, gw, gh, gw, scale, scale, pen - pen.floor(), 0.0, c);
				let ox = pen.floor() as i32 + x0;
				let oy = base as i32 + y0;
				for yy in 0..gh {
					let sy = oy + yy;
					if sy < 0 || sy >= cv.h {
						continue;
					}
					for xx in 0..gw {
						let sx = ox + xx;
						let a = bm[yy as usize * gw as usize + xx as usize];
						if a != 0 && sx >= 0 && sx < cv.w {
							let p = sy as usize * cv.w as usize + sx as usize;
							cv.px[p] = mix(cv.px[p], colour, a as f32 / 255.0);
						}
					}
				}
			}
			pen = (adv as f32 * scale + pen);
			if i + 1 < text.len() {
				pen = (scale * (f.get_codepoint_kern_advance(c as u32, cp1252(text[i + 1]) as u32) as f32) + pen);
			}
		}
	}
}

#[cfg(test)]
pub(crate) mod tests {
	use super::*;

	/// The menu's TrueType font, cut out of Menu.exe's TData form (MenuFont1.Data: a DFM
	/// binary property, then a length, then the font); None without the game data.
	pub(crate) fn menu_font() -> Option<Vec<u8>> {
		let exe = std::fs::read("/Users/xvilo/projects/A2Racer4-dump/disc/Data/MenuData/Menu.exe").ok()?;
		let name = exe.windows(9).rposition(|w| w == b"MenuFont1")?;
		let prop = name + exe[name..].windows(6).position(|w| w == b"\x04Data\x0a")?;
		let len = u32::from_le_bytes(exe[prop + 10..prop + 14].try_into().ok()?) as usize;
		Some(exe[prop + 14..prop + 14 + len].to_vec())
	}

	pub(crate) struct Fnv(pub u64);

	impl Fnv {
		pub(crate) fn new() -> Self {
			Fnv(0xcbf29ce484222325)
		}
		pub(crate) fn byte(&mut self, b: u8) {
			self.0 ^= b as u64;
			self.0 = self.0.wrapping_mul(0x100000001b3);
		}
		pub(crate) fn u32(&mut self, v: u32) {
			for b in v.to_le_bytes() {
				self.byte(b);
			}
		}
	}

	/// The same drawing as a C++ program built on canvas.cpp (clang, arm64), whose canvas hash
	/// this must give.
	#[test]
	fn canvas_matches_cpp() {
		let Some(ttf) = menu_font() else {
			return;
		};
		let mut tt = TrueType::default();
		assert!(tt.load(ttf));
		let mut h = Fnv::new();
		let mut cv = Canvas::default();
		cv.clear(0xff2a80c8);
		let img = Image {
			width: 37,
			height: 23,
			pixels: (0..37 * 23u32).map(|i| ((i * 7) & 255) << 24 | (i.wrapping_mul(2654435761) & 0xffffff)).collect(),
			..Default::default()
		};
		cv.blit(&img, -5, 590, 1.0);
		cv.blit(&img, 300, 10, 0.6);
		cv.fill(100, 100, 250, 40, 0xff10f0e0, 0.35);
		let sizes = [13.0, 14.0, 16.0, 18.666666f32, 20.0, 24.0];
		let mut y = 3;
		for (si, &size) in sizes.iter().enumerate() {
			for part in 0..7u32 {
				let s: String = (0x20 + part * 32..0x40 + part * 32).map(|c| char::from_u32(c).unwrap()).collect();
				let x = 5 + part as i32 * 3 + si as i32;
				tt.draw(&mut cv, x, y, &s, size, if si & 1 != 0 { 0xff000000 } else { 0xff1f06a4 });
				h.u32(tt.width(&s, size).to_bits());
				y += size as i32 - 1;
				if y > 560 {
					y = 7 + si as i32;
				}
			}
		}
		let text = crate::res::archive::latin1(
			b"Welkom bij A2 Racer IV! Kies een auto, rij de Tour door Nederland@en win de beker. \
			\xc9\xe9n keer \xfc\xe8\x80 \x93quotes\x94 en T\x9fo\x8a kerning: AVAWAY To Ty Yo LT.",
		);
		let lines = tt.wrap(&text, 14.0, 260.0);
		for (i, l) in lines.iter().enumerate() {
			tt.draw(&mut cv, 520, 380 + (i as f32 * 16.1) as i32, l, 14.0, 0xff3080ff);
			for b in latin1_bytes(l) {
				h.byte(b);
			}
			h.byte(0);
		}
		tt.draw(&mut cv, -4, -3, "Clipped AVA", 30.0, 0xffffffff);
		tt.draw(&mut cv, 760, 585, "Clipped AVA", 30.0, 0xffffffff);
		for &p in &cv.px {
			h.u32(p);
		}
		println!("canvas {:016x}", h.0);
		assert_eq!(h.0, 0x9895ea16af602392);
	}
}
