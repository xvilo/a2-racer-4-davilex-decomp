//! The race's bitmap fonts (.fnt in rcs, dxdraw ascii.cpp):
//!
//!   256 x { int16 width, height; int32 offset }   one per character; 0 x 0 if absent
//!   int16 x 4                                     (palette indices; 255 is transparent)
//!   at each offset: width x height 8-bit palette indices, row by row
//!
//! The colours come from palet.pcx. Each font becomes one OpenGL texture with every
//! character in it.

use std::ffi::c_void;

use crate::platform::gl::*;
use crate::res::archive::{NamedArchive, latin1_bytes, rd16, rd32};
use crate::res::image::{decode_pcx, rgb, rgba};

#[derive(Clone, Copy, Default)]
struct Glyph {
	w: i32,
	h: i32,
	u0: f32,
	v0: f32,
	u1: f32,
	v1: f32,
}

pub struct BitmapFont {
	glyphs: [Glyph; 256],
	line_height: i32,
	space: i32,
	tex: u32,
}

impl Default for BitmapFont {
	fn default() -> Self {
		BitmapFont { glyphs: [Glyph::default(); 256], line_height: 0, space: 0, tex: 0 }
	}
}

impl Drop for BitmapFont {
	fn drop(&mut self) {
		if self.tex != 0 {
			glDeleteTextures(1, &self.tex);
		}
	}
}

#[derive(Clone, Copy, Default)]
struct Src {
	w: i32,
	h: i32,
	off: usize,
}

impl BitmapFont {
	/// Loads name (e.g. "higeel.fnt") from rcs with the palette (768 bytes); false if missing.
	pub fn load(&mut self, rcs: &NamedArchive, name: &str, palette: &[u8]) -> bool {
		let Some(d) = rcs.read(name) else {
			return false;
		};
		if d.len() < 2048 || palette.len() < 768 {
			return false;
		}
		let mut src = [Src::default(); 256];
		let mut total_w = 0;
		let mut max_h = 0;
		for (i, s) in src.iter_mut().enumerate() {
			let e = &d[i * 8..];
			let mut w = rd16(e) as i16 as i32;
			let mut h = rd16(&e[2..]) as i16 as i32;
			let off = rd32(&e[4..]) as usize;
			if w <= 0 || h <= 0 || off + w as usize * h as usize > d.len() {
				w = 0;
				h = 0;
			}
			*s = Src { w, h, off };
			total_w += w + 1;
			max_h = max_h.max(h);
		}
		if max_h == 0 {
			return false;
		}
		// One row of characters, padded to a power of two width for old drivers.
		let mut tw = 1;
		let mut th = 1;
		while tw < total_w {
			tw *= 2;
		}
		while th < max_h {
			th *= 2;
		}
		let mut px = vec![rgba(0, 0, 0, 0); tw as usize * th as usize];
		let mut x = 0;
		for (s, g) in src.iter().zip(self.glyphs.iter_mut()) {
			g.w = s.w;
			g.h = s.h;
			if s.w == 0 {
				continue;
			}
			for yy in 0..s.h as usize {
				for xx in 0..s.w as usize {
					let v = d[s.off + yy * s.w as usize + xx] as usize;
					if v != 255 {
						px[yy * tw as usize + x as usize + xx] =
							rgb(palette[v * 3], palette[v * 3 + 1], palette[v * 3 + 2]);
					}
				}
			}
			g.u0 = x as f32 / tw as f32;
			g.u1 = (x + s.w) as f32 / tw as f32;
			g.v0 = 0.0;
			g.v1 = s.h as f32 / th as f32;
			x += s.w + 1;
		}
		self.line_height = max_h;
		let space = self.glyphs[b' ' as usize].w;
		self.space = if space != 0 { space } else { (self.glyphs[b'0' as usize].w / 2).max(4) };
		glGenTextures(1, &mut self.tex);
		glBindTexture(GL_TEXTURE_2D, self.tex);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST as GLint);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST as GLint);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE as GLint);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE as GLint);
		glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
		glTexImage2D(
			GL_TEXTURE_2D,
			0,
			GL_RGBA as GLint,
			tw,
			th,
			0,
			GL_RGBA,
			GL_UNSIGNED_BYTE,
			px.as_ptr() as *const c_void,
		);
		true
	}

	pub fn width(&self, text: &str, scale: f32) -> f32 {
		let mut w = 0f32;
		for c in latin1_bytes(text) {
			let g = &self.glyphs[c as usize];
			w += (if g.w != 0 { g.w + 1 } else { self.space }) as f32 * scale;
		}
		w
	}

	/// Draws text (Windows-1252) with its top left at (x, y), in the current 2D projection;
	/// scale 1 is the font's own size.
	pub fn draw(&self, mut x: f32, y: f32, text: &str, scale: f32) {
		if self.tex == 0 {
			return;
		}
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, self.tex);
		glEnable(GL_ALPHA_TEST);
		glAlphaFunc(GL_GREATER, 0.5);
		glColor4f(1.0, 1.0, 1.0, 1.0);
		glBegin(GL_QUADS);
		for c in latin1_bytes(text) {
			let g = &self.glyphs[c as usize];
			if g.w == 0 {
				x += self.space as f32 * scale;
				continue;
			}
			let w = g.w as f32 * scale;
			let h = g.h as f32 * scale;
			glTexCoord2f(g.u0, g.v0);
			glVertex2f(x, y);
			glTexCoord2f(g.u1, g.v0);
			glVertex2f(x + w, y);
			glTexCoord2f(g.u1, g.v1);
			glVertex2f(x + w, y + h);
			glTexCoord2f(g.u0, g.v1);
			glVertex2f(x, y + h);
			x += w + scale;
		}
		glEnd();
		glDisable(GL_ALPHA_TEST);
	}

	pub fn height(&self) -> f32 {
		self.line_height as f32
	}
}

/// palet.pcx's 256 colours (RGB), the HUD's palette; empty if missing.
pub fn hud_palette(rcs: &NamedArchive) -> Vec<u8> {
	rcs.read("palet.pcx").and_then(|d| decode_pcx(&d)).map(|img| img.palette).unwrap_or_default()
}

#[cfg(test)]
mod tests {
	use super::*;

	const DATA: &str = "/Users/xvilo/projects/A2Racer4-dump/disc/Data";

	#[test]
	fn the_hud_palette_has_256_colours() {
		if !std::path::Path::new(DATA).is_dir() {
			return;
		}
		let mut rcs = NamedArchive::default();
		assert!(rcs.open(DATA, "rcs"));
		assert_eq!(hud_palette(&rcs).len(), 768);
	}
}
