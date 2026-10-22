//! Platform layer: the window, presenting the screen, input and time. Takes the place of
//! the Win32 message loops, DirectDraw and DirectInput in the menu and the race.

use std::cell::RefCell;
use std::ffi::{CStr, CString, c_void};
use std::ptr;

use sdl2_sys::*;
// sdl2_sys has a constant named None.
use std::option::Option::None;

use crate::gfx::png::png_write_rgba;
use crate::platform::gl::*;

/// The menu's screen (800x600); the race draws at the window's size.
pub const SCREEN_W: i32 = 800;
pub const SCREEN_H: i32 = 600;

pub const KEY_NONE: i32 = 0;
pub const KEY_ESCAPE: i32 = 27;
pub const KEY_ENTER: i32 = 13;
pub const KEY_SPACE: i32 = 32;
pub const KEY_UP: i32 = 0x100;
pub const KEY_DOWN: i32 = 0x101;
pub const KEY_LEFT: i32 = 0x102;
pub const KEY_RIGHT: i32 = 0x103;

#[derive(Default, Clone)]
pub struct SysInput {
	/// in 800x600 screen coordinates
	pub mouse_x: i32,
	pub mouse_y: i32,
	/// left button held
	pub mouse_down: bool,
	/// left button went down since the last poll
	pub mouse_pressed: bool,
	/// left button released since the last poll
	pub mouse_clicked: bool,
	/// last key pressed since the last poll, KEY_* or ASCII
	pub key: i32,
	/// characters typed since the last poll (Windows-1252, one char per byte)
	pub text: String,
	/// backspace presses since the last poll
	pub backspaces: i32,
	/// window closed
	pub quit: bool,
}

#[derive(Clone)]
pub struct SysOptions {
	/// initial window size = 800x600 * scale
	pub scale: i32,
	/// no window (screenshots, tests)
	pub hidden: bool,
	/// scripted input, see below (tests)
	pub script: String,
}

impl Default for SysOptions {
	fn default() -> Self {
		SysOptions { scale: 1, hidden: false, script: String::new() }
	}
}

/// A game controller or joystick (the original's DirectInput joystick, joypad and wheel):
/// steering -1..1, accelerator and brake 0..1, buttons 0 turbo, 1 handbrake, 2 horn.
#[derive(Default, Clone, Copy)]
pub struct SysPad {
	pub present: bool,
	pub steer: f32,
	pub throttle: f32,
	pub brake: f32,
	pub button: [bool; 3],
}

/// The picture the script's "shot" command saves; set by the game.
pub type SysScreenshotFn = fn(&str);

#[cfg(target_os = "emscripten")]
unsafe extern "C" {
	fn emscripten_sleep(ms: u32);
}

/// Events SDL makes from touches, and the script's clicks.
const SDL_TOUCH_MOUSEID: u32 = u32::MAX;
const SCANCODE_UNKNOWN: u32 = SDL_Scancode::SDL_SCANCODE_UNKNOWN as u32;

struct State {
	window: *mut SDL_Window,
	/// OpenGL when available (needed by the race); else an SDL renderer for the menus.
	gl_context: SDL_GLContext,
	screen_texture: GLuint,
	renderer: *mut SDL_Renderer,
	texture: *mut SDL_Texture,
	headless: bool,
	/// Mouse state survives across SysInput structs: the game polls from many nested loops.
	mouse_x: i32,
	mouse_y: i32,
	mouse_down: bool,
	/// A quit request stays set: menus nested several deep must all see it.
	quit_requested: bool,
	script_lines: Vec<String>,
	script_pos: usize,
	script_resume: u32,
	screenshot_fn: Option<SysScreenshotFn>,
	/// held for keyispressed
	fake_key: u32,
	fake_key_until: u32,
	glshot_path: String,
	held_key: [u32; 4],
	held_until: [u32; 4],
	pad: *mut SDL_GameController,
	stick: *mut SDL_Joystick,
	web_last: u32,
}

