//! Textures from the race's archive (rcs), as OpenGL textures. Every texture is there as an
//! 8-bit PCX and as a 24-bit TGA; the original loads the TGA in its 16-bit (3D card) modes,
//! and so does the port. Pink (255, 0, 127) is the transparent colour.

use std::cell::RefCell;
use std::collections::BTreeMap;
use std::ffi::c_void;
use std::rc::Rc;

use crate::platform::gl::*;
use crate::res::archive::NamedArchive;
use crate::res::image::{decode_pcx, decode_tga, rgb, rgba};

/// The textures loaded so far live behind RefCells so that `get` takes `&self`: the
/// Renderer holds a shared reference while the race keeps fetching textures.
pub struct TextureManager {
	rcs: Rc<NamedArchive>,
	by_name: RefCell<BTreeMap<String, u32>>,
	keyed: RefCell<BTreeMap<u32, bool>>,
}

impl Drop for TextureManager {
	fn drop(&mut self) {
		for t in self.by_name.get_mut().values() {
			if *t != 0 {
				glDeleteTextures(1, t);
			}
		}
	}
}

impl TextureManager {
	pub fn new(rcs: Rc<NamedArchive>) -> Self {
		TextureManager { rcs, by_name: RefCell::new(BTreeMap::new()), keyed: RefCell::new(BTreeMap::new()) }
	}

	/// The texture of that name ("e00_weg", "general.pcx": the extension is replaced), loaded
	/// on first use; 0 if there is none.
	pub fn get(&self, name: &str) -> u32 {
		let mut base = name.to_ascii_lowercase();
		if let Some(dot) = base.rfind('.') {
			base.truncate(dot);
		}
		if let Some(&t) = self.by_name.borrow().get(&base) {
			return t;
		}
		let mut tex = 0u32;
		let img = self
			.rcs
			.read(&format!("{base}.tga"))
			.and_then(|b| decode_tga(&b))
			.or_else(|| self.rcs.read(&format!("{base}.pcx")).and_then(|b| decode_pcx(&b)));
		if let Some(mut img) = img.filter(|i| i.width > 0 && i.height > 0) {
			// A 768x512 TGA holds the 512x512 texture with its smaller mipmaps to the right:
			// the texture is the square on the left.
			if img.width == img.height * 3 / 2 {
				let h = img.height as usize;
				let mut sq = vec![0u32; h * h];
				for y in 0..h {
					let row = y * img.width as usize;
					sq[y * h..(y + 1) * h].copy_from_slice(&img.pixels[row..row + h]);
				}
				img.pixels = sq;
				img.width = img.height;
			}
			let mut any = false;
			let key = rgb(255, 0, 127);
			for p in img.pixels.iter_mut() {
				if (*p | rgba(0, 0, 0, 255)) == key {
					*p = rgba(0, 0, 0, 0);
					any = true;
				}
			}
			#[cfg(target_os = "emscripten")]
			scale_to_pow2(&mut img);
			glGenTextures(1, &mut tex);
			glBindTexture(GL_TEXTURE_2D, tex);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR as GLint);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR as GLint);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT as GLint);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT as GLint);
			glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
			glTexImage2D(
				GL_TEXTURE_2D,
				0,
				GL_RGBA as GLint,
				img.width,
				img.height,
				0,
				GL_RGBA,
				GL_UNSIGNED_BYTE,
				img.pixels.as_ptr() as *const c_void,
			);
			self.keyed.borrow_mut().insert(tex, any);
		}
		self.by_name.borrow_mut().insert(base, tex);
		tex
	}

	/// Whether the texture has transparent (colour-keyed) pixels.
	pub fn transparent(&self, texture: u32) -> bool {
		self.keyed.borrow().get(&texture).copied().unwrap_or(false)
	}
}

/// WebGL 1 repeats only textures a power of two across: the others are scaled up.
#[cfg(target_os = "emscripten")]
fn scale_to_pow2(img: &mut crate::res::image::Image) {
	let pow2 = |n: i32| {
		let mut p = 1;
		while p < n {
			p *= 2;
		}
		p
	};
	let pw = pow2(img.width);
	let ph = pow2(img.height);
	if pw != img.width || ph != img.height {
		let mut scaled = vec![0u32; pw as usize * ph as usize];
		for y in 0..ph {
			for x in 0..pw {
				scaled[(y * pw + x) as usize] =
					img.pixels[(y * img.height / ph) as usize * img.width as usize + (x * img.width / pw) as usize];
			}
		}
		img.pixels = scaled;
		img.width = pw;
		img.height = ph;
	}
}
