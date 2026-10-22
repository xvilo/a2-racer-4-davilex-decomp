//! The OpenGL functions the port uses, loaded through SDL at run time so that nothing
//! links against an OpenGL library (the same code runs with Windows' opengl32, macOS'
//! OpenGL framework and Mesa). Fixed-function OpenGL 1.x/2.1, which all three offer.
//!
//! The functions keep their C names; pointer arguments are passed as in C (the callers
//! hand over slices' pointers with their sizes).
#![allow(non_snake_case, non_upper_case_globals, clippy::too_many_arguments, clippy::missing_safety_doc)]

use std::ffi::c_void;

pub type GLenum = u32;
pub type GLbitfield = u32;
pub type GLint = i32;
pub type GLuint = u32;
pub type GLsizei = i32;
pub type GLfloat = f32;
pub type GLdouble = f64;
pub type GLclampf = f32;
pub type GLboolean = u8;
pub type GLubyte = u8;

pub const GL_FALSE: GLboolean = 0;
pub const GL_TRUE: GLboolean = 1;
pub const GL_COLOR_BUFFER_BIT: GLbitfield = 0x4000;
pub const GL_DEPTH_BUFFER_BIT: GLbitfield = 0x0100;
pub const GL_QUADS: GLenum = 0x0007;
pub const GL_TRIANGLES: GLenum = 0x0004;
pub const GL_TRIANGLE_STRIP: GLenum = 0x0005;
pub const GL_TRIANGLE_FAN: GLenum = 0x0006;
pub const GL_LEQUAL: GLenum = 0x0203;
pub const GL_GREATER: GLenum = 0x0204;
pub const GL_ONE: GLenum = 1;
pub const GL_SRC_ALPHA: GLenum = 0x0302;
pub const GL_ONE_MINUS_SRC_ALPHA: GLenum = 0x0303;
pub const GL_ONE_MINUS_SRC_COLOR: GLenum = 0x0301;
pub const GL_CULL_FACE: GLenum = 0x0B44;
pub const GL_FOG: GLenum = 0x0B60;
pub const GL_FOG_DENSITY: GLenum = 0x0B62;
pub const GL_FOG_START: GLenum = 0x0B63;
pub const GL_FOG_END: GLenum = 0x0B64;
pub const GL_FOG_MODE: GLenum = 0x0B65;
pub const GL_FOG_COLOR: GLenum = 0x0B66;
pub const GL_LINEAR: GLenum = 0x2601;
pub const GL_NEAREST: GLenum = 0x2600;
pub const GL_DEPTH_TEST: GLenum = 0x0B71;
pub const GL_ALPHA_TEST: GLenum = 0x0BC0;
pub const GL_BLEND: GLenum = 0x0BE2;
pub const GL_SCISSOR_TEST: GLenum = 0x0C11;
pub const GL_UNPACK_ALIGNMENT: GLenum = 0x0CF5;
pub const GL_PACK_ALIGNMENT: GLenum = 0x0D05;
pub const GL_TEXTURE_2D: GLenum = 0x0DE1;
pub const GL_UNSIGNED_BYTE: GLenum = 0x1401;
pub const GL_UNSIGNED_SHORT: GLenum = 0x1403;
pub const GL_FLOAT: GLenum = 0x1406;
pub const GL_MODELVIEW: GLenum = 0x1700;
pub const GL_PROJECTION: GLenum = 0x1701;
pub const GL_RGBA: GLenum = 0x1908;
pub const GL_MODULATE: GLenum = 0x2100;
pub const GL_REPLACE: GLenum = 0x1E01;
pub const GL_TEXTURE_ENV_MODE: GLenum = 0x2200;
pub const GL_TEXTURE_ENV: GLenum = 0x2300;
pub const GL_TEXTURE_MAG_FILTER: GLenum = 0x2800;
pub const GL_TEXTURE_MIN_FILTER: GLenum = 0x2801;
pub const GL_TEXTURE_WRAP_S: GLenum = 0x2802;
pub const GL_TEXTURE_WRAP_T: GLenum = 0x2803;
pub const GL_REPEAT: GLenum = 0x2901;
pub const GL_CLAMP_TO_EDGE: GLenum = 0x812F;
pub const GL_VERTEX_ARRAY: GLenum = 0x8074;
pub const GL_COLOR_ARRAY: GLenum = 0x8076;
pub const GL_TEXTURE_COORD_ARRAY: GLenum = 0x8078;
pub const GL_VENDOR: GLenum = 0x1F00;
pub const GL_RENDERER: GLenum = 0x1F01;
pub const GL_VERSION: GLenum = 0x1F02;
pub const GL_BACK: GLenum = 0x0405;
pub const GL_FRONT: GLenum = 0x0404;
pub const GL_CW: GLenum = 0x0900;
pub const GL_CCW: GLenum = 0x0901;
pub const GL_EXP: GLenum = 0x0800;