thread_local! {
	static STATE: RefCell<State> = const { RefCell::new(State {
		window: ptr::null_mut(),
		gl_context: ptr::null_mut(),
		screen_texture: 0,
		renderer: ptr::null_mut(),
		texture: ptr::null_mut(),
		headless: false,
		mouse_x: 0,
		mouse_y: 0,
		mouse_down: false,
		quit_requested: false,
		script_lines: Vec::new(),
		script_pos: 0,
		script_resume: 0,
		screenshot_fn: None,
		fake_key: SCANCODE_UNKNOWN,
		fake_key_until: 0,
		glshot_path: String::new(),
		held_key: [0; 4],
		held_until: [0; 4],
		pad: ptr::null_mut(),
		stick: ptr::null_mut(),
		web_last: 0,
	}) };
}

fn with<R>(f: impl FnOnce(&mut State) -> R) -> R {
	STATE.with(|s| f(&mut s.borrow_mut()))
}

fn sdl_error() -> String {
	// SAFETY: SDL_GetError returns a valid NUL-terminated string.
	unsafe { CStr::from_ptr(SDL_GetError()).to_string_lossy().into_owned() }
}

fn ticks() -> u32 {
	// SAFETY: plain SDL call.
	unsafe { SDL_GetTicks() }
}

/// In the browser the game's loops hand control back after each frame (Asyncify), at
/// most 60 a second, so that the page can draw and the events come in.
fn web_yield(s: &mut State) {
	#[cfg(target_os = "emscripten")]
	{
		let now = ticks();
		let due = s.web_last.wrapping_add(16);
		// SAFETY: Asyncify unwinds and rewinds the stack around this call.
		unsafe { emscripten_sleep(if now < due && due - now <= 16 { due - now } else { 0 }) };
		s.web_last = ticks();
	}
	#[cfg(not(target_os = "emscripten"))]
	let _ = s;
}

pub fn sys_set_screenshot(f: SysScreenshotFn) {
	with(|s| s.screenshot_fn = Some(f));
}

// Scripted input for tests: one command per line, run in order as time passes.
//   wait <ms>         pause the script
//   hold <name> <ms>  hold a key down for a while (for keyispressed)
//   key <name>        press and release a key (enter, escape, up, down, left, right,
//                     tab, space, backspace, f1..f12, or a letter/digit)
//   text <string>     type text
//   click <x> <y>     left click at an 800x600 position
//   shot <file.png>   save the screen
//   glshot <file.png> save the next 3D frame as drawn
//   quit              close the window
fn load_script(s: &mut State, path: &str) {
	let Ok(text) = std::fs::read(path) else {
		eprintln!("script: cannot open {path}");
		return;
	};
	for line in String::from_utf8_lossy(&text).lines() {
		let line = line.trim_end_matches(['\r', '\n']);
		if !line.is_empty() && !line.starts_with('#') {
			s.script_lines.push(line.to_string());
		}
	}
}

fn key_by_name(n: &str) -> SDL_Keycode {
	use SDL_KeyCode::*;
	let keys = [
		("enter", SDLK_RETURN),
		("escape", SDLK_ESCAPE),
		("up", SDLK_UP),
		("down", SDLK_DOWN),
		("left", SDLK_LEFT),
		("right", SDLK_RIGHT),
		("tab", SDLK_TAB),
		("space", SDLK_SPACE),
		("backspace", SDLK_BACKSPACE),
	];
	if let Some((_, k)) = keys.iter().find(|(name, _)| *name == n) {
		return *k as SDL_Keycode;
	}
	let b = n.as_bytes();
	if b.len() >= 2 && b[0] == b'f' && (b'1'..=b'9').contains(&b[1]) {
		return SDLK_F1 as SDL_Keycode + crate::xvga::inifile::atoi(&n[1..]) - 1;
	}
	b.first().copied().unwrap_or(0) as SDL_Keycode
}

fn scancode_from_key(k: SDL_Keycode) -> u32 {
	// SAFETY: plain SDL call.
	unsafe { SDL_GetScancodeFromKey(k) as u32 }
}

fn zeroed_event() -> SDL_Event {
	// SAFETY: SDL_Event is a plain C union; all zeroes is a valid value.
	unsafe { std::mem::zeroed() }
}

