//! Drawing the race with OpenGL 1.x: the road's chunks, models with their textures, and
//! the camera. The game's world is left-handed (Direct3D: x right, y up, z forward); the
//! camera mirrors it in z for OpenGL, so everything else works in the game's coordinates.

use std::ffi::c_void;
use std::mem::{offset_of, size_of};

use crate::engine::mesh::{Mesh, MeshVertex};
use crate::engine::road::RoadChunk;
use crate::engine::texture::TextureManager;
use crate::platform::gl::*;

const PI: f32 = 3.14159265;

pub struct Renderer<'a> {
	pub textures: &'a TextureManager,
	/// the camera, game coordinates
	pub eye: [f32; 3],
}

impl<'a> Renderer<'a> {
	pub fn new(textures: &'a TextureManager) -> Self {
		Renderer { textures, eye: [0.0; 3] }
	}

	/// Binds a texture (0: none), with alpha testing for colour-keyed ones.
	pub fn bind(&self, tex: u32) {
		if tex != 0 {
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, tex);
		} else {
			glDisable(GL_TEXTURE_2D);
		}
		if tex != 0 && self.textures.transparent(tex) {
			glEnable(GL_ALPHA_TEST);
			glAlphaFunc(GL_GREATER, 0.5);
		} else {
			glDisable(GL_ALPHA_TEST);
		}
	}

	/// tint: a colour for the whole model in place of its vertex colours.
	pub fn draw_mesh(&self, m: &Mesh, tex: u32, tint: Option<&[f32; 4]>) {
		if m.indices.is_empty() {
			return;
		}
		self.bind(tex);
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_TEXTURE_COORD_ARRAY);
		let v = m.vertices.as_ptr() as *const u8;
		let stride = size_of::<MeshVertex>() as GLsizei;
		if let Some(tint) = tint {
			glColor4f(tint[0], tint[1], tint[2], tint[3]);
		} else {
			glEnableClientState(GL_COLOR_ARRAY);
			glColorPointer(
				4,
				GL_UNSIGNED_BYTE,
				stride,
				v.wrapping_add(offset_of!(MeshVertex, colour)) as *const c_void,
			);
		}
		glVertexPointer(3, GL_FLOAT, stride, v.wrapping_add(offset_of!(MeshVertex, x)) as *const c_void);
		glTexCoordPointer(2, GL_FLOAT, stride, v.wrapping_add(offset_of!(MeshVertex, u)) as *const c_void);
		glDrawElements(
			GL_TRIANGLES,
			m.indices.len() as GLsizei,
			GL_UNSIGNED_SHORT,
			m.indices.as_ptr() as *const c_void,
		);
		glDisableClientState(GL_COLOR_ARRAY);
		glColor4f(1.0, 1.0, 1.0, 1.0);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glDisableClientState(GL_VERTEX_ARRAY);
	}

	/// A chunk's four lists with the stage's road, grass, second grass and rail textures.
	pub fn draw_chunk(&self, c: &RoadChunk, tex: &[u32; 4]) {
		for l in 0..4 {
			if c.lists[l].is_empty() {
				continue;
			}
			self.bind(tex[l]);
			glBegin(GL_TRIANGLES);
			for q in &c.lists[l] {
				for &t in &q.tri {
					let v = &q.v[t as usize];
					let col = v.colour.to_ne_bytes();
					glColor4ub(col[0], col[1], col[2], 255);
					glTexCoord2f(v.u, v.v);
					glVertex3f(v.x, v.y, v.z);
				}
			}
			glEnd();
		}
	}
}

pub fn gl_perspective(fov_y: f32, aspect: f32, znear: f32, zfar: f32) {
	let f = 1.0 / (fov_y / 2.0).tan();
	let m: [f32; 16] = [
		f / aspect,
		0.0,
		0.0,
		0.0,
		0.0,
		f,
		0.0,
		0.0,
		0.0,
		0.0,
		(zfar + znear) / (znear - zfar),
		-1.0,
		0.0,
		0.0,
		2.0 * zfar * znear / (znear - zfar),
		0.0,
	];
	glMatrixMode(GL_PROJECTION);
	glLoadMatrixf(m.as_ptr());
}

/// The view from eye towards target, in the game's left-handed coordinates (y up): the
/// world is mirrored in z for OpenGL.
pub fn gl_look_at(eye: &[f32; 3], target: &[f32; 3]) {
	let mut f = [target[0] - eye[0], target[1] - eye[1], -(target[2] - eye[2])];
	let mut n = (f[0] * f[0] + f[1] * f[1] + f[2] * f[2]).sqrt();
	for x in f.iter_mut() {
		*x /= if n > 0.0 { n } else { 1.0 };
	}
	let up = [0.0f32, 1.0, 0.0];
	let mut s = [f[1] * up[2] - f[2] * up[1], f[2] * up[0] - f[0] * up[2], f[0] * up[1] - f[1] * up[0]];
	n = (s[0] * s[0] + s[1] * s[1] + s[2] * s[2]).sqrt();
	for x in s.iter_mut() {
		*x /= if n > 0.0 { n } else { 1.0 };
	}
	let u = [s[1] * f[2] - s[2] * f[1], s[2] * f[0] - s[0] * f[2], s[0] * f[1] - s[1] * f[0]];
	let m: [f32; 16] = [s[0], u[0], -f[0], 0.0, s[1], u[1], -f[1], 0.0, s[2], u[2], -f[2], 0.0, 0.0, 0.0, 0.0, 1.0];
	glMatrixMode(GL_MODELVIEW);
	glLoadMatrixf(m.as_ptr());
	let mirror: [f32; 16] = [1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, -1.0, 0.0, 0.0, 0.0, 0.0, 1.0];
	let t: [f32; 16] = [1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, -eye[0], -eye[1], eye[2], 1.0];
	glMultMatrixf(t.as_ptr());
	glMultMatrixf(mirror.as_ptr());
}

pub fn gl_rotate(deg: f32, x: f32, y: f32, z: f32) {
	let a = deg * PI / 180.0;
	let c = a.cos();
	let s = a.sin();
	let t = 1.0 - c;
	let m: [f32; 16] = [
		t * x * x + c,
		t * x * y + s * z,
		t * x * z - s * y,
		0.0,
		t * x * y - s * z,
		t * y * y + c,
		t * y * z + s * x,
		0.0,
		t * x * z + s * y,
		t * y * z - s * x,
		t * z * z + c,
		0.0,
		0.0,
		0.0,
		0.0,
		1.0,
	];
	glMultMatrixf(m.as_ptr());
}

/// Multiplies the model view by a placement: the model's x, y, z axes become right, up and
/// forward, its origin pos (all in game coordinates).
pub fn gl_mult_world(right: &[f32; 3], up: &[f32; 3], forward: &[f32; 3], pos: &[f32; 3]) {
	let m: [f32; 16] = [
		right[0], right[1], right[2], 0.0, up[0], up[1], up[2], 0.0, forward[0], forward[1], forward[2], 0.0, pos[0],
		pos[1], pos[2], 1.0,
	];
	glMultMatrixf(m.as_ptr());
}