macro_rules! gl_funcs {
	($( fn $name:ident ( $($arg:ident : $ty:ty),* ) $(-> $ret:ty)? ; )*) => {
		#[cfg(not(target_os = "emscripten"))]
		mod ptrs {
			use super::*;
			pub struct Table {
				$( pub $name: Option<unsafe extern "system" fn($($ty),*) $(-> $ret)?>, )*
			}
			pub static mut TABLE: Table = Table { $( $name: None, )* };
		}

		#[cfg(not(target_os = "emscripten"))]
		/// Loads the functions for the current context; false if one is missing.
		pub fn gl_load(get: impl Fn(&str) -> *const c_void) -> bool {
			let mut ok = true;
			$(
				let p = get(concat!("gl", stringify!($name)));
				if p.is_null() {
					eprintln!(concat!("OpenGL: gl", stringify!($name), " missing"));
					ok = false;
				}
				// SAFETY: the pointer comes from SDL_GL_GetProcAddress for this very function;
				// the table is only touched from the main thread.
				unsafe { ptrs::TABLE.$name = std::mem::transmute::<*const c_void, Option<unsafe extern "system" fn($($ty),*) $(-> $ret)?>>(p); }
			)*
			ok
		}

		#[cfg(target_os = "emscripten")]
		/// In the browser Emscripten emulates these on WebGL (LEGACY_GL_EMULATION) and links
		/// them itself.
		pub fn gl_load(_get: impl Fn(&str) -> *const c_void) -> bool {
			true
		}

		#[cfg(target_os = "emscripten")]
		mod ptrs {
			use super::*;
			pub mod sys {
				use super::*;
				unsafe extern "C" {
					$( #[link_name = concat!("gl", stringify!($name))] pub fn $name($($arg: $ty),*) $(-> $ret)?; )*
				}
			}
		}

		pub mod f {
			use super::*;
			$(
				#[inline]
				pub fn $name($($arg: $ty),*) $(-> $ret)? {
					// SAFETY: fixed-function GL on the one GL thread; the pointer arguments are
					// the callers' live buffers, as in the C code.
					#[cfg(not(target_os = "emscripten"))]
					unsafe {
						#[allow(static_mut_refs)]
						(ptrs::TABLE.$name.expect(concat!("gl", stringify!($name), " not loaded")))($($arg),*)
					}
					#[cfg(target_os = "emscripten")]
					unsafe { ptrs::sys::$name($($arg),*) }
				}
			)*
		}
	};
}

gl_funcs! {
	fn Viewport(x: GLint, y: GLint, w: GLsizei, h: GLsizei);
	fn Scissor(x: GLint, y: GLint, w: GLsizei, h: GLsizei);
	fn ClearColor(r: GLfloat, g: GLfloat, b: GLfloat, a: GLfloat);
	fn ClearDepth(d: GLdouble);
	fn Clear(mask: GLbitfield);
	fn Enable(cap: GLenum);
	fn Disable(cap: GLenum);
	fn Hint(target: GLenum, mode: GLenum);
	fn GenTextures(n: GLsizei, textures: *mut GLuint);
	fn DeleteTextures(n: GLsizei, textures: *const GLuint);
	fn BindTexture(target: GLenum, texture: GLuint);
	fn TexImage2D(target: GLenum, level: GLint, internalformat: GLint, w: GLsizei, h: GLsizei, border: GLint, format: GLenum, ty: GLenum, pixels: *const c_void);
	fn TexSubImage2D(target: GLenum, level: GLint, x: GLint, y: GLint, w: GLsizei, h: GLsizei, format: GLenum, ty: GLenum, pixels: *const c_void);
	fn TexParameteri(target: GLenum, pname: GLenum, param: GLint);
	fn TexEnvi(target: GLenum, pname: GLenum, param: GLint);
	fn PixelStorei(pname: GLenum, param: GLint);
	fn MatrixMode(mode: GLenum);
	fn LoadIdentity();
	fn LoadMatrixf(m: *const GLfloat);
	fn MultMatrixf(m: *const GLfloat);
	fn Ortho(l: GLdouble, r: GLdouble, b: GLdouble, t: GLdouble, n: GLdouble, f: GLdouble);
	fn Begin(mode: GLenum);
	fn End();
	fn TexCoord2f(s: GLfloat, t: GLfloat);
	fn Vertex2f(x: GLfloat, y: GLfloat);
	fn Color4f(r: GLfloat, g: GLfloat, b: GLfloat, a: GLfloat);
	fn Color4ub(r: GLubyte, g: GLubyte, b: GLubyte, a: GLubyte);
	fn Vertex3f(x: GLfloat, y: GLfloat, z: GLfloat);
	fn Translatef(x: GLfloat, y: GLfloat, z: GLfloat);
	fn Scalef(x: GLfloat, y: GLfloat, z: GLfloat);
	fn PushMatrix();
	fn PopMatrix();
	fn ColorPointer(size: GLint, ty: GLenum, stride: GLsizei, ptr: *const c_void);
	fn EnableClientState(array: GLenum);
	fn DisableClientState(array: GLenum);
	fn VertexPointer(size: GLint, ty: GLenum, stride: GLsizei, ptr: *const c_void);
	fn TexCoordPointer(size: GLint, ty: GLenum, stride: GLsizei, ptr: *const c_void);
	fn DrawElements(mode: GLenum, count: GLsizei, ty: GLenum, indices: *const c_void);
	fn DrawArrays(mode: GLenum, first: GLint, count: GLsizei);
	fn DepthFunc(func: GLenum);
	fn DepthMask(flag: GLboolean);
	fn BlendFunc(s: GLenum, d: GLenum);
	fn AlphaFunc(func: GLenum, reference: GLclampf);
	fn CullFace(mode: GLenum);
	fn FrontFace(mode: GLenum);
	fn Fogi(pname: GLenum, param: GLint);
	fn Fogf(pname: GLenum, param: GLfloat);
	fn Fogfv(pname: GLenum, params: *const GLfloat);
	fn ReadPixels(x: GLint, y: GLint, w: GLsizei, h: GLsizei, format: GLenum, ty: GLenum, pixels: *mut c_void);
	fn ReadBuffer(mode: GLenum);
	fn GetError() -> GLenum;
	fn GetString(name: GLenum) -> *const GLubyte;
}

pub use f::{
	AlphaFunc as glAlphaFunc, Begin as glBegin, BindTexture as glBindTexture, BlendFunc as glBlendFunc,
	Clear as glClear, ClearColor as glClearColor, ClearDepth as glClearDepth, Color4f as glColor4f,
	Color4ub as glColor4ub, ColorPointer as glColorPointer, CullFace as glCullFace, DeleteTextures as glDeleteTextures,
	DepthFunc as glDepthFunc, DepthMask as glDepthMask, Disable as glDisable,
	DisableClientState as glDisableClientState, DrawArrays as glDrawArrays, DrawElements as glDrawElements,
	Enable as glEnable, EnableClientState as glEnableClientState, End as glEnd, Fogf as glFogf, Fogfv as glFogfv,
	Fogi as glFogi, FrontFace as glFrontFace, GenTextures as glGenTextures, GetError as glGetError,
	GetString as glGetString, Hint as glHint, LoadIdentity as glLoadIdentity, LoadMatrixf as glLoadMatrixf,
	MatrixMode as glMatrixMode, MultMatrixf as glMultMatrixf, Ortho as glOrtho, PixelStorei as glPixelStorei,
	PopMatrix as glPopMatrix, PushMatrix as glPushMatrix, ReadBuffer as glReadBuffer, ReadPixels as glReadPixels,
	Scalef as glScalef, Scissor as glScissor, TexCoord2f as glTexCoord2f, TexCoordPointer as glTexCoordPointer,
	TexEnvi as glTexEnvi, TexImage2D as glTexImage2D, TexParameteri as glTexParameteri,
	TexSubImage2D as glTexSubImage2D, Translatef as glTranslatef, Vertex2f as glVertex2f, Vertex3f as glVertex3f,
	VertexPointer as glVertexPointer, Viewport as glViewport,
};