fn push_key(s: &mut State, k: SDL_Keycode) {
	let mut e = zeroed_event();
	// SAFETY: writing the key fields of a zeroed event, then handing it to SDL's queue.
	unsafe {
		e.type_ = SDL_EventType::SDL_KEYDOWN as u32;
		e.key.keysym.sym = k;
		e.key.keysym.scancode = SDL_GetScancodeFromKey(k);
		s.fake_key = e.key.keysym.scancode as u32;
		s.fake_key_until = SDL_GetTicks() + 100;
		SDL_PushEvent(&mut e);
		e.type_ = SDL_EventType::SDL_KEYUP as u32;
		SDL_PushEvent(&mut e);
	}
}

fn run_script(s: &mut State) -> Option<(SysScreenshotFn, String)> {
	while s.script_pos < s.script_lines.len() && ticks() >= s.script_resume {
		let cmd = s.script_lines[s.script_pos].clone();
		s.script_pos += 1;
		let mut e = zeroed_event();
		if let Some(ms) = cmd.strip_prefix("wait ") {
			s.script_resume = ticks().wrapping_add(crate::xvga::inifile::atoi(ms) as u32);
		} else if let Some(rest) = cmd.strip_prefix("hold ") {
			let mut it = rest.split_whitespace();
			let name = it.next().unwrap_or("");
			let ms = it.next().map_or(0, crate::xvga::inifile::atoi);
			for i in 0..4 {
				if s.held_until[i] <= ticks() {
					s.held_key[i] = scancode_from_key(key_by_name(name));
					s.held_until[i] = ticks().wrapping_add(ms as u32);
					break;
				}
			}
		} else if let Some(name) = cmd.strip_prefix("key ") {
			push_key(s, key_by_name(name));
			s.script_resume = ticks() + 50;
			break;
		} else if let Some(text) = cmd.strip_prefix("text ") {
			// SAFETY: filling a zeroed text event (NUL-terminated, within its 32 bytes).
			unsafe {
				e.type_ = SDL_EventType::SDL_TEXTINPUT as u32;
				for (i, b) in text.bytes().take(31).enumerate() {
					e.text.text[i] = b as libc_char;
				}
				SDL_PushEvent(&mut e);
			}
		} else if let Some(rest) = cmd.strip_prefix("click ") {
			let mut it = rest.split_whitespace().map(crate::xvga::inifile::atoi);
			let x = it.next().unwrap_or(0);
			let y = it.next().unwrap_or(0);
			// Already in screen coordinates: no mapping (see sys_poll).
			// SAFETY: filling a zeroed mouse button event.
			unsafe {
				e.type_ = SDL_EventType::SDL_MOUSEBUTTONDOWN as u32;
				e.button.button = SDL_BUTTON_LEFT as u8;
				e.button.which = SDL_TOUCH_MOUSEID;
				e.button.x = x;
				e.button.y = y;
				SDL_PushEvent(&mut e);
				e.type_ = SDL_EventType::SDL_MOUSEBUTTONUP as u32;
				SDL_PushEvent(&mut e);
			}
			s.script_resume = ticks() + 50;
			break;
		} else if let Some(path) = cmd.strip_prefix("shot ") {
			if let Some(f) = s.screenshot_fn {
				// Run by the caller once the state is no longer borrowed; the rest of the
				// script waits until then.
				return Some((f, path.to_string()));
			}
		} else if let Some(path) = cmd.strip_prefix("glshot ") {
			s.glshot_path = path.to_string();
		} else if cmd == "quit" {
			// SAFETY: a zeroed quit event.
			unsafe {
				e.type_ = SDL_EventType::SDL_QUIT as u32;
				SDL_PushEvent(&mut e);
			}
		}
	}
	None
}

#[allow(non_camel_case_types)]
type libc_char = std::ffi::c_char;

