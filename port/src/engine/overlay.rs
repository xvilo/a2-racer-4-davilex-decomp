//! The race's overlay (the HUD in the 3D-card modes; Overlay.cpp, Hud_IniFiller.cpp,
//! Hud_Manager.cpp), laid out by overlay<car>.ini on a 640x480 screen:
//!
//!   [COMPOSITES]  groups (Speedometer, Communicator, ...) with a Position offset
//!   [ELEMENTS]    flat models: Anim = an animation in gen_anim.ini (e.g. the speedometer
//!                 body ovl5spd1.d3d with overlay.pcx), Position = x, y of the model's
//!                 origin; the model's y axis points up the screen
//!   [STRINGS]     texts: Position, RGBA (the font's colour is multiplied by it), Scale,
//!                 Alignment (left/center), Type (FIXED: every character as wide as the
//!                 widest digit), Text (the default)
//!   [FONT1]       characters as rectangles of a texture: <name>=texture,x,y,w,h, where
//!                 <name> is the character, a word (SPACE, MINUS, SLASH, DIV) or, in
//!                 [FONT1_ASCII], a character code
//!
//! The speedometer needle turns 160 degrees for 0..200 km/h (Ovl_Dashboard.cpp).

use std::collections::BTreeMap;
use std::rc::Rc;

use crate::engine::mesh::Mesh;
use crate::engine::render::{Renderer, gl_rotate};
use crate::engine::texture::TextureManager;
use crate::game::track::{MeshCache, Track};
use crate::platform::gl::*;
use crate::res::archive::{equal_ci, find_file_ci, latin1_bytes};
use crate::xvga::inifile::{IniFile, atof, atoi, split_fields};

fn numbers(s: &str) -> Vec<f32> {
	let mut out = Vec::new();
	for f in split_fields(s, ',') {
		out.push(atof(&f) as f32);
	}
	out
}

#[derive(Clone, Default)]
struct Glyph {
	tex: u32,
	u0: f32,
	v0: f32,
	u1: f32,
	v1: f32,
	w: i32,
	h: i32,
}

#[derive(Clone)]
struct Element {
	x: f32,
	y: f32,
	mesh: Option<Rc<Mesh>>,
	tex: u32,
	/// its animation's frames
	frames: Vec<(Option<Rc<Mesh>>, u32)>,
	tinted: bool,
	rgba: [f32; 4],
}

impl Default for Element {
	fn default() -> Self {
		Element { x: 0.0, y: 0.0, mesh: None, tex: 0, frames: Vec::new(), tinted: false, rgba: [1.0, 1.0, 1.0, 1.0] }
	}
}

#[derive(Clone)]
struct Text {
	x: f32,
	y: f32,
	scale: f32,
	rgba: [f32; 4],
	centre: bool,
	fixed: bool,
	text: String,
}

impl Default for Text {
	fn default() -> Self {
		Text {
			x: 0.0,
			y: 0.0,
			scale: 1.0,
			rgba: [1.0, 1.0, 1.0, 1.0],
			centre: false,
			fixed: false,
			text: String::new(),
		}
	}
}

#[derive(Default)]
pub struct Overlay {
	glyphs: BTreeMap<i32, Glyph>,
	elements: BTreeMap<String, Element>,
	strings: BTreeMap<String, Text>,
	digit_width: i32,
}