pub fn sys_init(title: &str, opt: &SysOptions) -> bool {
	with(|s| {
		s.headless = opt.hidden;
		if !opt.script.is_empty() {
			load_script(s, &opt.script);
		}
		// SAFETY: SDL setup on the main thread; every pointer is checked before use.
		unsafe {
			if s.headless {
				return SDL_Init(SDL_INIT_TIMER) == 0;
			}
			if SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_JOYSTICK | SDL_INIT_GAMECONTROLLER) != 0 {
				eprintln!("SDL_Init: {}", sdl_error());
				return false;
			}
			let scale = if opt.scale > 0 { opt.scale } else { 1 };
			use SDL_GLattr::*;
			SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
			SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
			SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
			SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
			let ctitle = CString::new(title).unwrap_or_default();
			let centered = SDL_WINDOWPOS_CENTERED_MASK as i32;
			s.window = SDL_CreateWindow(
				ctitle.as_ptr(),
				centered,
				centered,
				SCREEN_W * scale,
				SCREEN_H * scale,
				SDL_WindowFlags::SDL_WINDOW_RESIZABLE as u32 | SDL_WindowFlags::SDL_WINDOW_OPENGL as u32,
			);
			if !s.window.is_null() {
				s.gl_context = SDL_GL_CreateContext(s.window);
				if !s.gl_context.is_null()
					&& !gl_load(|name| {
						let c = CString::new(name).unwrap_or_default();
						SDL_GL_GetProcAddress(c.as_ptr()) as *const c_void
					}) {
					SDL_GL_DeleteContext(s.gl_context);
					s.gl_context = ptr::null_mut();
				}
				if s.gl_context.is_null() {
					eprintln!("no OpenGL ({}); the race needs it, the menus work without", sdl_error());
					SDL_DestroyWindow(s.window);
					s.window = ptr::null_mut();
				}
			}
			SDL_StopTextInput(); // only while an edit box is open
			if !s.gl_context.is_null() {
				SDL_GL_SetSwapInterval(1);
				let mut depth = 0;
				SDL_GL_GetAttribute(SDL_GL_DEPTH_SIZE, &mut depth);
				if depth < 16 {
					eprintln!("OpenGL: only a {depth}-bit depth buffer");
				}
				glGenTextures(1, &mut s.screen_texture);
				glBindTexture(GL_TEXTURE_2D, s.screen_texture);
				glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR as GLint);
				glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR as GLint);
				// 800x600 isn't a power of two: WebGL 1 only draws such a texture clamped.
				glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE as GLint);
				glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE as GLint);
				glTexImage2D(
					GL_TEXTURE_2D,
					0,
					GL_RGBA as GLint,
					SCREEN_W,
					SCREEN_H,
					0,
					GL_RGBA,
					GL_UNSIGNED_BYTE,
					ptr::null(),
				);
				return true;
			}
			s.window = SDL_CreateWindow(
				ctitle.as_ptr(),
				centered,
				centered,
				SCREEN_W * scale,
				SCREEN_H * scale,
				SDL_WindowFlags::SDL_WINDOW_RESIZABLE as u32,
			);
			if s.window.is_null() {
				eprintln!("SDL_CreateWindow: {}", sdl_error());
				return false;
			}
			s.renderer = SDL_CreateRenderer(s.window, -1, SDL_RendererFlags::SDL_RENDERER_PRESENTVSYNC as u32);
			if s.renderer.is_null() {
				s.renderer = SDL_CreateRenderer(s.window, -1, SDL_RendererFlags::SDL_RENDERER_SOFTWARE as u32);
			}
			if s.renderer.is_null() {
				eprintln!("SDL_CreateRenderer: {}", sdl_error());
				return false;
			}
			// Keep the 4:3 picture and map mouse coordinates back to 800x600.
			SDL_RenderSetLogicalSize(s.renderer, SCREEN_W, SCREEN_H);
			s.texture = SDL_CreateTexture(
				s.renderer,
				SDL_PixelFormatEnum::SDL_PIXELFORMAT_ABGR8888 as u32,
				SDL_TextureAccess::SDL_TEXTUREACCESS_STREAMING as i32,
				SCREEN_W,
				SCREEN_H,
			);
			!s.texture.is_null()
		}
	})
}

pub fn sys_shutdown() {
	with(|s| {
		// SAFETY: releases what sys_init made, each only if it exists.
		unsafe {
			if !s.gl_context.is_null() {
				glDeleteTextures(1, &s.screen_texture);
				SDL_GL_DeleteContext(s.gl_context);
			}
			if !s.texture.is_null() {
				SDL_DestroyTexture(s.texture);
			}
			if !s.renderer.is_null() {
				SDL_DestroyRenderer(s.renderer);
			}
			if !s.window.is_null() {
				SDL_DestroyWindow(s.window);
			}
			SDL_Quit();
		}
	});
}

/// The 4:3 picture's place in a w x h window (letterboxed).
fn fit_4_3(w: i32, h: i32) -> SDL_Rect {
	let (rw, rh) =
		if w * SCREEN_H > h * SCREEN_W { (h * SCREEN_W / SCREEN_H, h) } else { (w, w * SCREEN_H / SCREEN_W) };
	SDL_Rect { x: (w - rw) / 2, y: (h - rh) / 2, w: rw, h: rh }
}

/// Window coordinates to 800x600.
fn map_mouse(s: &State, x: &mut i32, y: &mut i32) {
	if s.gl_context.is_null() {
		return; // SDL_RenderSetLogicalSize already did it
	}
	let (mut w, mut h) = (0, 0);
	// SAFETY: the window exists while there is a GL context.
	unsafe { SDL_GetWindowSize(s.window, &mut w, &mut h) };
	let r = fit_4_3(w, h);
	*x = if r.w != 0 { (*x - r.x) * SCREEN_W / r.w } else { 0 };
	*y = if r.h != 0 { (*y - r.y) * SCREEN_H / r.h } else { 0 };
}

fn drawable_size(s: &State) -> (i32, i32) {
	let (mut w, mut h) = (0, 0);
	// SAFETY: the window exists while there is a GL context.
	unsafe { SDL_GL_GetDrawableSize(s.window, &mut w, &mut h) };
	(w, h)
}

/// Shows an 800x600 picture, one 32-bit pixel per entry with bytes R, G, B, A in memory.
pub fn sys_present(rgba: &[u32]) {
	with(|s| {
		if s.headless {
			return;
		}
		if s.gl_context.is_null() {
			// SAFETY: the texture is SCREEN_W x SCREEN_H and rgba holds that many pixels.
			unsafe {
				SDL_UpdateTexture(s.texture, ptr::null(), rgba.as_ptr() as *const c_void, SCREEN_W * 4);
				SDL_RenderClear(s.renderer);
				SDL_RenderCopy(s.renderer, s.texture, ptr::null(), ptr::null());
				SDL_RenderPresent(s.renderer);
			}
			return;
		}
		let (w, h) = drawable_size(s);
		glViewport(0, 0, w, h);
		glClearColor(0.0, 0.0, 0.0, 1.0);
		glClear(GL_COLOR_BUFFER_BIT);
		let r = fit_4_3(w, h);
		glViewport(r.x, r.y, r.w, r.h);
		glDisable(GL_DEPTH_TEST);
		glDisable(GL_CULL_FACE);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		glOrtho(0.0, SCREEN_W as f64, SCREEN_H as f64, 0.0, -1.0, 1.0);
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, s.screen_texture);
		glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE as GLint);
		glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
		glTexSubImage2D(
			GL_TEXTURE_2D,
			0,
			0,
			0,
			SCREEN_W,
			SCREEN_H,
			GL_RGBA,
			GL_UNSIGNED_BYTE,
			rgba.as_ptr() as *const c_void,
		);
		glBegin(GL_QUADS);
		glTexCoord2f(0.0, 0.0);
		glVertex2f(0.0, 0.0);
		glTexCoord2f(1.0, 0.0);
		glVertex2f(SCREEN_W as f32, 0.0);
		glTexCoord2f(1.0, 1.0);
		glVertex2f(SCREEN_W as f32, SCREEN_H as f32);
		glTexCoord2f(0.0, 1.0);
		glVertex2f(0.0, SCREEN_H as f32);
		glEnd();
		glDisable(GL_TEXTURE_2D);
		// SAFETY: the window has the GL context.
		unsafe { SDL_GL_SwapWindow(s.window) };
		web_yield(s);
	});
}

/// A 3D frame (the race): clears the window and sets the viewport to the 4:3 picture area
/// (letterboxed); returns its size in pixels. None without OpenGL.
pub fn sys_gl_begin_frame() -> Option<(i32, i32)> {
	with(|s| {
		if s.headless || s.gl_context.is_null() {
			return None;
		}
		let (ww, wh) = drawable_size(s);
		glViewport(0, 0, ww, wh);
		glDisable(GL_SCISSOR_TEST);
		glClearColor(0.0, 0.0, 0.0, 1.0);
		glDepthMask(GL_TRUE);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		let r = fit_4_3(ww, wh);
		glViewport(r.x, r.y, r.w, r.h);
		glScissor(r.x, r.y, r.w, r.h);
		glEnable(GL_SCISSOR_TEST);
		Some((r.w, r.h))
	})
}