impl Overlay {
	/// Reads overlay<car>.ini; the models come from the track's animations.
	pub fn load(
		&mut self,
		dir: &str,
		car: i32,
		track: &Track,
		meshes: &mut MeshCache,
		textures: &TextureManager,
	) -> bool {
		let mut ini = IniFile::default();
		let mut path = find_file_ci(dir, &format!("overlay{}.ini", car.clamp(0, 7)));
		if path.is_empty() {
			path = find_file_ci(dir, "overlay0.ini");
		}
		if path.is_empty() || !ini.load(&path) {
			return false;
		}
		// The composites' offsets.
		let mut offset: BTreeMap<String, (f32, f32)> = BTreeMap::new();
		for k in ini.keys("COMPOSITES") {
			let name = ini.get("COMPOSITES", &k);
			let p = numbers(&ini.get_or(&name, "Position", "0,0"));
			offset.insert(name, (if !p.is_empty() { p[0] } else { 0.0 }, if p.len() > 1 { p[1] } else { 0.0 }));
		}
		let origin = |sec: &str| -> (f32, f32) {
			let p = numbers(&ini.get_or(sec, "Position", "0,0"));
			let mut x = if !p.is_empty() { p[0] } else { 0.0 };
			let mut y = if p.len() > 1 { p[1] } else { 0.0 };
			if let Some(o) = offset.get(&ini.get(sec, "Parent")) {
				x += o.0;
				y += o.1;
			}
			(x, y)
		};
		for k in ini.keys("ELEMENTS") {
			let name = ini.get("ELEMENTS", &k);
			let mut e = Element::default();
			(e.x, e.y) = origin(&name);
			if ini.has(&name, "RGBA") {
				let c = numbers(&ini.get(&name, "RGBA"));
				for i in 0..4.min(c.len()) {
					e.rgba[i] = c[i] / 255.0;
				}
				e.tinted = true;
			}
			if let Some(f) = track.animation(&ini.get(&name, "Anim")) {
				if !f.is_empty() {
					e.mesh = meshes.get(&f[0].mesh);
					e.tex = textures.get(&f[0].texture);
				}
				for af in f {
					e.frames.push((meshes.get(&af.mesh), textures.get(&af.texture)));
				}
			}
			self.elements.insert(name, e);
		}
		for k in ini.keys("STRINGS") {
			let name = ini.get("STRINGS", &k);
			let mut t = Text::default();
			(t.x, t.y) = origin(&name);
			let sc = numbers(&ini.get_or(&name, "Scale", "1"));
			t.scale = if sc.is_empty() || sc[0] <= 0.0 { 1.0 } else { sc[0] };
			let c = numbers(&ini.get_or(&name, "RGBA", "255,255,255,255"));
			for i in 0..4.min(c.len()) {
				t.rgba[i] = c[i] / 255.0;
			}
			t.centre = equal_ci(&ini.get(&name, "Alignment"), "center");
			t.fixed = equal_ci(&ini.get(&name, "Type"), "FIXED");
			t.text = ini.get(&name, "Text");
			self.strings.insert(name, t);
		}
		// FONT1: characters, words and (in FONT1_ASCII) codes.
		const WORDS: [(&str, i32); 4] =
			[("SPACE", b' ' as i32), ("MINUS", b'-' as i32), ("SLASH", b'/' as i32), ("DIV", b':' as i32)];
		let glyphs = &mut self.glyphs;
		let mut glyph = |code: i32, value: &str| {
			let f = split_fields(value, ',');
			if f.len() < 5 {
				return;
			}
			let mut g = Glyph { tex: textures.get(&f[0]), ..Default::default() };
			let x = atoi(&f[1]);
			let y = atoi(&f[2]);
			g.w = atoi(&f[3]);
			g.h = atoi(&f[4]);
			// The overlay textures are 256x256.
			g.u0 = x as f32 / 256.0;
			g.v0 = y as f32 / 256.0;
			g.u1 = (x + g.w) as f32 / 256.0;
			g.v1 = (y + g.h) as f32 / 256.0;
			glyphs.insert(code, g);
		};
		for k in ini.keys("FONT1") {
			if let Some(w) = WORDS.iter().find(|w| w.0 == k) {
				glyph(w.1, &ini.get("FONT1", &k));
			} else if k.chars().count() == 1 {
				glyph(latin1_bytes(&k)[0] as i32, &ini.get("FONT1", &k));
			}
		}
		for k in ini.keys("FONT1_ASCII") {
			glyph(atoi(&k), &ini.get("FONT1_ASCII", &k));
		}
		for c in b'0'..=b'9' {
			if let Some(g) = self.glyphs.get(&(c as i32)) {
				self.digit_width = self.digit_width.max(g.w);
			}
		}
		!self.glyphs.is_empty()
	}

	/// Sets up the 640x480 projection; call before drawing.
	pub fn begin(&self) {
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		glOrtho(0.0, 640.0, 480.0, 0.0, -100.0, 100.0);
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		glDisable(GL_DEPTH_TEST);
		glDisable(GL_FOG);
	}

	pub fn has_element(&self, name: &str) -> bool {
		self.elements.contains_key(name)
	}