/// Shows the frame (saving it first when the script asked for a "glshot").
pub fn sys_gl_end_frame() {
	with(|s| {
		if s.headless || s.gl_context.is_null() {
			return;
		}
		glDisable(GL_SCISSOR_TEST);
		if !s.glshot_path.is_empty() {
			let (ww, wh) = drawable_size(s);
			let r = fit_4_3(ww, wh);
			let (w, h) = (r.w as usize, r.h as usize);
			let mut px = vec![0u32; w * h];
			let mut flipped = vec![0u32; w * h];
			glPixelStorei(GL_PACK_ALIGNMENT, 4);
			glReadPixels(r.x, r.y, r.w, r.h, GL_RGBA, GL_UNSIGNED_BYTE, px.as_mut_ptr() as *mut c_void);
			for y in 0..h {
				flipped[y * w..(y + 1) * w].copy_from_slice(&px[(h - 1 - y) * w..(h - y) * w]);
			}
			for p in &mut flipped {
				*p |= u32::from_ne_bytes([0, 0, 0, 0xff]); // opaque: RGBA bytes, A last
			}
			png_write_rgba(&s.glshot_path, &flipped, r.w, r.h);
			s.glshot_path.clear();
		}
		// SAFETY: the window has the GL context.
		unsafe { SDL_GL_SwapWindow(s.window) };
		web_yield(s);
	});
}

fn map_key(k: SDL_Keycode) -> i32 {
	use SDL_KeyCode::*;
	match k {
		k if k == SDLK_ESCAPE as i32 => KEY_ESCAPE,
		k if k == SDLK_RETURN as i32 || k == SDLK_KP_ENTER as i32 => KEY_ENTER,
		k if k == SDLK_UP as i32 => KEY_UP,
		k if k == SDLK_DOWN as i32 => KEY_DOWN,
		k if k == SDLK_LEFT as i32 => KEY_LEFT,
		k if k == SDLK_RIGHT as i32 => KEY_RIGHT,
		k if k > 0 && k < 128 => k,
		_ => KEY_NONE,
	}
}

/// Gathers input since the last call.
pub fn sys_poll(input: &mut SysInput) {
	input.mouse_clicked = false;
	input.mouse_pressed = false;
	input.key = KEY_NONE;
	input.text.clear();
	input.backspaces = 0;
	if with(|s| s.headless) {
		return;
	}
	while let Some((f, path)) = with(run_script) {
		f(&path);
	}
	with(|s| {
		let mut e = zeroed_event();
		// SAFETY: reading the union member that matches the event's type.
		unsafe {
			while SDL_PollEvent(&mut e) != 0 {
				let t = e.type_;
				if t == SDL_EventType::SDL_QUIT as u32 {
					s.quit_requested = true;
				} else if t == SDL_EventType::SDL_MOUSEMOTION as u32 {
					let (mut x, mut y) = (e.motion.x, e.motion.y);
					map_mouse(s, &mut x, &mut y);
					s.mouse_x = x;
					s.mouse_y = y;
				} else if t == SDL_EventType::SDL_MOUSEBUTTONDOWN as u32 || t == SDL_EventType::SDL_MOUSEBUTTONUP as u32
				{
					if e.button.button as u32 == SDL_BUTTON_LEFT {
						let (mut x, mut y) = (e.button.x, e.button.y);
						// Scripted clicks come in screen coordinates already.
						if e.button.which != SDL_TOUCH_MOUSEID {
							map_mouse(s, &mut x, &mut y);
						}
						s.mouse_x = x;
						s.mouse_y = y;
						s.mouse_down = t == SDL_EventType::SDL_MOUSEBUTTONDOWN as u32;
						if s.mouse_down {
							input.mouse_pressed = true;
						} else {
							input.mouse_clicked = true;
						}
					}
				} else if t == SDL_EventType::SDL_KEYDOWN as u32 {
					input.key = map_key(e.key.keysym.sym);
					if e.key.keysym.sym == SDL_KeyCode::SDLK_BACKSPACE as i32 {
						input.backspaces += 1;
					}
				} else if t == SDL_EventType::SDL_TEXTINPUT as u32 {
					// UTF-8 to Windows-1252 (Latin-1 range), as the game's text is.
					let text = CStr::from_ptr(e.text.text.as_ptr()).to_bytes();
					let mut i = 0;
					while i < text.len() {
						let c = text[i];
						if c < 0x80 {
							input.text.push(c as char);
						} else if c & 0xE0 == 0xC0 && i + 1 < text.len() {
							input.text.push(char::from((((c & 0x1F) as u32) << 6 | (text[i + 1] & 0x3F) as u32) as u8));
							i += 1;
						}
						i += 1;
					}
				}
			}
		}
		input.mouse_x = s.mouse_x;
		input.mouse_y = s.mouse_y;
		input.mouse_down = s.mouse_down;
		input.quit = s.quit_requested;
	});
}

/// Windows virtual-key codes to SDL scancodes, for the keys the game asks about.
fn vk_to_scancode(vk: i32) -> u32 {
	use SDL_Scancode::*;
	let sc = |c: SDL_Scancode| c as u32;
	match vk {
		0x41..=0x5a => sc(SDL_SCANCODE_A) + (vk - 0x41) as u32,
		0x31..=0x39 => sc(SDL_SCANCODE_1) + (vk - 0x31) as u32,
		0x70..=0x7b => sc(SDL_SCANCODE_F1) + (vk - 0x70) as u32,
		0x61..=0x69 => sc(SDL_SCANCODE_KP_1) + (vk - 0x61) as u32,
		0x30 => sc(SDL_SCANCODE_0),
		0x60 => sc(SDL_SCANCODE_KP_0),
		0x08 => sc(SDL_SCANCODE_BACKSPACE),
		0x09 => sc(SDL_SCANCODE_TAB),
		0x0d => sc(SDL_SCANCODE_RETURN),
		0x10 => sc(SDL_SCANCODE_LSHIFT),
		0x11 => sc(SDL_SCANCODE_LCTRL),
		0x12 => sc(SDL_SCANCODE_LALT),
		0x1b => sc(SDL_SCANCODE_ESCAPE),
		0x20 => sc(SDL_SCANCODE_SPACE),
		0x25 => sc(SDL_SCANCODE_LEFT),
		0x26 => sc(SDL_SCANCODE_UP),
		0x27 => sc(SDL_SCANCODE_RIGHT),
		0x28 => sc(SDL_SCANCODE_DOWN),
		_ => SCANCODE_UNKNOWN,
	}
}

pub fn sys_pad() -> SysPad {
	with(|s| {
		let mut p = SysPad::default();
		// SAFETY: SDL joystick calls on the handles this module opened and checks.
		unsafe {
			if s.headless || SDL_WasInit(SDL_INIT_JOYSTICK) == 0 {
				return p;
			}
			let attached = SDL_bool::SDL_TRUE;
			if (!s.pad.is_null() && SDL_GameControllerGetAttached(s.pad) != attached)
				|| (!s.stick.is_null() && SDL_JoystickGetAttached(s.stick) != attached)
			{
				if !s.pad.is_null() {
					SDL_GameControllerClose(s.pad);
				}
				if !s.stick.is_null() {
					SDL_JoystickClose(s.stick);
				}
				s.pad = ptr::null_mut();
				s.stick = ptr::null_mut();
			}
			if s.pad.is_null() && s.stick.is_null() {
				let mut i = 0;
				while i < SDL_NumJoysticks() && s.pad.is_null() && s.stick.is_null() {
					if SDL_IsGameController(i) == attached {
						s.pad = SDL_GameControllerOpen(i);
					} else {
						s.stick = SDL_JoystickOpen(i);
					}
					i += 1;
				}
			}
			let axis = |v: i16| (v as f32 / 32767.0).clamp(-1.0, 1.0);
			use SDL_GameControllerAxis::*;
			use SDL_GameControllerButton::*;
			if !s.pad.is_null() {
				let pad = s.pad;
				let button = |b: SDL_GameControllerButton| SDL_GameControllerGetButton(pad, b) != 0;
				p.present = true;
				p.steer = axis(SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_LEFTX));
				p.throttle = axis(SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_TRIGGERRIGHT));
				p.brake = axis(SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_TRIGGERLEFT));
				// Or the face buttons for the pedals.
				if button(SDL_CONTROLLER_BUTTON_A) {
					p.throttle = 1.0;
				}
				if button(SDL_CONTROLLER_BUTTON_X) {
					p.brake = 1.0;
				}
				p.button[0] = button(SDL_CONTROLLER_BUTTON_RIGHTSHOULDER) || button(SDL_CONTROLLER_BUTTON_Y);
				p.button[1] = button(SDL_CONTROLLER_BUTTON_B) || button(SDL_CONTROLLER_BUTTON_LEFTSHOULDER);
				p.button[2] = button(SDL_CONTROLLER_BUTTON_LEFTSTICK);
			} else if !s.stick.is_null() {
				// A joystick or wheel: x steers, y forward accelerates and back brakes (a wheel's
				// pedals often come as the next two axes).
				p.present = true;
				let axes = SDL_JoystickNumAxes(s.stick);
				p.steer = if axes > 0 { axis(SDL_JoystickGetAxis(s.stick, 0)) } else { 0.0 };
				let y = if axes > 1 { axis(SDL_JoystickGetAxis(s.stick, 1)) } else { 0.0 };
				p.throttle = (-y).max(0.0);
				p.brake = y.max(0.0);
				for b in 0..3 {
					p.button[b] =
						SDL_JoystickNumButtons(s.stick) > b as i32 && SDL_JoystickGetButton(s.stick, b as i32) != 0;
				}
			}
		}
		p
	})
}