	/// Where an element (or a string) sits; None if there is none.
	pub fn origin(&self, name: &str) -> Option<(f32, f32)> {
		if let Some(e) = self.elements.get(name) {
			return Some((e.x, e.y));
		}
		if let Some(t) = self.strings.get(name) {
			return Some((t.x, t.y));
		}
		None
	}

	/// Draws an element, turned by angle degrees (clockwise) around its origin, scaled by
	/// zoom (the start digits grow in), and by stretch across (a bar filling up).
	pub fn element(&self, r: &Renderer, name: &str, angle: f32, zoom: f32, stretch: f32, frame: usize) {
		let Some(e) = self.elements.get(name) else { return };
		let Some(mut mesh) = e.mesh.as_ref() else { return };
		let mut tex = e.tex;
		if frame > 0
			&& frame < e.frames.len()
			&& let Some(m) = e.frames[frame].0.as_ref()
		{
			mesh = m;
			tex = e.frames[frame].1;
		}
		glPushMatrix();
		glTranslatef(e.x, e.y, 0.0);
		// The models' y axis points up the screen.
		glScalef(zoom * stretch, -zoom, zoom);
		if angle != 0.0 {
			gl_rotate(-angle, 0.0, 0.0, 1.0);
		}
		// The direction arrows and the turn-around sign are signs modelled lying down (x, z):
		// stood up, z runs down the screen.
		if name.starts_with("OVL_DIRECTION_") || name == "OVL_TURNAROUND_FRAME" {
			gl_rotate(90.0, 1.0, 0.0, 0.0);
		}
		glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE as GLint);
		// The dashboard is see-through (its vertices' alpha), the glass over it more so; the
		// lamps' glows are alpha maps (black where clear), added on.
		glEnable(GL_BLEND);
		if name.len() > 5 && name.ends_with("_GLOW") {
			glBlendFunc(GL_ONE, GL_ONE);
		} else {
			glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
		}
		r.draw_mesh(mesh, tex, if e.tinted { Some(&e.rgba) } else { None });
		glDisable(GL_BLEND);
		glPopMatrix();
	}

	pub fn text(&self, mut x: f32, y: f32, s: &str, scale: f32, rgba: &[f32; 4], centre: bool, fixed: bool) {
		let bytes = latin1_bytes(s);
		let advance = |c: u8| {
			let mut w = match self.glyphs.get(&(c as i32)) {
				None => self.digit_width / 2,
				Some(g) => g.w,
			};
			if fixed && c.is_ascii_digit() {
				w = self.digit_width;
			}
			(w + 1) as f32 * scale
		};
		if centre {
			let mut w = 0.0;
			for &c in &bytes {
				w += advance(c);
			}
			x -= w / 2.0;
		}
		glEnable(GL_TEXTURE_2D);
		glEnable(GL_ALPHA_TEST);
		glAlphaFunc(GL_GREATER, 0.5);
		glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE as GLint);
		glColor4f(rgba[0], rgba[1], rgba[2], rgba[3]);
		for &c in &bytes {
			let it = self.glyphs.get(&(c as i32)).or_else(|| self.glyphs.get(&(c.to_ascii_uppercase() as i32)));
			if let Some(g) = it
				&& g.tex != 0
			{
				let ox = if fixed && c.is_ascii_digit() { (self.digit_width - g.w) as f32 * scale / 2.0 } else { 0.0 };
				glBindTexture(GL_TEXTURE_2D, g.tex);
				glBegin(GL_QUADS);
				glTexCoord2f(g.u0, g.v0);
				glVertex2f(x + ox, y);
				glTexCoord2f(g.u1, g.v0);
				glVertex2f(x + ox + g.w as f32 * scale, y);
				glTexCoord2f(g.u1, g.v1);
				glVertex2f(x + ox + g.w as f32 * scale, y + g.h as f32 * scale);
				glTexCoord2f(g.u0, g.v1);
				glVertex2f(x + ox, y + g.h as f32 * scale);
				glEnd();
			}
			x += advance(c);
		}
		glDisable(GL_ALPHA_TEST);
		glColor4f(1.0, 1.0, 1.0, 1.0);
	}

	/// Draws a string element with the given text (empty: its default text).
	pub fn string(&self, name: &str, s: &str) {
		let Some(t) = self.strings.get(name) else { return };
		self.text(t.x, t.y, if s.is_empty() { &t.text } else { s }, t.scale, &t.rgba, t.centre, t.fixed);
	}
}