/// Whether a key (Windows virtual-key code, as the game stores them) is held now.
pub fn keyispressed(vk: i32) -> bool {
	with(|s| {
		if s.headless {
			return false;
		}
		// SAFETY: SDL's keyboard state array has SDL_NUM_SCANCODES entries and lives as long
		// as SDL does.
		unsafe {
			SDL_PumpEvents();
			let mut n = 0;
			let state = SDL_GetKeyboardState(&mut n);
			let held = |sc: SDL_Scancode| *state.add(sc as usize) != 0;
			let sc = vk_to_scancode(vk);
			if sc == SCANCODE_UNKNOWN {
				return false;
			}
			if sc == s.fake_key && SDL_GetTicks() < s.fake_key_until {
				return true;
			}
			for i in 0..4 {
				if sc == s.held_key[i] && SDL_GetTicks() < s.held_until[i] {
					return true;
				}
			}
			use SDL_Scancode::*;
			match vk {
				0x10 => held(SDL_SCANCODE_LSHIFT) || held(SDL_SCANCODE_RSHIFT),
				0x11 => held(SDL_SCANCODE_LCTRL) || held(SDL_SCANCODE_RCTRL),
				0x12 => held(SDL_SCANCODE_LALT) || held(SDL_SCANCODE_RALT),
				0x0d => held(SDL_SCANCODE_RETURN) || held(SDL_SCANCODE_KP_ENTER),
				_ => (sc as i32) < n && *state.add(sc as usize) != 0,
			}
		}
	})
}

/// The window was closed (or the process asked to stop); stays true from then on.
pub fn sys_quit_requested() -> bool {
	with(|s| s.quit_requested)
}

/// Opens a web address in the system's browser.
pub fn sys_open_url(url: &str) -> bool {
	let c = CString::new(url).unwrap_or_default();
	// SAFETY: a NUL-terminated string.
	unsafe { SDL_OpenURL(c.as_ptr()) == 0 }
}

/// Whether a test script drives the input.
pub fn sys_scripted() -> bool {
	with(|s| !s.script_lines.is_empty())
}

/// Typed characters arrive in SysInput::text while text input is on.
pub fn sys_text_input(on: bool) {
	if with(|s| s.headless) {
		return;
	}
	// SAFETY: plain SDL calls.
	unsafe {
		if on {
			SDL_StartTextInput();
		} else {
			SDL_StopTextInput();
		}
	}
}

pub fn sys_ticks() -> u32 {
	ticks()
}

pub fn sys_sleep(ms: u32) {
	// SAFETY: plain SDL / Emscripten calls.
	#[cfg(target_os = "emscripten")]
	unsafe {
		emscripten_sleep(ms)
	};
	#[cfg(not(target_os = "emscripten"))]
	unsafe {
		SDL_Delay(ms)
	};
}
