//! The race (spel.dat): a stage, the player's car and the field, traffic and police.

use std::cell::Cell;
use std::collections::BTreeMap;
use std::io::Write;
use std::rc::Rc;

use crate::audio::race_sound::RaceSound;
use crate::engine::collision::CollisionWorld;
use crate::engine::mesh::Mesh;
use crate::engine::overlay::Overlay;
use crate::engine::render::{Renderer, gl_look_at, gl_mult_world, gl_perspective, gl_rotate};
use crate::engine::texture::TextureManager;
use crate::game::ai_driver::{AiDriver, AiObstacle, skill_factor};
use crate::game::car::{Car, CarInput, CarSpec};
use crate::game::language::*;
use crate::game::loose_objects::LooseObjects;
use crate::game::paths::{Path, load_paths};
use crate::game::police::{CopAction, CopPlan, PoliceRules};
use crate::game::race_rules::RaceRules;
use crate::game::track::{AnimFrame, MeshCache, Track};
use crate::platform::gl::*;
use crate::platform::sys::*;
use crate::race::communicator::Communicator;
use crate::race::effects::Effects;
use crate::res::archive::{NamedArchive, equal_ci, find_file_ci};
use crate::xvga::inifile::{IniFile, atof, atoi, split_fields};

#[derive(Clone, Debug)]
pub struct RaceOptions {
	pub stage: i32,
	pub league: i32,
	/// entry in CAR_CFG.INI [league<n>]
	pub car: i32,
	/// the garage's upgrades (0 or 1)
	pub motor: i32,
	pub gearbox: i32,
	pub tyres: i32,
	pub abs: i32,
	/// 0 easy, 1 normal, 2 hard; -1: game.ini [OPTIONS] Difficulty
	pub difficulty: i32,
	/// 0: game.ini [OPTIONS] Nrlaps
	pub laps: i32,
	/// A chase's clock (Gm_ini.cpp: timer 11): game.ini [PLAYER] checkpoint_value times
	/// CHECKPOINT_SPEED ms (the menu's static.ini [CHECKPOINTTIME] for the difficulty), and
	/// as much again at each TIME_CHECK on the road. 0: no clock.
	pub checkpoint_speed: i32,
	/// The player's settings (the menu writes them to game.ini and Raser.ini in the
	/// original): keys up, down, left, right as virtual-key codes (0: game.ini's), and
	/// the music and effects volumes 0..1 (negative: Raser.ini's).
	/// ... and the turbo (EXTRA1), handbrake (EXTRA2), horn (EXTRA3)
	pub keys: [i32; 7],
	/// The controller (the menu's CONTROLTYPE: 0 keyboard, 1 joystick, 2 joypad, 3 wheel)
	/// and its sensitivity (0..100; -1: game.ini [INPUT] SENSITIVITY).
	pub device: i32,
	pub sensitivity: i32,
	/// The track's lap record (s; 0: none), for the race's NIEUW RONDE RECORD.
	pub record_lap: f32,
	pub music_volume: f32,
	pub sfx_volume: f32,
	/// game.ini [PLAYER] MONEY and TURBO_AMOUNT (0..100): what the player brings.
	pub money: i32,
	/// seconds; a chase must be finished in time (0: none)
	pub turbo: f32,
	/// Testing: drive by itself along the drive map (also with A2_AUTOPILOT=1).
	pub autopilot: bool,
}

impl Default for RaceOptions {
	fn default() -> Self {
		RaceOptions {
			stage: 0,
			league: 0,
			car: 0,
			motor: 0,
			gearbox: 0,
			tyres: 0,
			abs: 0,
			difficulty: -1,
			laps: 0,
			checkpoint_speed: 0,
			keys: [0; 7],
			device: 0,
			sensitivity: -1,
			record_lap: 0.0,
			music_volume: -1.0,
			sfx_volume: -1.0,
			money: 0,
			turbo: 0.0,
			autopilot: false,
		}
	}
}

#[derive(Clone, Debug, Default)]
pub struct RaceResultEntry {
	/// CAR_CFG.INI racer, also the character's number
	pub car: i32,
	/// seconds
	pub time: f32,
	pub player: bool,
}

/// How the race went, for the menu: the field in finishing order. Racers still on the road
/// when the player finished get a time from their pace so far.
#[derive(Clone, Debug, Default)]
pub struct RaceResult {
	pub finished: bool,
	pub arrested: bool,
	pub time_up: bool,
	pub total_loss: bool,
	pub quit: bool,
	pub order: Vec<RaceResultEntry>,
	pub lap_times: Vec<f32>,
	/// the player's, 1..
	pub position: i32,
	/// after pick-ups and fines
	pub money: i32,
	/// what is left in the tank
	pub turbo: f32,
}

const PI: f32 = 3.14159265;
// The physics runs at a fixed rate, whatever the frame rate.
const STEP: f32 = 0.01;

fn lower(s: &str) -> String {
	s.chars().map(|c| c.to_ascii_lowercase()).collect()
}

/// printf with one int argument, for the language file's formats (e.g. "POSITIE: %d").
fn format_int(fmt: &str, v: i32) -> String {
	let c: Vec<char> = fmt.chars().collect();
	let mut out = String::new();
	let mut used = false;
	let mut i = 0;
	while i < c.len() {
		if c[i] != '%' {
			out.push(c[i]);
			i += 1;
			continue;
		}
		let mut j = i + 1;
		if j < c.len() && c[j] == '%' {
			out.push('%');
			i = j + 1;
			continue;
		}
		let zero = j < c.len() && c[j] == '0';
		if zero {
			j += 1;
		}
		let mut width = 0usize;
		while j < c.len() && c[j].is_ascii_digit() {
			width = width * 10 + c[j] as usize - '0' as usize;
			j += 1;
		}
		if j < c.len() && (c[j] == 'd' || c[j] == 'i') && !used {
			used = true;
			out.push_str(&if zero {
				format!("{:0width$}", v, width = width)
			} else {
				format!("{:width$}", v, width = width)
			});
			i = j + 1;
			continue;
		}
		out.push(c[i]);
		i += 1;
	}
	out
}

/// The keys from game.ini [INPUT] (Windows virtual-key codes).
struct Keys {
	left: i32,
	right: i32,
	up: i32,
	down: i32,
	turbo: i32,
	handbrake: i32,
	horn: i32,
	sensitivity: i32,
}

impl Default for Keys {
	fn default() -> Self {
		Keys { left: 37, right: 39, up: 38, down: 40, turbo: 17, handbrake: 18, horn: 72, sensitivity: 50 }
	}
}

impl Keys {
	fn load(&mut self, dir: &str) {
		let mut ini = IniFile::default();
		let path = find_file_ci(dir, "game.ini");
		if path.is_empty() || !ini.load(&path) {
			return;
		}
		self.left = ini.get_int("INPUT", "LEFT", self.left);
		self.right = ini.get_int("INPUT", "RIGHT", self.right);
		self.up = ini.get_int("INPUT", "UP", self.up);
		self.down = ini.get_int("INPUT", "DOWN", self.down);
		self.turbo = ini.get_int("INPUT", "EXTRA1", self.turbo);
		self.handbrake = ini.get_int("INPUT", "EXTRA2", self.handbrake);
		self.horn = ini.get_int("INPUT", "EXTRA3", self.horn);
		self.sensitivity = ini.get_int("INPUT", "SENSITIVITY", self.sensitivity);
	}
}

#[derive(Clone, Default)]
struct CarModel {
	body: Option<Rc<Mesh>>,
	wheel: Option<Rc<Mesh>>,
	windows: Option<Rc<Mesh>>,
	body_tex: u32,
	wheel_tex: u32,
	windows_tex: u32,
	/// All the animation's frames: 5 on are the damage phases' bodies.
	frames: Vec<(Option<Rc<Mesh>>, u32)>,
}

thread_local! {
	/// car_whl.cpp: the windows (the model's third frame) take the stage's [car_reflect]
	/// sky (FUN_004370f0), the view reflected in them each frame giving where on it
	/// (FUN_00437370: u, v = the reflection's x, z halved, + 0.5), blended by the mesh's
	/// alpha; without game.ini alpha_blending they aren't drawn.
	static CAR_REFLECT_TEX: Cell<u32> = const { Cell::new(0) };
	static CAR_WINDOWS_ON: Cell<bool> = const { Cell::new(true) };
	static KNOCK_RND: Cell<u32> = const { Cell::new(1) };
}

fn draw_windows(
	r: &Renderer,
	w: &Mesh,
	right: &[f32; 3],
	up: &[f32; 3],
	fwd: &[f32; 3],
	pos: &[f32; 3],
	tint: Option<&[f32; 4]>,
) {
	r.bind(CAR_REFLECT_TEX.get());
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glDepthMask(GL_FALSE);
	glBegin(GL_TRIANGLES);
	for &i in &w.indices {
		if i as usize >= w.vertices.len() {
			continue;
		}
		let v = &w.vertices[i as usize];
		let mut p = [0.0f32; 3];
		let mut n = [0.0f32; 3];
		let mut d = [0.0f32; 3];
		for k in 0..3 {
			p[k] = pos[k] + right[k] * v.x + up[k] * v.y + fwd[k] * v.z;
			n[k] = right[k] * v.nx + up[k] * v.ny + fwd[k] * v.nz;
			d[k] = p[k] - r.eye[k];
		}
		let dl = (d[0] * d[0] + d[1] * d[1] + d[2] * d[2]).sqrt();
		if dl > 0.0 {
			for x in d.iter_mut() {
				*x /= dl;
			}
		}
		let dn = 2.0 * (d[0] * n[0] + d[1] * n[1] + d[2] * n[2]);
		let c = v.colour.to_ne_bytes();
		if let Some(tint) = tint {
			glColor4f(tint[0], tint[1], tint[2], c[3] as f32 / 255.0);
		} else {
			glColor4ub(c[0], c[1], c[2], c[3]);
		}
		glTexCoord2f((d[0] - dn * n[0]) * 0.5 + 0.5, (d[2] - dn * n[2]) * 0.5 + 0.5);
		glVertex3f(v.x, v.y, v.z);
	}
	glEnd();
	glDepthMask(GL_TRUE);
	glDisable(GL_BLEND);
	glColor4f(1.0, 1.0, 1.0, 1.0);
}

/// tint: the car's light (0..1 each of R, G, B, and A), or None.
fn draw_car(r: &Renderer, car: &Car, m: &CarModel, windows: bool, phase: i32, tint: Option<&[f32; 4]>) {
	let (right, up, fwd) = car.axes();
	glPushMatrix();
	gl_mult_world(&right, &up, &fwd, &car.pos);
	// A damageable car shows its phase's frame (5, 6, ..) for its body.
	let pf = (5 + phase) as usize;
	if pf < m.frames.len() && m.frames[pf].0.is_some() {
		r.draw_mesh(m.frames[pf].0.as_ref().unwrap(), m.frames[pf].1, tint);
	} else if let Some(body) = &m.body {
		r.draw_mesh(body, m.body_tex, tint);
	}
	if let Some(win) = &m.windows
		&& windows
		&& CAR_WINDOWS_ON.get()
	{
		if CAR_REFLECT_TEX.get() != 0 {
			draw_windows(r, win, &right, &up, &fwd, &car.pos, tint);
		} else {
			r.draw_mesh(win, m.windows_tex, tint);
		}
	}
	if let Some(wheel) = &m.wheel {
		let wp: [&[f32; 3]; 2] = [&car.spec.wheel_front, &car.spec.wheel_rear];
		for axle in 0..2 {
			let mut side = -1;
			while side <= 1 {
				glPushMatrix();
				glTranslatef(side as f32 * wp[axle][0], wp[axle][1] + 3.5, wp[axle][2]);
				if axle == 0 {
					gl_rotate(car.steer * 180.0 / PI, 0.0, 1.0, 0.0);
				}
				if side < 0 {
					gl_rotate(180.0, 0.0, 1.0, 0.0);
				}
				gl_rotate((if side < 0 { -1.0 } else { 1.0 }) * car.wheel_spin * 180.0 / PI, 1.0, 0.0, 0.0);
				r.draw_mesh(wheel, m.wheel_tex, tint);
				glPopMatrix();
				side += 2;
			}
		}
	}
	glPopMatrix();
}

/// A race time as the game shows it (menu.ini [FORMAT] TIME=%d:%.2d:%.2d): minutes,
/// seconds, hundredths.
fn format_time(t: f32) -> String {
	let h = (t * 100.0 + 0.5) as i32;
	format!("{}:{:02}:{:02}", h / 6000, h / 100 % 60, h % 100)
}

/// Ovl_Portraits.cpp: the racers' faces down the left in race order (game.ini
/// [Portraits] names each car's), the player's outlined; once the player is in
/// (FUN_004940e0), the fastest one's time by each face, the others' "+" how much
/// slower, "--:--:-" for those still driving, the player's blinking.
struct Face {
	car: i32,
	player: bool,
	/// < 0: still racing
	finish: f32,
}

const GREEN: [f32; 4] = [118.0 / 255.0, 250.0 / 255.0, 0.0, 1.0];

struct Hud {
	overlay: Overlay,
	lang: Language,

	/// The race's information over the 3D picture, laid out by overlay<car>.ini.
	flash: f32,
	flashes: i32,
	time_limit: f32,
	/// 0..100
	turbo: f32,
	/// 0..1100
	damage: f32,
	/// frames of the radar's flash still to show
	white: i32,
	/// A pick-up's text (PrintText), for a few seconds.
	message: String,
	message_time: f32,
	/// the speaking racer's, 0..1100
	owner_damage: f32,
	money: i32,
	/// the police's warning, while it shows
	warning: String,
	/// After each lap, for a few seconds: RONDE INFO, its time, the record.
	lap_info_time: f32,
	lap_info_lap: f32,
	lap_info_record: f32,
	lap_info_new: bool,
	/// Ovl_Requestors.cpp: 1 paused (P), 2 asking whether to quit (Esc).
	requestor: i32,
	/// game.ini [GFX OPTIONS] overlay_detail, toggled with D (CM_KEYB_D); with it off only
	/// the requestors show.
	shown: bool,
	reset_prompt: bool,
	wrong_way: bool,
	faces: Vec<Face>,
	face_names: Vec<String>,
	/// where each car's face is now, sliding to its place
	face_y: BTreeMap<i32, f32>,

	blink: f32,

	frame_dt: f32,
	/// gfx_flag.cpp: after the finish, a chequered flag waving over the whole picture: a
	/// 17 x 11 grid a little in front of the camera, see-through (alpha 100), its folds
	/// lighter and darker (128..255), textured with s_sfx.pcx's 8 x 6 chequer (each square
	/// two cells of the grid, drawn here as such); game.ini [GFX OPTIONS] finish_flag.
	flag_on: bool,
	flag_clock: f32,
}

impl Default for Hud {
	fn default() -> Self {
		Hud {
			overlay: Overlay::default(),
			lang: Language::default(),
			flash: 0.0,
			flashes: 0,
			time_limit: 0.0,
			turbo: 0.0,
			damage: 0.0,
			white: 0,
			message: String::new(),
			message_time: 0.0,
			owner_damage: 0.0,
			money: 0,
			warning: String::new(),
			lap_info_time: 0.0,
			lap_info_lap: 0.0,
			lap_info_record: 0.0,
			lap_info_new: false,
			requestor: 0,
			shown: true,
			reset_prompt: false,
			wrong_way: false,
			faces: Vec::new(),
			face_names: Vec::new(),
			face_y: BTreeMap::new(),
			blink: 0.0,
			frame_dt: 0.0,
			flag_on: true,
			flag_clock: 0.0,
		}
	}
}

impl Hud {
	fn load(&mut self, dir: &str, car: i32, track: &Track, meshes: &mut MeshCache, textures: &TextureManager) {
		if !self.overlay.load(dir, car, track, meshes, textures) {
			eprintln!("race: no overlay{}.ini; no dashboard", car);
		}
		self.lang.load(dir);
	}

	fn draw_faces(&mut self, r: &Renderer, dt: f32, finished: bool) {
		if self.faces.is_empty() {
			return;
		}
		let Some((sx, sy0)) = self.overlay.origin("PLAYER_0") else { return };
		let Some((_, sy1)) = self.overlay.origin("PLAYER_1") else { return };
		self.blink += dt;
		let mut best = -1.0f32;
		for f in &self.faces {
			if f.finish >= 0.0 && (best < 0.0 || f.finish < best) {
				best = f.finish;
			}
		}
		for k in 0..self.faces.len() {
			let f = &self.faces[k];
			if f.car < 0 || f.car as usize >= self.face_names.len() {
				continue;
			}
			let el = &self.face_names[f.car as usize];
			let Some((ex, ey)) = self.overlay.origin(el) else { continue };
			let want = sy0 + (sy1 - sy0) * k as f32;
			let y = self.face_y.entry(f.car).or_insert(want);
			*y += (want - *y) * 1.0f32.min(dt * 6.0);
			let y = *y;
			glPushMatrix();
			glTranslatef(sx - ex, y - ey, 0.0);
			self.overlay.element(r, el, 0.0, 1.0, 1.0, 0);
			glPopMatrix();
			if f.player
				&& let Some((ox, oy)) = self.overlay.origin("OVL_PLAYER_OUTLINE")
			{
				glPushMatrix();
				glTranslatef(sx - ox, y - oy, 0.0);
				self.overlay.element(r, "OVL_PLAYER_OUTLINE", 0.0, 1.0, 1.0, 0);
				glPopMatrix();
			}
			if finished && !(f.player && self.blink % 0.6 >= 0.3) {
				let mut buf = "--:--:-".to_string();
				if f.finish >= 0.0 {
					let ds = ((if f.finish > best { f.finish - best } else { f.finish }) * 10.0) as i32;
					buf = format!(
						"{}{:02}:{:02}:{}",
						if f.finish > best { "+" } else { "" },
						ds / 600,
						ds / 10 % 60,
						ds % 10
					);
				}
				self.overlay.text(sx + 32.0, y - 9.0, &buf, 0.7, &GREEN, false, false);
			}
		}
	}

	/// The communicator (Ovl_Communicator.cpp): sliding up from below the screen for a
	/// message, the speaker's portrait, the text, their car's health, the cop alert lamp.
	fn draw_communicator(&self, r: &Renderer, comm: Option<&Communicator>) {
		let Some(comm) = comm else { return };
		if comm.slide >= 1.0 {
			return;
		}
		let o = &self.overlay;
		glPushMatrix();
		glTranslatef(0.0, comm.slide * 160.0, 0.0);
		o.element(r, "OVL_COMMUNICATOR_GLAS1", 0.0, 1.0, 1.0, 0);
		if !comm.photo.is_empty() {
			o.element(r, &comm.photo, 0.0, 1.0, 1.0, 0);
		}
		o.element(r, "OVL_COMMUNICATOR_GLAS2", 0.0, 1.0, 1.0, 0);
		o.element(r, "OVL_COMMUNICATOR_BODY", 0.0, 1.0, 1.0, 0);
		if comm.owner >= 0 {
			o.element(r, "OVL_COMMUNICATOR_HLTH_BK", 0.0, 1.0, 1.0, 0);
			o.element(r, "OVL_COMMUNICATOR_HLTH", 0.0, 1.0, (self.owner_damage / 1100.0).clamp(0.0, 1.0), 0);
		}
		if comm.alert_lit {
			o.element(r, "OVL_COMMUNICATOR_RED_LED", 0.0, 1.0, 1.0, 0);
			o.element(r, "OVL_COMMUNICATOR_RED_GLOW", 0.0, 1.0, 1.0, 0);
		} else {
			o.element(r, "OVL_COMMUNICATOR_RED_LUD", 0.0, 1.0, 1.0, 0);
		}
		for i in 0..4usize {
			o.string(&format!("STRING_{}_COMMUNICATOR", i), if i < comm.lines.len() { &comm.lines[i] } else { " " });
		}
		glPopMatrix();
	}

	fn draw_flag(&mut self, rules: &RaceRules) {
		if !self.flag_on || rules.phase != RaceRules::FINISHED || rules.finished_at > 3.0 {
			return;
		}
		self.flag_clock += self.frame_dt;
		let flag_clock = self.flag_clock;
		glDisable(GL_TEXTURE_2D);
		glDisable(GL_ALPHA_TEST);
		glEnable(GL_BLEND);
		glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
		let at = |col: i32, row: i32| -> ([f32; 2], i32) {
			let x = col as f32 * 0.625 - 5.0;
			let y = row as f32 * 0.75 - 3.75;
			let wave = (flag_clock * 5.0 + col as f32 * 0.7 + row as f32 * 0.35).sin();
			let z = 5.0 + wave * 0.6;
			let shade = (256 - (wave * 96.0 + 64.0) as i32).clamp(128, 255);
			// As seen at 60 degrees: 2.89 high and 3.85 wide fill the picture at 5.
			([320.0 + x * 5.0 / z / 3.85 * 320.0, 240.0 - y * 5.0 / z / 2.89 * 240.0], shade)
		};
		glBegin(GL_QUADS);
		for row in 0..10 {
			for col in 0..16 {
				let white = ((col / 2) + (row / 2)) % 2 == 0;
				let corner = [[col, row], [col + 1, row], [col + 1, row + 1], [col, row + 1]];
				for c in &corner {
					let (p, shade) = at(c[0], c[1]);
					let v = (if white { shade } else { shade / 6 }) as u8;
					glColor4ub(v, v, v, 100);
					glVertex2f(p[0], p[1]);
				}
			}
		}
		glEnd();
		glColor4f(1.0, 1.0, 1.0, 1.0);
		glDisable(GL_BLEND);
		glEnable(GL_TEXTURE_2D);
	}

	fn draw_requestor(&self, r: &Renderer) {
		if self.requestor == 0 {
			return;
		}
		self.overlay.element(r, "OVL_REQUESTOR_BODY", 0.0, 1.0, 1.0, 0);
		let quit = self.requestor == 2;
		self.overlay.string(
			if quit { "STRING_QUIT_HEADER" } else { "STRING_PAUZE_HEADER" },
			&self.lang.get(if quit { TXT_QUIT_HEADER } else { TXT_PAUSE_HEADER }, if quit { "EINDE" } else { "PAUZE" }),
		);
		if let Some((x, y)) = self.overlay.origin(if quit { "STRING_QUIT_TEXT" } else { "STRING_PAUZE_TEXT" }) {
			self.overlay.text(
				x,
				y,
				&self.lang.get(if quit { TXT_QUIT_1 } else { TXT_PAUSE_1 }, ""),
				0.7,
				&GREEN,
				true,
				false,
			);
			self.overlay.text(
				x,
				y + 18.0,
				&self.lang.get(if quit { TXT_QUIT_2 } else { TXT_PAUSE_2 }, ""),
				0.7,
				&GREEN,
				true,
				false,
			);
		}
	}

	fn draw(
		&mut self,
		r: &Renderer,
		rules: &RaceRules,
		car: &Car,
		position: i32,
		racers: i32,
		comm: Option<&Communicator>,
	) {
		self.overlay.begin();
		if !self.shown {
			self.draw_requestor(r);
			return;
		}
		self.draw_flag(rules);
		self.draw_faces(r, self.frame_dt, rules.phase == RaceRules::FINISHED);
		self.draw_communicator(r, comm);
		let o = &self.overlay;
		let lang = &self.lang;
		if let Some(comm) = comm
			&& comm.arrow != 0
		{
			const ARROWS: [&str; 4] =
				["OVL_DIRECTION_GOLEFT", "OVL_DIRECTION_GORIGHT", "OVL_DIRECTION_GOBOTH", "OVL_DIRECTION_GOZIGZAG"];
			o.element(r, ARROWS[(comm.arrow - 2).clamp(0, 3) as usize], 0.0, 1.0, 1.0, 0);
		}
		// FLITS: the screen white for a frame or two (palette 235,235,235).
		if self.white > 0 {
			glDisable(GL_TEXTURE_2D);
			glColor4f(0.92, 0.92, 0.92, 1.0);
			glBegin(GL_TRIANGLE_STRIP);
			glVertex2f(0.0, 0.0);
			glVertex2f(640.0, 0.0);
			glVertex2f(0.0, 480.0);
			glVertex2f(640.0, 480.0);
			glEnd();
			glColor4f(1.0, 1.0, 1.0, 1.0);
			glEnable(GL_TEXTURE_2D);
			self.white -= 1;
		}
		// The speedometer: 160 degrees for 0..200 km/h.
		o.element(r, "OVL_SPEEDOMETER_BODY", 0.0, 1.0, 1.0, 0);
		o.element(r, "OVL_SPEEDOMETER_STRIPES", 0.0, 1.0, 1.0, 0);
		o.element(r, "OVL_SPEEDOMETER_DIAL", car.speed_kmh().min(200.0) / 200.0 * 160.0, 1.0, 1.0, 0);
		o.element(r, "OVL_SPEEDOMETER_DOP", 0.0, 1.0, 1.0, 0);
		// The damage bar fills across (Ovl_Communicator: x scale damage / 1100).
		o.element(r, "OVL_SPEEDOMETER_HLTH_BK", 0.0, 1.0, 1.0, 0);
		o.element(r, "OVL_SPEEDOMETER_HLTH", 0.0, 1.0, (self.damage / 1100.0).clamp(0.0, 1.0), 0);
		// The turbo gauge: 180 degrees for a full tank.
		o.element(r, "OVL_SPEEDOMETER_TURBODIAL", self.turbo / 100.0 * 180.0, 1.0, 1.0, 0);
		o.element(r, "OVL_SPEEDOMETER_TURBODOP", 0.0, 1.0, 1.0, 0);
		// The lamps: red from 80% damage, green with the turbo nearly gone (0x489c10).
		let red = self.damage >= 0.8 * 1100.0;
		let green = self.turbo <= 20.0;
		o.element(r, if red { "OVL_SPEEDOMETER_RED_LED" } else { "OVL_SPEEDOMETER_RED_LUD" }, 0.0, 1.0, 1.0, 0);
		if red {
			o.element(r, "OVL_SPEEDOMETER_RED_GLOW", 0.0, 1.0, 1.0, 0);
		}
		o.element(r, if green { "OVL_SPEEDOMETER_GRN_LED" } else { "OVL_SPEEDOMETER_GRN_LUD" }, 0.0, 1.0, 1.0, 0);
		if green {
			o.element(r, "OVL_SPEEDOMETER_GRN_GLOW", 0.0, 1.0, 1.0, 0);
		}
		o.element(r, "OVL_SPEEDOMETER_GLAS", 0.0, 1.0, 1.0, 0);
		o.string("STRING_RACE_TIME_VALUE", &format_time(rules.time));
		if self.time_limit > 0.0 && rules.phase == RaceRules::RACING {
			o.string("STRING_COUNTDOWN_TIMER", &format_time(0.0f32.max(self.time_limit - rules.time)));
		}
		if rules.circuit {
			let buf = format!("{} {}/{}", lang.get(TXT_LAP, "RONDE"), rules.lap.min(rules.laps), rules.laps);
			o.string("STRING_CUR_LAP", &buf);
		}
		let buf = format!("{} {}/{}", lang.get(TXT_POS, "POSITIE"), position, racers);
		o.string("STRING_CUR_POS", &buf);
		let buf = format!("{:06}", self.money.clamp(0, 999999));
		o.string("STRING_EURO_SIGN", "");
		o.string("STRING_EURO_MONEY", &buf);
		if self.wrong_way && rules.phase == RaceRules::RACING {
			o.element(r, "OVL_TURNAROUND_FRAME", 0.0, 1.0, 1.0, 0);
		}
		self.draw_requestor(r);
		let o = &self.overlay;
		let lang = &self.lang;
		// 3, 2, 1, go: each digit grows in during its second.
		if rules.phase == RaceRules::COUNTDOWN {
			let n = (rules.countdown as i32 + 1).clamp(1, 3);
			let f = rules.countdown - (n - 1) as f32;
			o.element(r, &format!("OVL_START_DIGIT_{}", n), 0.0, 1.5 + (1.0 - f) * 0.5, 1.0, 0);
		} else if rules.phase == RaceRules::RACING && rules.time < 1.0 {
			o.element(r, "OVL_START_GO", 0.0, 1.5 + rules.time, 1.0, 0);
		} else if rules.phase == RaceRules::RACING
			&& rules.circuit
			&& rules.lap == rules.laps
			&& rules.laps > 1
			&& rules.time - rules.lap_start < 3.0
		{
			o.string("STRING_GAME_TEXT", &lang.get(TXT_LAST_LAP, "LAATSTE RONDE"));
		} else if rules.phase == RaceRules::TIME_UP {
			o.string("STRING_TIME_UP", "");
			o.string("STRING_FINISH_TEXT", "");
		} else if rules.phase == RaceRules::TOTAL_LOSS {
			o.string("STRING_TOTAL_LOSS", &lang.get(TXT_TOTAL_LOSS, "TOTAL LOSS"));
			o.string("STRING_FINISH_TEXT", "");
		} else if rules.phase == RaceRules::ARRESTED {
			o.string("STRING_ARRESTED", &lang.get(TXT_ARRESTED, "GEARRESTEERD"));
			o.string("STRING_FINISH_TEXT", "");
		} else if !self.warning.is_empty() {
			o.string("STRING_GAME_TEXT", &self.warning);
		} else if self.lap_info_time > 0.0 && rules.phase == RaceRules::RACING {
			o.string(
				"STRING_GAME_TEXT",
				&lang.get(
					if self.lap_info_new { TXT_NEW_LAP_RECORD } else { TXT_LAP_INFO },
					if self.lap_info_new { "NIEUW RONDE RECORD" } else { "RONDE INFO" },
				),
			);
			o.text(
				320.0,
				175.0,
				&(lang.get(TXT_TIME, "TIJD") + " " + &format_time(self.lap_info_lap)),
				0.8,
				&GREEN,
				true,
				false,
			);
			if self.lap_info_record > 0.0 {
				o.text(
					320.0,
					197.0,
					&(lang.get(TXT_RECORD, "RECORD") + " " + &format_time(self.lap_info_record)),
					0.8,
					&GREEN,
					true,
					false,
				);
			}
		} else if self.flash > 0.0 {
			o.string("STRING_GAME_TEXT", &lang.get(TXT_FLASH_FINE, "FLITS BOETE  -50 EURO"));
		} else if self.reset_prompt && rules.phase == RaceRules::RACING {
			o.string("STRING_GAME_TEXT", &lang.get(TXT_RESET, "DRUK ENTER/RETURN VOOR RESET"));
		} else if self.message_time > 0.0 && rules.phase == RaceRules::RACING {
			o.string("STRING_GAME_TEXT", &self.message);
		} else if rules.phase == RaceRules::FINISHED {
			o.string("STRING_GAME_TEXT", &lang.get(TXT_FINISHED, "GEFINISHT"));
			let pos = lang.get(TXT_POSITION, "POSITIE: %d");
			o.string("STRING_RACE_OVER", &format_int(&pos, position));
			let rt = lang.get(TXT_RACE_TIME, "RACE TIJD") + " " + &format_time(rules.time);
			o.text(320.0, 175.0, &rt, 1.0, &GREEN, true, false);
			let mut i = 0;
			while i < rules.lap_times.len() && rules.circuit {
				let buf = format!("{} {}  {}", lang.get(TXT_LAP, "RONDE"), i + 1, format_time(rules.lap_times[i]));
				o.text(320.0, 205.0 + 22.0 * i as f32, &buf, 0.8, &GREEN, true, false);
				i += 1;
			}
			o.string("STRING_FINISH_TEXT", "");
		}
	}
}

/// Damage (car_dmg.cpp, damage.ini): each knock past a car's threshold costs 25..45
/// points of 1100, by the impulse (impact speed in game units/s times a mass: the other
/// car's, or half its own against a wall). It only shows: the windows go, then the
/// lights; 1099 is a total loss. Damage changes nothing in how the car drives.
#[derive(Clone)]
struct DamageModel {
	/// computer cars
	min_imp: f32,
	max_imp: f32,
	/// the player's
	min_player: f32,
	max_player: f32,
	/// [Damageable Cars]
	window: i32,
	lights: i32,
	/// [Damage Models] last field
	smoke_front: bool,
	/// ... its phase meshes: frames 5, 6, ..
	phases: Vec<String>,
}

impl Default for DamageModel {
	fn default() -> Self {
		DamageModel {
			min_imp: 70000.0,
			max_imp: 90000.0,
			min_player: 50000.0,
			max_player: 90000.0,
			window: 1101,
			lights: 1101,
			smoke_front: true,
			phases: Vec::new(),
		}
	}
}

/// [Damageable Car Objects]: the pieces drawn on a car (over its body) in one phase:
/// attached at pos (its own pivot, y 1 lower), past `damaged` bent to pos2 turned by rot
/// (degrees), and past `detached` (4 s on at least) off: gone, or lying on the road.
#[derive(Clone)]
struct DamagePart {
	anim: String,
	pos: [f32; 3],
	pos2: [f32; 3],
	rot: [f32; 3],
	damaged: i32,
	detached: i32,
	remove: bool,
}

impl Default for DamagePart {
	fn default() -> Self {
		DamagePart {
			anim: String::new(),
			pos: [0.0; 3],
			pos2: [0.0; 3],
			rot: [0.0; 3],
			damaged: 1101,
			detached: 1101,
			remove: false,
		}
	}
}

struct DamageTable {
	min_points: i32,
	max_points: i32,
	models: BTreeMap<String, DamageModel>,
	/// by phase mesh name
	parts: BTreeMap<String, Vec<DamagePart>>,
}

impl Default for DamageTable {
	fn default() -> Self {
		DamageTable { min_points: 25, max_points: 45, models: BTreeMap::new(), parts: BTreeMap::new() }
	}
}

impl DamageTable {
	fn load(&mut self, dir: &str) {
		let mut ini = IniFile::default();
		let p = find_file_ci(dir, "damage.ini");
		if p.is_empty() || !ini.load(&p) {
			return;
		}
		self.min_points = ini.get_int("Damage Limits", "min", self.min_points);
		self.max_points = ini.get_int("Damage Limits", "max", self.max_points);
		let mut cars: BTreeMap<String, Vec<String>> = BTreeMap::new();
		for i in 0..ini.get_int("Damageable Cars", "count", 0) {
			let f = split_fields(&ini.get("Damageable Cars", &i.to_string()), ',');
			if f.len() >= 3 {
				cars.insert(lower(&f[0]), f);
			}
		}
		for k in ini.keys("Damageable Car Objects") {
			let f = split_fields(&ini.get("Damageable Car Objects", &k), ',');
			if f.len() < 14 || !k.chars().next().is_some_and(|c| c.is_ascii_digit()) {
				continue;
			}
			let mut part = DamagePart { anim: f[1].clone(), ..Default::default() };
			for a in 0..3 {
				part.pos[a] = atof(&f[2 + a]) as f32;
				part.pos2[a] = atof(&f[5 + a]) as f32;
				part.rot[a] = atof(&f[8 + a]) as f32;
			}
			part.damaged = atoi(&f[11]);
			part.detached = atoi(&f[12]);
			part.remove = atoi(&f[13]) != 0;
			self.parts.entry(lower(&f[0])).or_default().push(part);
		}
		for i in 0..ini.get_int("Damage Models", "count", 0) {
			let f = split_fields(&ini.get("Damage Models", &i.to_string()), ',');
			if f.len() < 6 {
				continue;
			}
			let mut m = DamageModel {
				min_imp: atof(&f[1]) as f32,
				max_imp: atof(&f[2]) as f32,
				min_player: atof(&f[3]) as f32,
				max_player: atof(&f[4]) as f32,
				..Default::default()
			};
			if f.len() >= 7 {
				m.smoke_front = atoi(&f[6]) != 0;
			}
			if let Some(c) = cars.get(&lower(&f[5])) {
				m.window = atoi(&c[1]);
				m.lights = atoi(&c[2]);
				for field in c.iter().skip(3) {
					if !field.is_empty() {
						m.phases.push(lower(field));
					}
				}
			}
			self.models.insert(lower(&f[0]), m);
		}
	}

	fn get(&self, set: &str) -> DamageModel {
		self.models.get(&lower(set)).cloned().unwrap_or_default()
	}
}

/// Where it last drove on the road, for putting it back: a few seconds' worth, so the
/// spot isn't the one it just crashed from.
#[derive(Clone, Copy)]
struct Safe {
	pos: [f32; 3],
	yaw: f32,
	time: f32,
}

/// The pieces of the current damage phase (FUN_00425490..FUN_00425be0).
struct Piece {
	def: DamagePart,
	mesh: Option<Rc<Mesh>>,
	tex: u32,
	state: i32,
	bent_at: f32,
}

impl Piece {
	const ON: i32 = 0;
	const BENT: i32 = 1;
	const OFF: i32 = 2;
}

/// One car in the race, with its driver (the player or the computer).
struct Racer {
	car: Car,
	model: CarModel,
	ai: AiDriver,
	rules: RaceRules,
	player: bool,
	traffic: bool,
	/// CAR_CFG.INI racer
	entry: i32,
	/// The police (TrackObject type 9): waiting by the road until a racer comes by, then
	/// after it; it gives up when left far behind.
	police: i32,
	chase_time: f32,
	siren: i32,
	/// a chasing cop's: whom (racers[])
	target: usize,
	plan: CopPlan,
	/// a racer's: how long stopped with a cop beside
	caught_time: f32,
	/// a computer racer the police took off the road
	arrested: bool,
	/// ai_supercop.cpp: D.T. Harry's humvee (TrackObject type 28), after the player from
	/// the moment it sees it to the end.
	supercop: bool,
	/// A police car of a path (game/paths.rs; its index in the paths): out of sight until the
	/// player comes by, then driving out along it.
	path: Option<usize>,
	hidden: bool,
	on_path: bool,
	path_f: f32,
	/// FUN_004a8200: lit as the road under it (its colour's light), following it the
	/// faster the faster it goes.
	light: f32,
	/// its engine heard by the player
	engine_voice: i32,
	/// ai_racer.cpp, opponent.ini IRRITATING: bumped by the player it gets irritated
	/// (IrritationBashIncrement, falling off), and past the threshold goes after it for a
	/// while (STATE_IRRITATING).
	irritating: bool,
	irritation: f32,
	revenge: f32,
	/// its opponent.ini skill, before intel.ini's catch-up
	base_skill: f32,
	/// last frame's, for the communicator
	was_police: i32,
	/// ahead of the player last frame (1), behind (0), unknown
	was_ahead: i32,
	safe: Vec<Safe>,
	stuck: f32,
	damage_model: DamageModel,
	/// 0..1100
	damage: f32,
	pieces: Vec<Piece>,
	phase: i32,
	/// clock of the last knock: 60 ms between two
	last_hit: f32,
	last_respawn: f32,
}

impl Default for Racer {
	fn default() -> Self {
		Racer {
			car: Car::default(),
			model: CarModel::default(),
			ai: AiDriver::default(),
			rules: RaceRules::default(),
			player: false,
			traffic: false,
			entry: 0,
			police: Racer::NONE,
			chase_time: 0.0,
			siren: 0,
			target: 0,
			plan: CopPlan::default(),
			caught_time: 0.0,
			arrested: false,
			supercop: false,
			path: None,
			hidden: false,
			on_path: false,
			path_f: 0.0,
			light: 255.0,
			engine_voice: 0,
			irritating: false,
			irritation: 0.0,
			revenge: 0.0,
			base_skill: 1.0,
			was_police: Racer::NONE,
			was_ahead: -1,
			safe: Vec::new(),
			stuck: 0.0,
			damage_model: DamageModel::default(),
			damage: 0.0,
			pieces: Vec::new(),
			phase: 0,
			last_hit: -1.0,
			last_respawn: -100.0,
		}
	}
}

impl Racer {
	const NONE: i32 = 0;
	const WAITING: i32 = 1;
	const CHASING: i32 = 2;
	const GAVE_UP: i32 = 3;

	/// FUN_00425310: one knock with impulse imp; true if it did damage.
	fn hit(&mut self, t: &DamageTable, imp: f32, clock: f32, invulnerable: bool) -> bool {
		let soon = clock - self.last_hit < 0.06;
		self.last_hit = clock;
		let lo = if self.player { self.damage_model.min_player } else { self.damage_model.min_imp };
		let hi = if self.player { self.damage_model.max_player } else { self.damage_model.max_imp };
		if soon || imp <= lo || invulnerable || hi <= lo {
			return false;
		}
		let imp = imp.min(hi);
		self.damage =
			(self.damage + t.min_points as f32 + (imp - lo) * (t.max_points - t.min_points) as f32 / (hi - lo))
				.floor()
				.min(1100.0);
		true
	}

	fn respawn(&mut self, world: &CollisionWorld, clock: f32, track: &Track) {
		// Put back twice in a short while (the safe spot leads straight back into the
		// water): onto a lane of the drive map that runs the race's way, near where it is,
		// facing along it.
		let again = clock - self.last_respawn < 20.0;
		self.last_respawn = clock;
		if (again || self.safe.is_empty())
			&& let Some(lanes) = &self.ai.race_lanes
		{
			let mut best_node = -1i32;
			let mut bd = 1e30f32;
			let mut i = 0;
			while i < track.drive.len() && i < lanes.len() {
				let dn = &track.drive[i];
				if !lanes[i] || dn.next < 0 || dn.next >= track.drive.len() as i32 {
					i += 1;
					continue;
				}
				let dx = dn.pos[0] - self.car.pos[0];
				let dz = dn.pos[2] - self.car.pos[2];
				let d = dx * dx + dz * dz;
				if d < bd {
					bd = d;
					best_node = i as i32;
				}
				i += 1;
			}
			if best_node >= 0 {
				let dn = &track.drive[best_node as usize];
				let q = &track.drive[dn.next as usize].pos;
				let yaw = (q[0] - dn.pos[0]).atan2(q[2] - dn.pos[2]);
				self.car.place_at(world, &dn.pos, yaw);
				self.safe = vec![Safe { pos: dn.pos, yaw, time: clock - 2.0 }];
				self.ai.node = dn.next;
				return;
			}
		}
		if self.safe.is_empty() {
			return;
		}
		let mut best = self.safe[0];
		for sp in &self.safe {
			if sp.time <= clock - 2.0 {
				best = *sp;
			}
		}
		self.car.place_at(world, &best.pos, best.yaw);
		let mut keep = best;
		keep.time = clock - 2.0;
		self.safe = vec![keep];
		self.ai.node = -1;
	}

	fn remember(&mut self, clock: f32) {
		if !self.car.airborne
			&& !self.car.on_grass
			&& self.car.speed_kmh() > 15.0
			&& (self.safe.is_empty() || clock - self.safe.last().unwrap().time > 0.5)
		{
			self.safe.push(Safe { pos: self.car.pos, yaw: self.car.yaw, time: clock });
			if self.safe.len() > 20 {
				self.safe.remove(0);
			}
		}
	}

	fn racing(&self) -> bool {
		!self.traffic && self.police == Racer::NONE
	}

	/// Ranking: finished first, by time; then by distance driven.
	fn score(&self) -> f32 {
		if self.rules.phase == RaceRules::FINISHED { 1e9 - self.rules.time } else { self.rules.progress }
	}
}

/// A piece come off a car, lying where it fell (FUN_00425850: an Ipion body let go at
/// rest; the port lays it on the ground). It stays for the race.
struct Debris {
	pos: [f32; 3],
	yaw: f32,
	def: DamagePart,
	mesh: Rc<Mesh>,
	tex: u32,
}

/// A damage phase's pieces on the car, all attached.
fn set_phase(
	rc: &mut Racer,
	phase: i32,
	t: &DamageTable,
	track: &Track,
	meshes: &mut MeshCache,
	textures: &TextureManager,
) {
	rc.phase = phase;
	rc.pieces.clear();
	if phase as usize >= rc.damage_model.phases.len() {
		return;
	}
	let Some(parts) = t.parts.get(&rc.damage_model.phases[phase as usize]) else { return };
	for d in parts {
		if d.damaged <= 0 {
			continue;
		}
		let mut p = Piece { def: d.clone(), mesh: None, tex: 0, state: Piece::ON, bent_at: 0.0 };
		if let Some(f) = track.animation(&d.anim)
			&& !f.is_empty()
		{
			p.mesh = meshes.get(&f[0].mesh);
			p.tex = textures.get(&f[0].texture);
		}
		rc.pieces.push(p);
	}
}

/// After the damage changed: pieces bend, come off (sound, a piece on the road unless it
/// just goes), and with all of a phase's off the next phase's body and pieces come.
#[allow(clippy::too_many_arguments)]
fn update_pieces(
	rc: &mut Racer,
	clock: f32,
	t: &DamageTable,
	track: &Track,
	meshes: &mut MeshCache,
	textures: &TextureManager,
	world: &CollisionWorld,
	debris: &mut Vec<Debris>,
	sound: &mut dyn FnMut(),
) {
	let mut all_off = !rc.pieces.is_empty();
	for p in rc.pieces.iter_mut() {
		let d = &p.def;
		if d.damaged >= 1101 {
			continue;
		}
		if p.state == Piece::ON && rc.damage > d.damaged as f32 {
			p.state = Piece::BENT;
			p.bent_at = clock;
		}
		if p.state == Piece::BENT && clock - p.bent_at >= 4.0 && rc.damage > d.detached as f32 {
			p.state = Piece::OFF;
			sound();
			if !d.remove
				&& let Some(mesh) = &p.mesh
			{
				let (right, up, fwd) = rc.car.axes();
				let mut pos = [0.0f32; 3];
				for a in 0..3 {
					pos[a] = rc.car.pos[a] + right[a] * d.pos2[0] + up[a] * d.pos2[1] + fwd[a] * d.pos2[2];
				}
				if let Some(g) = world.ground(pos[0], pos[2], pos[1] + 20.0, rc.car.chunk) {
					pos[1] = g.y;
				}
				debris.push(Debris { pos, yaw: rc.car.yaw, def: d.clone(), mesh: mesh.clone(), tex: p.tex });
			}
		}
		all_off = all_off && p.state == Piece::OFF;
	}
	if all_off
		&& (rc.phase as usize + 1) < rc.damage_model.phases.len()
		&& ((5 + rc.phase + 1) as usize) < rc.model.frames.len()
	{
		set_phase(rc, rc.phase + 1, t, track, meshes, textures);
	}
}

/// The pieces in the car's frame: attached at pos (1 lower), bent at pos2 turned by rot
/// (FUN_004a5a40: z, then x, then y).
fn draw_pieces(r: &Renderer, rc: &Racer) {
	if rc.pieces.is_empty() {
		return;
	}
	let (right, up, fwd) = rc.car.axes();
	glPushMatrix();
	gl_mult_world(&right, &up, &fwd, &rc.car.pos);
	for p in &rc.pieces {
		let Some(mesh) = &p.mesh else { continue };
		if p.state == Piece::OFF {
			continue;
		}
		let d = &p.def;
		glPushMatrix();
		if p.state == Piece::BENT {
			glTranslatef(d.pos2[0], d.pos2[1], d.pos2[2]);
			gl_rotate(d.rot[1], 0.0, 1.0, 0.0);
			gl_rotate(d.rot[0], 1.0, 0.0, 0.0);
			gl_rotate(d.rot[2], 0.0, 0.0, 1.0);
		} else {
			glTranslatef(d.pos[0], d.pos[1] - 1.0, d.pos[2]);
		}
		r.draw_mesh(mesh, p.tex, None);
		glPopMatrix();
	}
	glPopMatrix();
}

/// Two cars touching: pushed apart, the speed along the line between them shared out as
/// a slightly bouncy collision of their masses. Each car is two circles, front and back.
/// Pushes two cars apart; the speed they met at (m/s), 0 if they didn't.
fn collide(a: &mut Car, b: &mut Car) -> f32 {
	let circles = |c: &Car| -> [[f32; 2]; 2] {
		let fx = c.yaw.sin();
		let fz = c.yaw.cos();
		let fa = c.spec.wheel_front[2].abs();
		let ra = c.spec.wheel_rear[2].abs();
		[[c.pos[0] + fx * fa, c.pos[2] + fz * fa], [c.pos[0] - fx * ra, c.pos[2] - fz * ra]]
	};
	if (a.pos[1] - b.pos[1]).abs() > 15.0 {
		return 0.0;
	}
	let ca = circles(a);
	let cb = circles(b);
	// About the bodies' half width (the wheels sit a little inside it).
	let ra = a.spec.wheel_front[0].max(a.spec.wheel_rear[0]) + 3.5;
	let rb = b.spec.wheel_front[0].max(b.spec.wheel_rear[0]) + 3.5;
	for p in &ca {
		for q in &cb {
			let dx = q[0] - p[0];
			let dz = q[1] - p[1];
			let d2 = dx * dx + dz * dz;
			let r = ra + rb;
			if d2 >= r * r || d2 < 1e-6 {
				continue;
			}
			let d = d2.sqrt();
			let nx = dx / d;
			let nz = dz / d;
			let push = (r - d) / 2.0;
			a.pos[0] -= nx * push;
			a.pos[2] -= nz * push;
			b.pos[0] += nx * push;
			b.pos[2] += nz * push;
			let rel = (b.vel[0] - a.vel[0]) * nx + (b.vel[2] - a.vel[2]) * nz;
			if rel < 0.0 {
				let j = -(1.0 + 0.3) * rel / (1.0 / a.spec.mass + 1.0 / b.spec.mass);
				a.vel[0] -= j / a.spec.mass * nx;
				a.vel[2] -= j / a.spec.mass * nz;
				b.vel[0] += j / b.spec.mass * nx;
				b.vel[2] += j / b.spec.mass * nz;
			}
			return (-rel).max(0.0);
		}
	}
	0.0
}

/// Two distinct elements of a slice, both mutable.
fn pair_mut<T>(v: &mut [T], i: usize, j: usize) -> (&mut T, &mut T) {
	assert!(i != j);
	if i < j {
		let (a, b) = v.split_at_mut(j);
		(&mut a[i], &mut b[0])
	} else {
		let (a, b) = v.split_at_mut(i);
		(&mut b[0], &mut a[j])
	}
}

struct TrafficKind {
	spec: CarSpec,
	weight: i32,
}

/// The stage's traffic (traffic.ini [Traffic Track <n>]: vehicles from CAR_CFG.INI
/// [traffic] with weights, and how many may be about at once going the race's way
/// (MAX_TRAFFIC_RIGHT) and against it (MAX_TRAFFIC_LEFT)). Cars appear on the drive map's
/// lanes out of sight around the player and disappear again when left far behind.
#[derive(Default)]
struct TrafficPlan {
	kinds: Vec<TrafficKind>,
	total_weight: i32,
	max_with: i32,
	max_against: i32,
}

impl TrafficPlan {
	fn load(&mut self, dir: &str, stage: i32) {
		let mut ini = IniFile::default();
		let p = find_file_ci(dir, "traffic.ini");
		if p.is_empty() || !ini.load(&p) {
			return;
		}
		let sec = format!("Traffic Track {}", stage);
		let count = ini.get_int(&sec, "COUNT", 0);
		for i in 0..count {
			let f = split_fields(&ini.get(&sec, &i.to_string()), ',');
			if f.is_empty() {
				continue;
			}
			let entry = CarSpec::find(dir, "traffic", &f[0]);
			let mut k = TrafficKind { spec: CarSpec::default(), weight: 1 };
			if entry < 0 || !k.spec.load(dir, "traffic", entry, 0, 0, 0, 0).is_empty() {
				continue;
			}
			k.weight = (if f.len() > 1 { atoi(&f[1]) } else { 1 }).max(1);
			self.total_weight += k.weight;
			self.kinds.push(k);
		}
		self.max_with = ini.get_int(&sec, "MAX_TRAFFIC_RIGHT", 0);
		self.max_against = ini.get_int(&sec, "MAX_TRAFFIC_LEFT", 0);
	}

	fn pick(&self, r: u32) -> Option<&CarSpec> {
		if self.kinds.is_empty() {
			return None;
		}
		let mut w = (r % self.total_weight as u32) as i32;
		for k in &self.kinds {
			if w < k.weight {
				return Some(&k.spec);
			}
			w -= k.weight;
		}
		Some(&self.kinds.last().unwrap().spec)
	}
}

fn load_model(track: &Track, meshes: &mut MeshCache, textures: &TextureManager, anim: &str) -> CarModel {
	let mut model = CarModel::default();
	if let Some(f) = track.animation(anim) {
		for af in f {
			model.frames.push((meshes.get(&af.mesh), textures.get(&af.texture)));
		}
		let mut frame = |i: usize, mesh: &mut Option<Rc<Mesh>>, tex: &mut u32| {
			if i < f.len() {
				*mesh = meshes.get(&f[i].mesh);
				*tex = textures.get(&f[i].texture);
			}
		};
		frame(0, &mut model.body, &mut model.body_tex);
		frame(1, &mut model.wheel, &mut model.wheel_tex);
		frame(2, &mut model.windows, &mut model.windows_tex);
	}
	model
}

fn random(rnd: &mut u32) -> u32 {
	*rnd = rnd.wrapping_mul(1103515245).wrapping_add(12345);
	*rnd >> 8
}

/// What the computer drivers steer round: the solid objects (not the buildings beside
/// the road), and the heavy loose ones still standing.
fn obstacle_of(m: &Mesh, pos: &[f32; 3], yaw_deg: f32) -> AiObstacle {
	let yaw = yaw_deg * PI / 180.0;
	let cy = yaw.cos();
	let sy = yaw.sin();
	let cx = (m.min[0] + m.max[0]) / 2.0;
	let cz = (m.min[2] + m.max[2]) / 2.0;
	AiObstacle {
		x: pos[0] + cx * cy + cz * sy,
		z: pos[2] - cx * sy + cz * cy,
		yaw,
		hx: (m.max[0] - m.min[0]) / 2.0,
		hz: (m.max[2] - m.min[2]) / 2.0,
	}
}

fn mesh_radius(m: Option<&Rc<Mesh>>) -> f32 {
	let mut r = 0.0f32;
	if let Some(m) = m {
		for v in &m.vertices {
			r = r.max(v.x * v.x + v.y * v.y + v.z * v.z);
		}
	}
	r.sqrt()
}

/// A knock's sparks (and with damage, more and bits of car: FUN_00426880).
fn knock_fx(fx: &mut Effects, rc: &Racer, at: &[f32; 3], imp: f32, hurt: bool) {
	let lo = if rc.player { rc.damage_model.min_player } else { rc.damage_model.min_imp };
	if imp < lo / 3.0 {
		return;
	}
	for _ in 0..(if hurt { 4 } else { 1 }) {
		fx.sparks(at);
	}
	if hurt {
		fx.car_bits(at, rc.car.yaw + PI, imp, rc.car.pos[1]);
	}
}

/// The knock's sound (FUN_00427400), by its impulse against the player's threshold.
fn knock_sound(sound: &mut RaceSound, min_player: f32, max_player: f32, imp: f32, wall: bool, since_last: f32) {
	let rnd = KNOCK_RND.get().wrapping_mul(1103515245).wrapping_add(12345);
	KNOCK_RND.set(rnd);
	let two = if (rnd >> 16) & 1 != 0 { "2" } else { "1" };
	if wall && imp < min_player / 3.0 && since_last < 0.3 {
		sound.effect("SCHUUR", 1.0);
	}
	if imp < min_player / 3.0 {
		return;
	}
	if imp < min_player {
		sound.effect(&format!("SOFT_CAR_HIT{}", two), 1.0);
	} else if imp < min_player + (min_player + max_player) / 2.0 {
		sound.effect(&format!("MID_CAR_HIT{}", two), 1.0);
	} else {
		sound.effect(&format!("HARD_CAR_HIT{}", two), 1.0);
	}
}

fn break_sound(sound: &mut RaceSound, rnd: &mut u32) {
	const NAMES: [&str; 4] = ["DAMAGE_GLASS", "DAMAGE_DOP", "DAMAGE_GLASS2", "DAMAGE_METALBAR"];
	sound.effect(NAMES[(random(rnd) % 4) as usize], 1.0);
}

fn position_of(racers: &[Racer], who: usize) -> i32 {
	let mut p = 1;
	for (i, o) in racers.iter().enumerate() {
		if i != who && o.racing() && o.score() > racers[who].score() {
			p += 1;
		}
	}
	p
}

fn chasing(racers: &[Racer], who: usize) -> i32 {
	let mut k = 0;
	for c in racers {
		k += (c.police == Racer::CHASING && c.target == who) as i32;
	}
	k
}

/// The animated objects (type 12, 0x469c60): each steps through its anmtypes.ini
/// frames, so many ms each, over and over.
struct Animated {
	frames: Vec<(i32, i32)>,
	step: usize,
	elapsed: f32,
}

/// The objects that play a sample (type 1, 0x4535d0): its etappe<n>.ini [Sounds] entry is
/// the object's flags; it sounds from where it stands, all the while the player is
/// near.
struct Ambient {
	obj: usize,
	file: String,
	voice: i32,
	/// a scripted object sounds from where it is (its index in the loose objects)
	moved: Option<usize>,
}

struct PathVehicle {
	path: usize,
	model: CarModel,
	mesh: Option<Rc<Mesh>>,
	rotor: Option<Rc<Mesh>>,
	tex: u32,
	rotor_tex: u32,
	sound: Option<&'static str>,
	voice: i32,
	active: bool,
	armed: bool,
	f: f32,
}

/// The pick-ups (TrackObject type 25, "Bonus item", run by bonus.dso's CBonus events):
/// money, turbo oil, repairs, freezing the others, invulnerability, fast forward. Each
/// is taken by driving through it (the two models' radii, across the ground), then
/// fades for three seconds and comes back after a while (money never).
struct Bonus {
	obj: usize,
	mesh: Option<Rc<Mesh>>,
	tex: u32,
	radius: f32,
	state: i32,
	taken: f32,
}

impl Bonus {
	const WAITING: i32 = 0;
	const FADING: i32 = 1;
	const GONE: i32 = 2;
}

struct BonusKind {
	anim: &'static str,
	/// language.ini
	text: i32,
	/// sound.ini
	sound: &'static str,
	/// seconds; < 0 never
	respawn: f32,
	money: i32,
	turbo: f32,
	repair: f32,
}

const BONUS_KINDS: [BonusKind; 10] = [
	BonusKind { anim: "pw_1pts", text: 59, sound: "PW_1PT", respawn: -1.0, money: 100, turbo: 0.0, repair: 0.0 },
	BonusKind { anim: "pw_5pts", text: 60, sound: "PW_5PTS", respawn: -1.0, money: 500, turbo: 0.0, repair: 0.0 },
	BonusKind { anim: "pw_10pts", text: 61, sound: "PW_10PTS", respawn: -1.0, money: 1000, turbo: 0.0, repair: 0.0 },
	BonusKind { anim: "pw_turbs", text: 64, sound: "PW_TURBS", respawn: 15.0, money: 0, turbo: 10.0, repair: 0.0 },
	BonusKind { anim: "pw_turbb", text: 65, sound: "PW_TURBB", respawn: 15.0, money: 0, turbo: 50.0, repair: 0.0 },
	BonusKind { anim: "pw_reps", text: 62, sound: "PW_REPS", respawn: 15.0, money: 0, turbo: 0.0, repair: 100.0 },
	BonusKind { anim: "pw_repb", text: 63, sound: "PW_REPB", respawn: 15.0, money: 0, turbo: 0.0, repair: 300.0 },
	BonusKind { anim: "pw_stop", text: 56, sound: "PW_FREEZ", respawn: 15.0, money: 0, turbo: 0.0, repair: 0.0 },
	BonusKind { anim: "pw_godm", text: 58, sound: "PW_INV", respawn: 5.0, money: 0, turbo: 0.0, repair: 0.0 },
	BonusKind { anim: "pw_fastf", text: 57, sound: "PW_FAST", respawn: 5.0, money: 0, turbo: 0.0, repair: 0.0 },
];

fn bonus_kind(anim: &str) -> Option<&'static BonusKind> {
	let a: Vec<char> = anim.chars().collect();
	BONUS_KINDS.iter().find(|k| {
		let n = k.anim.chars().count();
		a.len() >= n && equal_ci(&a[..n].iter().collect::<String>(), k.anim)
	})
}

/// The objects that set off the scenery's particles (tob_main.cpp), when the player's car
/// touches them (0x453480: the two models' radii, across the ground): leaves (24) and
/// birds (23) once each time it comes by, flying up from the car and from the birds'
/// place; mud (27) and water (26) thrown up by the rear wheels all the while it is on
/// them. A rubbish bin (19), a mailbox (20) and paper (22) burst when knocked (their
/// state machines, e.g. 0x4532b0: once for each knock, again after they came to rest).
struct SceneryTrigger {
	obj: usize,
	kind: i32,
	radius: f32,
	touching: bool,
}

/// The traffic lights (type 4, 0x454f70) all change together: red (frame 2) for 5 s,
/// green (0) for 5 s, orange (1) for 0.5 s.
const LIGHT_CYCLE: [(i32, f32); 3] = [(2, 5.0), (0, 5.0), (1, 0.5)];

fn getenv(name: &str) -> Option<String> {
	std::env::var(name).ok()
}

pub fn race_main(data_dir: &str, rcs: &Rc<NamedArchive>, opt: &RaceOptions, result: Option<&mut RaceResult>) -> i32 {
	let mut result = result;
	let mut track = Track::default();
	let mut err = track.load(data_dir, opt.stage, opt.league);
	if err.is_empty() && track.road.chunks.len() < 2 {
		err = "the stage has no road".to_string();
	}
	let track = track;
	// The field: five racers of the league (CAR_CFG.INI [league<n>] 0..5; the menu's
	// results show five, static.ini [TOURRACE] has five characters); the player drives
	// one of them, the computer the others.
	let mut racers: Vec<Racer> = Vec::new();
	const FIELD: i32 = 5;
	let mut gi = IniFile::default();
	let mut opp = IniFile::default();
	{
		let gp = find_file_ci(data_dir, "game.ini");
		if !gp.is_empty() {
			gi.load(&gp);
		}
		let op = find_file_ci(data_dir, "opponent.ini");
		if !op.is_empty() {
			opp.load(&op);
		}
	}
	let difficulty =
		(if opt.difficulty >= 0 { opt.difficulty } else { gi.get_int("OPTIONS", "Difficulty", 1) }).clamp(0, 2);
	let mut police_rules = PoliceRules::default();
	police_rules.load(data_dir, opt.stage, difficulty);
	let mut catch_up_speed = 70.0f32;
	let mut catch_up_close = [20.0f32, 5.0];
	let mut catch_up_far = [50.0f32, 35.0];
	let mut catch_up_close_chunks = [15i32, 20];
	let mut catch_up_far_chunks = 40;
	{
		let mut inn = IniFile::default();
		let ip = find_file_ci(data_dir, "intel.ini");
		if !ip.is_empty() && inn.load(&ip) {
			catch_up_speed = inn.get_int("GENERAL", "CatchUpSpeed", 70) as f32;
			catch_up_close[0] = inn.get_int("GENERAL", "CatchUpCloseEasy", 20) as f32;
			catch_up_close[1] = inn.get_int("GENERAL", "CatchUpCloseNormal", 5) as f32;
			catch_up_far[0] = inn.get_int("GENERAL", "CatchUpFarEasy", 50) as f32;
			catch_up_far[1] = inn.get_int("GENERAL", "CatchUpFarNormal", 35) as f32;
			catch_up_close_chunks[0] = inn.get_int("GENERAL", "CatchUpCloseChunkEasy", 15);
			catch_up_close_chunks[1] = inn.get_int("GENERAL", "CatchUpCloseChunkNormal", 20);
			catch_up_far_chunks = inn.get_int("GENERAL", "CatchUpFarChunk", 40);
		}
	}
	let mut supercop_front = 12;
	let mut supercop_rear = 8;
	let mut supercop_cheat_far = 10;
	let mut supercop_cheat_put = 4;
	let mut supercop_cheat = true;
	{
		let mut bi = IniFile::default();
		let bp = find_file_ci(data_dir, "behavior.ini");
		if !bp.is_empty() && bi.load(&bp) {
			let b = bi.get_or(&format!("Track {} Behaviors", opt.stage), "Supercop0", "Default");
			let get = |k: &str, def: i32| bi.get_int(&b, k, bi.get_int("Default", k, def));
			supercop_front = get("FrontVisibilityRange", 12);
			supercop_rear = get("RearVisibilityRange", 8);
			supercop_cheat = get("Cheat", 1) != 0;
			supercop_cheat_far = get("CheatThreshHoldDistance", 10);
			supercop_cheat_put = get("CheatReplaceDistance", 4);
		}
	}
	let mut cop_rnd: u32 = 777;
	// Testing: A2_RIVALS=0 races alone.
	let mut rivals = FIELD - 1;
	if let Some(rv) = getenv("A2_RIVALS") {
		rivals = atoi(&rv).clamp(0, FIELD - 1);
	}
	let mut i = 0;
	while err.is_empty() && i < FIELD && racers.len() as i32 <= rivals {
		let player = i == 0;
		let entry = if player {
			opt.car
		} else if i <= opt.car {
			i - 1
		} else {
			i
		};
		if player || entry != opt.car {
			let mut rc = Racer { player, entry, ..Default::default() };
			err = rc.car.spec.load(
				data_dir,
				&format!("league{}", opt.league),
				entry,
				if player { opt.motor } else { 0 },
				if player { opt.gearbox } else { 0 },
				if player { opt.tyres } else { 0 },
				if player { opt.abs } else { 0 },
			);
			// opponent.ini [Racer <n> Level <difficulty>] <stage>= behaviour, skill, ...
			let b =
				split_fields(&opp.get(&format!("Racer {} Level {}", entry, difficulty), &opt.stage.to_string()), ',');
			rc.ai.skill = if player { 1.0 } else { skill_factor(if b.len() > 1 { &b[1] } else { "NORMAL" }) };
			rc.base_skill = rc.ai.skill;
			rc.irritating = !b.is_empty() && b[0] == "IRRITATING";
			racers.push(rc);
		}
		i += 1;
	}
	if !err.is_empty() {
		eprintln!("race: {}", err);
		return 1;
	}
	// The racers live at the front of the list; traffic comes and goes behind them.
	// Room for 64 more, as the original reserves.
	let racers_capacity = racers.len() + 64;
	racers.reserve(64);
	let mut autopilot = opt.autopilot;
	if let Some(ap) = getenv("A2_AUTOPILOT") {
		autopilot = autopilot || (!ap.is_empty() && !ap.starts_with('0'));
	}
	// Testing: A2_AUTOPILOT=<seconds> (over 1) lets go of the car after that long.
	let autopilot_until = match getenv("A2_AUTOPILOT") {
		Some(ap) if atof(&ap) > 1.0 => atof(&ap) as f32,
		_ => 1e30,
	};
	{
		let me = &racers[0];
		println!(
			"race: stage {} ({}), car {} ({}): {:.0} kg, top speed {:.0} km/h, {} gears; {} rivals",
			opt.stage,
			track.info.name,
			me.car.spec.name,
			me.car.spec.animation,
			me.car.spec.mass,
			me.car.spec.top_speed,
			me.car.spec.gear_count,
			racers.len() - 1
		);
	}
	let mut world = CollisionWorld::default();
	world.build(&track.road);
	let textures = TextureManager::new(rcs.clone());
	let mut meshes = MeshCache::new(rcs.clone());
	// The objects with unmovable physics (tob_main.cpp FUN_004541c0: types 5 collision
	// physics, 14 and 15 with collision, 17 cached with collision) are solid.
	for o in &track.objects {
		if o.r#type != 5 && o.r#type != 14 && o.r#type != 15 && o.r#type != 17 {
			continue;
		}
		if let Some(f) = track.animation(&o.animation)
			&& !f.is_empty()
			&& let Some(m) = meshes.get(&f[0].mesh)
		{
			world.add_mesh(&m, &o.pos, &o.rot, o.chunk);
		}
	}
	let world = world;
	let mut loose = LooseObjects::default();
	loose.build(&track, &mut meshes, &textures, data_dir);
	let mut animated: BTreeMap<usize, Animated> = BTreeMap::new();
	let mut light_step = 0usize;
	let mut lights_red;
	let mut light_time = 0.0f32;
	let mut ambients: Vec<Ambient> = Vec::new();
	{
		let mut si = IniFile::default();
		let sp = find_file_ci(data_dir, &(track.info.file.clone() + ".ini"));
		if !sp.is_empty() && si.load(&sp) {
			for (oi, o) in track.objects.iter().enumerate() {
				if o.r#type != 1 {
					continue;
				}
				let f = split_fields(&si.get("Sounds", &o.flags.to_string()), ',');
				if f.is_empty() || f[0].is_empty() {
					continue;
				}
				let file = match f[0].rfind(['\\', '/']) {
					None => f[0].clone(),
					Some(b) => f[0][b + 1..].to_string(),
				};
				ambients.push(Ambient { obj: oi, file, voice: 0, moved: None });
			}
		}
	}
	for (li, l) in loose.list.iter().enumerate() {
		if !l.sound3d.is_empty() && l.sound3d_loops {
			ambients.push(Ambient { obj: l.obj, file: l.sound3d.clone(), voice: 0, moved: Some(li) });
		}
	}
	for (oi, o) in track.objects.iter().enumerate() {
		if o.r#type == 12
			&& let Some(t) = track.anim_type(&o.animation)
			&& !t.frames.is_empty()
		{
			animated.insert(oi, Animated { frames: t.frames.clone(), step: 0, elapsed: 0.0 });
		}
	}
	let mut solid_obstacles: Vec<AiObstacle> = Vec::new();
	for o in &track.objects {
		if o.r#type != 5 && o.r#type != 14 && o.r#type != 15 && o.r#type != 17 {
			continue;
		}
		let f = track.animation(&o.animation);
		let m = match f {
			Some(f) if !f.is_empty() => meshes.get(&f[0].mesh),
			_ => None,
		};
		if let Some(m) = m
			&& m.max[0] - m.min[0] < 400.0
			&& m.max[2] - m.min[2] < 400.0
		{
			solid_obstacles.push(obstacle_of(&m, &o.pos, o.rot[1]));
		}
	}
	let mut r = Renderer::new(&textures);
	let mut hud = Hud::default();
	hud.load(data_dir, opt.car, &track, &mut meshes, &textures);
	// Ovl_WaitScreen.cpp, gfx_pbar.cpp: while the stage loads, its picture (Raser.ini
	// [wait_hi]) with the progress bar (its frames 0..10, [progress]). The port loads the
	// objects' models and textures here, so the race starts without a hitch.
	{
		let mut rs = IniFile::default();
		let rp = find_file_ci(data_dir, "Raser.ini");
		let mut wait_tex = 0u32;
		if !rp.is_empty() && rs.load(&rp) {
			wait_tex = textures.get(&rs.get("wait_hi", &opt.stage.to_string()));
		}
		let show_wait = |step: i32| {
			let mut ignored = SysInput::default();
			sys_poll(&mut ignored);
			if sys_gl_begin_frame().is_none() {
				return;
			}
			hud.overlay.begin();
			if wait_tex != 0 {
				r.bind(wait_tex);
				glDisable(GL_ALPHA_TEST);
				glColor4f(1.0, 1.0, 1.0, 1.0);
				glBegin(GL_QUADS);
				glTexCoord2f(0.0, 0.0);
				glVertex2f(0.0, 0.0);
				glTexCoord2f(1.0, 0.0);
				glVertex2f(640.0, 0.0);
				glTexCoord2f(1.0, 1.0);
				glVertex2f(640.0, 480.0);
				glTexCoord2f(0.0, 1.0);
				glVertex2f(0.0, 480.0);
				glEnd();
			}
			hud.overlay.element(&r, "OVL_PROGRESS_BAR", 0.0, 1.0, 1.0, step.clamp(0, 10) as usize);
			sys_gl_end_frame();
		};
		show_wait(0);
		let total = track.objects.len();
		let mut done = 0usize;
		let mut shown = 0;
		for o in &track.objects {
			if let Some(f) = track.animation(&o.animation) {
				for af in f {
					meshes.get(&af.mesh);
					textures.get(&af.texture);
				}
			}
			done += 1;
			let step = 1 + (9 * done / total.max(1)) as i32;
			if step != shown {
				shown = step;
				show_wait(shown);
			}
		}
		show_wait(10);
	}
	let mut comm = Communicator::default();
	let comm_on = comm.load(data_dir);
	hud.flag_on = gi.get_int("GFX OPTIONS", "finish_flag", 1) != 0;
	CAR_WINDOWS_ON.set(gi.get_int("GFX OPTIONS", "alpha_blending", 1) != 0);
	CAR_REFLECT_TEX.set(0);
	if let Some(f) = track.animation("car_reflect")
		&& !f.is_empty()
	{
		CAR_REFLECT_TEX.set(textures.get(&f[0].texture));
	}
	let overlay_off = gi.get_int("GFX OPTIONS", "disable_overlay", 0) != 0;
	let mut overlay_detail = gi.get_int("GFX OPTIONS", "overlay_detail", 3);
	hud.shown = !overlay_off && overlay_detail > 0;
	let mut i = 0;
	while gi.has("Portraits", &i.to_string()) {
		hud.face_names.push(gi.get("Portraits", &i.to_string()));
		i += 1;
	}
	let road_tex: [u32; 4] = [
		textures.get(&track.info.road_texture),
		textures.get(&track.info.grass_texture),
		textures.get(&track.info.grass2_texture),
		textures.get(&track.info.rail_texture),
	];
	let sky: Option<&Vec<AnimFrame>> = track.animation("sky");
	for rc in racers.iter_mut() {
		rc.model = load_model(&track, &mut meshes, &textures, &rc.car.spec.animation);
	}
	let mut traffic = TrafficPlan::default();
	if gi.get_int("OPTIONS", "Traffic", 1) != 0 {
		traffic.load(data_dir, opt.stage);
	}
	// Testing: A2_TRAFFIC=0 turns it off.
	if let Some(tf) = getenv("A2_TRAFFIC")
		&& tf.starts_with('0')
	{
		traffic.kinds.clear();
	}
	let mut models: BTreeMap<String, CarModel> = BTreeMap::new();
	for k in &traffic.kinds {
		let m = load_model(&track, &mut meshes, &textures, &k.spec.animation);
		models.insert(k.spec.animation.clone(), m);
	}
	let mut rnd: u32 = 12345;
	let mut next_spawn = 0.0f32;
	let mut keys = Keys::default();
	keys.load(data_dir);
	{
		let key_fields: [&mut i32; 7] = [
			&mut keys.up,
			&mut keys.down,
			&mut keys.left,
			&mut keys.right,
			&mut keys.turbo,
			&mut keys.handbrake,
			&mut keys.horn,
		];
		for (k, field) in key_fields.into_iter().enumerate() {
			if opt.keys[k] > 0 {
				*field = opt.keys[k];
			}
		}
	}
	let mut sound = RaceSound::default();
	sound.load(data_dir, rcs, opt.car);
	sound.volumes(opt.music_volume, opt.sfx_volume);
	sound.start_music(track.info.music);
	let mut said_go = false;
	let mut said_finish = false;
	let mut said_engines = false;
	let mut last_gear = 1;
	let mut slip_voice = 0;
	let mut last_count = 4;
	let mut laps = if opt.laps > 0 { opt.laps } else { gi.get_int("OPTIONS", "Nrlaps", 2) };
	// Testing: A2_LAPS=<n> overrides the number of laps.
	if let Some(lp) = getenv("A2_LAPS") {
		laps = atoi(&lp).max(1);
	}

	// Each drive map node's chunk and whether its lane runs the race's way.
	let mut node_chunk: Vec<i32> = vec![0; track.drive.len()];
	let mut node_with_v: Vec<bool> = vec![false; track.drive.len()];
	for i in 0..track.drive.len() {
		let dn = &track.drive[i];
		node_chunk[i] = world.nearest_chunk(dn.pos[0], dn.pos[2], -1);
		let c = node_chunk[i];
		let a = track.road_centre(c);
		let b = track.road_centre(c + 1);
		let nx = if dn.next >= 0 && dn.next < track.drive.len() as i32 { dn.next } else { i as i32 };
		let q = &track.drive[nx as usize].pos;
		node_with_v[i] = (q[0] - dn.pos[0]) * (b[0] - a[0]) + (q[2] - dn.pos[2]) * (b[2] - a[2]) > 0.0;
	}
	let node_with = Rc::new(node_with_v);
	// The grid: two by two behind the start line, which the race crosses towards higher
	// chunks; the player starts last.
	let start_line = track.find_trigger(13).max(0);
	let mut start = start_line;
	// Testing: A2_START=<chunk> starts elsewhere on the road.
	if let Some(st) = getenv("A2_START") {
		start = atoi(&st) + 2;
	}
	let n = track.road.chunks.len() as i32;
	let count = racers.len();
	for i in 0..count {
		racers[i].ai.race_lanes = Some(node_with.clone());
		let slot = count - 1 - i; // player (0) in the last slot
		let row = slot as i32 / 2;
		let grid_chunk = ((start - 2 - row * 2) % n + n) % n;
		// On the lanes that run the race's way (the drive map's), two side by side; a
		// stage without them puts the cars either side of the road's middle.
		let mut lanes: Vec<usize> = Vec::new();
		for k2 in 0..track.drive.len() {
			if node_chunk[k2] == grid_chunk && node_with[k2] && track.drive[k2].next >= 0 {
				lanes.push(k2);
			}
		}
		if lanes.len() >= 2 {
			// Across the road, from left to right.
			let c0 = track.road_centre(grid_chunk);
			let c1 = track.road_centre(grid_chunk + 1);
			let dx = c1[0] - c0[0];
			let dz = c1[2] - c0[2];
			let across = |k2: usize| {
				let p = &track.drive[k2].pos;
				(p[0] - c0[0]) * dz - (p[2] - c0[2]) * dx
			};
			lanes.sort_by(|&a2, &b2| across(a2).partial_cmp(&across(b2)).unwrap_or(std::cmp::Ordering::Equal));
			// The two lanes in the middle of the carriageway.
			let m = (lanes.len() - 2) / 2;
			let dn = &track.drive[lanes[m + slot % 2]];
			let q = &track.drive[dn.next as usize].pos;
			racers[i].car.place_at(&world, &dn.pos, (q[0] - dn.pos[0]).atan2(q[2] - dn.pos[2]));
		} else {
			racers[i].car.place(&world, &track, grid_chunk, if slot % 2 != 0 { 22.0 } else { -22.0 });
		}
		let chunk = racers[i].car.chunk;
		racers[i].rules.begin(n, start_line, track.find_trigger(14), laps, chunk);
		let safe = Safe { pos: racers[i].car.pos, yaw: racers[i].car.yaw, time: 0.0 };
		racers[i].safe.push(safe);
	}
	let field_size = racers.len() as i32;
	let mut damage_table = DamageTable::default();
	damage_table.load(data_dir);
	// The police cars by the road (game.ini [OPTIONS] Police; A2_POLICE=0 for testing):
	// CAR_CFG.INI [traffic] has a car for each police animation.
	let mut police_on = gi.get_int("OPTIONS", "Police", 1) != 0;
	if let Some(pe) = getenv("A2_POLICE") {
		police_on = police_on && !pe.starts_with('0');
	}
	let mut radar_traps: Vec<usize> = Vec::new();
	for (oi, o) in track.objects.iter().enumerate() {
		if !police_on {
			break;
		}
		if o.r#type == 7 {
			radar_traps.push(oi);
		}
		if o.r#type != 9 && o.r#type != 28 {
			continue;
		}
		let mut cfg = IniFile::default();
		let cp = find_file_ci(data_dir, "CAR_CFG.INI");
		let mut entry = -1;
		if !cp.is_empty() && cfg.load(&cp) {
			let mut i = 0;
			while i < cfg.get_int("traffic", "Count", 0) && entry < 0 {
				let f = split_fields(&cfg.get("traffic", &i.to_string()), ',');
				if f.len() > 1 && equal_ci(&f[1], &o.animation) {
					entry = i;
				}
				i += 1;
			}
		}
		let mut cop = Racer::default();
		if entry < 0 || !cop.car.spec.load(data_dir, "traffic", entry, 0, 0, 0, 0).is_empty() {
			continue;
		}
		cop.police = Racer::WAITING;
		cop.supercop = o.r#type == 28;
		cop.model = load_model(&track, &mut meshes, &textures, &cop.car.spec.animation);
		cop.car.place_at(&world, &o.pos, o.rot[1] * PI / 180.0);
		cop.rules.phase = RaceRules::RACING;
		racers.push(cop);
	}
	// The paths (etappe<n>.pth): police cars pulling out (CAR_CFG.INI [traffic] COP0 for
	// PCOP, COP1 for GPCOP), and the vehicles that go by (game/paths.rs).
	let paths: Vec<Path> = load_paths(data_dir, &track.info.file);
	for (pi, pa) in paths.iter().enumerate() {
		if !police_on || !pa.police() || pa.points.is_empty() {
			continue;
		}
		let entry = CarSpec::find(data_dir, "traffic", if pa.r#type >= Path::GPCOP_DEADEND { "COP1" } else { "COP0" });
		let mut cop = Racer::default();
		if entry < 0 || !cop.car.spec.load(data_dir, "traffic", entry, 0, 0, 0, 0).is_empty() {
			continue;
		}
		cop.police = Racer::WAITING;
		cop.model = load_model(&track, &mut meshes, &textures, &cop.car.spec.animation);
		cop.path = Some(pi);
		let (p0, yaw0) = pa.at(0.0);
		cop.car.place_at(&world, &p0, yaw0);
		cop.hidden = true;
		cop.rules.phase = RaceRules::RACING;
		racers.push(cop);
	}
	let mut vehicles: Vec<PathVehicle> = Vec::new();
	for (pi, pa) in paths.iter().enumerate() {
		let mut v = PathVehicle {
			path: pi,
			model: CarModel::default(),
			mesh: None,
			rotor: None,
			tex: 0,
			rotor_tex: 0,
			sound: None,
			voice: 0,
			active: false,
			armed: true,
			f: 0.0,
		};
		let anim: Option<&str> = match pa.r#type {
			Path::BOAT => Some("e00_rond"),
			Path::TRAIN => {
				v.sound = Some("TRAIN");
				Some("C_TREIN")
			}
			Path::HELICOPTER => Some("C_HELI"),
			Path::PLANE => {
				v.sound = Some("PLANE");
				Some("a_VLIEGT")
			}
			Path::RANDOM_TRAFFIC => None,
			_ => continue,
		};
		if let Some(anim) = anim {
			let Some(f) = track.animation(anim) else { continue };
			if f.is_empty() {
				continue;
			}
			v.mesh = meshes.get(&f[0].mesh);
			v.tex = textures.get(&f[0].texture);
			if pa.r#type == Path::HELICOPTER
				&& let Some(rf) = track.animation("C_LBLADE")
				&& !rf.is_empty()
			{
				v.rotor = meshes.get(&rf[0].mesh);
				v.rotor_tex = textures.get(&rf[0].texture);
			}
		}
		vehicles.push(v);
	}
	let mut bonuses: Vec<Bonus> = Vec::new();
	for (oi, o) in track.objects.iter().enumerate() {
		if o.r#type != 25 {
			continue;
		}
		let mut b = Bonus { obj: oi, mesh: None, tex: 0, radius: 10.0, state: Bonus::WAITING, taken: 0.0 };
		if let Some(frames) = track.animation(&o.animation)
			&& !frames.is_empty()
		{
			b.mesh = meshes.get(&frames[0].mesh);
			b.tex = textures.get(&frames[0].texture);
		}
		if let Some(m) = &b.mesh {
			b.radius = (m.max[0] - m.min[0]).max(m.max[2] - m.min[2]) / 2.0;
		}
		bonuses.push(b);
	}
	for rc in racers.iter_mut() {
		rc.damage_model = damage_table.get(&rc.car.spec.damage_set);
		if rc.model.frames.len() > 5 {
			set_phase(rc, 0, &damage_table, &track, &mut meshes, &textures);
		}
	}
	// Testing: A2_DAMAGE=<n> starts the player's car damaged.
	if let Some(dm) = getenv("A2_DAMAGE") {
		racers[0].damage = (atof(&dm) as f32).clamp(0.0, 1098.0);
	}
	let mut debris: Vec<Debris> = Vec::new();
	// The effects (game.ini [GFX OPTIONS]).
	let mut fx = Effects::default();
	fx.particles = gi.get_int("GFX OPTIONS", "particles", 1) != 0;
	fx.clouds = gi.get_int("GFX OPTIONS", "clouds", 1) != 0;
	fx.skidmarks = gi.get_int("GFX OPTIONS", "skidmarks", 1) != 0;
	fx.fade_skidmarks = gi.get_int("GFX OPTIONS", "fade_skmarks", 1) != 0;
	fx.sfx_tex = textures.get("s_sfx.pcx");
	let shadow_tex = textures.get("s_shadow.pcx");
	// game.ini [GFX OPTIONS] alpha_blending: off, no blended shadows.
	let alpha_on = gi.get_int("GFX OPTIONS", "alpha_blending", 1) != 0;
	fx.smoke_tex = textures.get("L1RACER3.PCX");
	if let Some(f) = track.animation("Par_Damage") {
		for af in f {
			fx.bits.push(meshes.get(&af.mesh));
		}
	}
	{
		const ANIMS: [&str; Effects::SCENERY_KINDS as usize] = [
			"par_Leaf",
			"par_Bird",
			"par_mail",
			"par_trash",
			"par_paper",
			"par_dirt",
			"par_dirtpieces",
			"par_water",
			"par_waterdrops",
		];
		for k in 0..Effects::SCENERY_KINDS as usize {
			if let Some(f) = track.animation(ANIMS[k]) {
				for af in f {
					fx.scenery_meshes[k].push(meshes.get(&af.mesh));
				}
			}
		}
	}
	let mut scenery_triggers: Vec<SceneryTrigger> = Vec::new();
	for (oi, o) in track.objects.iter().enumerate() {
		let kind = match o.r#type {
			23 => Effects::BIRDS,
			24 => Effects::LEAVES,
			26 => Effects::WATER,
			27 => Effects::MUD,
			_ => continue,
		};
		let f = track.animation(&o.animation);
		let radius = match f {
			Some(f) if !f.is_empty() => mesh_radius(meshes.get(&f[0].mesh).as_ref()),
			_ => 10.0,
		};
		scenery_triggers.push(SceneryTrigger { obj: oi, kind, radius, touching: false });
	}
	let car_radius = mesh_radius(racers[0].model.body.as_ref());
	let mut smoke_clock = 0.0f32;
	let mut tyre_clock = 0.0f32;
	let mut beacon: Option<Rc<Mesh>> = None;
	let mut beacon_tex = 0u32;
	if let Some(f) = track.animation("coplights")
		&& !f.is_empty()
	{
		beacon = meshes.get(&f[0].mesh);
		beacon_tex = textures.get(&f[0].texture);
	}
	let mut invulnerable_left = 0.0f32;
	let mut cheat_invincible = false;
	// init_etappe_timer; 0x457da0 at a TIME_CHECK (trigger 45).
	let mut time_limit = 0.0f32;
	let mut checkpoint_time = 0.0f32;
	// Testing: A2_CHECKPOINT_SPEED=<ms> gives --race the chase's clock.
	let mut checkpoint_speed = opt.checkpoint_speed;
	if checkpoint_speed <= 0
		&& let Some(cs) = getenv("A2_CHECKPOINT_SPEED")
	{
		checkpoint_speed = atoi(&cs);
	}
	if checkpoint_speed > 0 {
		let value = gi.get_int("PLAYER", "checkpoint_value", 1000).max(1);
		checkpoint_time = value as f32 * checkpoint_speed as f32 / 1000.0;
		time_limit = checkpoint_time;
	}
	let mut ticked = -1;
	let player_min_imp = racers[0].damage_model.min_player;
	let player_max_imp = racers[0].damage_model.max_player;
	let mut money = opt.money.max(0);
	let mut turbo = opt.turbo.clamp(0.0, 100.0);
	let mut turbo_on = false;
	let mut turbo_voice = 0;
	let mut turbo_tick = 0.0f32;
	let mut freeze_left = 0.0f32;
	let mut fast_left = 0.0f32;
	let mut fov = 60.0f32;
	let mut fov_target = 60.0f32;
	let mut message = String::new();
	let mut message_time = 0.0f32;
	let mut flashes = 0;
	let mut flash_message = 0.0f32;
	let mut flashed: Vec<bool> = vec![false; radar_traps.len()];
	let mut trap_down: Vec<bool> = vec![false; radar_traps.len()];
	let mut catches = 0;
	let mut laps_seen = 0usize;
	let mut lap_record = opt.record_lap;
	let mut pad_turbo;
	let mut horn_voice = 0;
	// the warning's interlude, s
	let mut warning_left = 0.0f32;
	let mut warning_cop: Option<usize> = None;
	let mut stuck_time = 0.0f32;
	let mut wrong_time = 0.0f32;
	let reset_wait = gi.get_int("PLAYER", "RESETWAITTIME", 10) as f32;
	let mut comm_chunk = -1;
	let mut comm_start_said = false;
	let mut comm_finish_said = false;
	let mut comm_damage_said = false;
	let mut cam = {
		let car = &racers[0].car;
		[car.pos[0] - car.yaw.sin() * 60.0, car.pos[1] + 25.0, car.pos[2] - car.yaw.cos() * 60.0]
	};
	// 0 chase, 1 driver, 2 and 3 beside and in front of the car (looking at it).
	let mut camera = 0;
	let mut last = sys_ticks();
	let mut acc = 0.0f32;
	// Testing: A2_TRACE=1 prints the car's state every second.
	let trace_env = getenv("A2_TRACE");
	let trace = trace_env.as_deref().is_some_and(|t| !t.is_empty() && !t.starts_with('0'));
	let mut clock = 0.0f32;
	let mut next_trace = 1.0f32;
	let race_limit = getenv("A2_RACE_LIMIT").map_or(0.0, |s| atof(&s) as f32);
	let mut inp = SysInput::default();
	while !sys_quit_requested() {
		sys_poll(&mut inp);
		let key = inp.key;
		let is_key = |c: char| key == c as i32;
		let phase0 = racers[0].rules.phase;
		// Gm_main.cpp: Esc asks whether to stop (J/Y yes, N no), P pauses until a key.
		if hud.requestor == 2 {
			if is_key('j') || is_key('J') || is_key('y') || is_key('Y') {
				break;
			}
			if is_key('n') || is_key('N') || key == KEY_ESCAPE {
				hud.requestor = 0;
			}
			inp.key = KEY_NONE;
		} else if hud.requestor == 1 {
			if key != KEY_NONE {
				hud.requestor = 0;
			}
			inp.key = KEY_NONE;
		} else if key == KEY_ESCAPE && phase0 != RaceRules::RACING && phase0 != RaceRules::COUNTDOWN {
			break; // the race is over anyway
		} else if key == KEY_ESCAPE {
			hud.requestor = 2;
			inp.key = KEY_NONE;
		} else if is_key('p') || is_key('P') {
			hud.requestor = 1;
			inp.key = KEY_NONE;
		}
		let is_key = |c: char| inp.key == c as i32;
		// game.ini [PLAYER] RESETWAITTIME: stuck that long, Enter puts the car back.
		if inp.key == KEY_ENTER && hud.reset_prompt {
			racers[0].respawn(&world, clock, &track);
			stuck_time = 0.0;
		}
		// Gm_main.cpp's cheats: Ctrl + Space with T, 100 s on the clock (EXTRA TIJD);
		// with I, invincible (INVINCIBLE) or not.
		if keyispressed(17) && keyispressed(32) && (is_key('t') || is_key('T')) && time_limit > 0.0 {
			time_limit = racers[0].rules.time + 100.0;
			message = hud.lang.get(TXT_EXTRA_TIME, "EXTRA TIJD");
			message_time = 3.0;
			inp.key = KEY_NONE;
		}
		let is_key = |c: char| inp.key == c as i32;
		if keyispressed(17) && keyispressed(32) && (is_key('i') || is_key('I')) {
			cheat_invincible = !cheat_invincible;
			if cheat_invincible {
				message = hud.lang.get(TXT_INVINCIBLE, "INVINCIBLE");
				message_time = 3.0;
			}
			inp.key = KEY_NONE;
		}
		let is_key = |c: char| inp.key == c as i32;
		if is_key('c') || is_key('C') {
			camera = (camera + 1) % 4;
		}
		if is_key('d') || is_key('D') {
			overlay_detail += 1;
			if overlay_detail > 1 {
				overlay_detail = 0;
			}
		}
		hud.shown = !overlay_off && overlay_detail > 0;
		if is_key('r') || is_key('R') {
			racers[0].respawn(&world, clock, &track);
		}
		if autopilot && clock > autopilot_until {
			autopilot = false;
		}
		let now = sys_ticks();
		let mut frame_dt = (now.wrapping_sub(last) as f32 / 1000.0).min(0.1);
		if warning_left > 0.0 && hud.requestor == 0 {
			warning_left -= frame_dt;
			frame_dt = 0.0;
		}
		if hud.requestor != 0 {
			frame_dt = 0.0;
		}
		acc += frame_dt;
		last = now;
		{
			let me = &mut racers[0];
			let rules = &mut me.rules;
			// FUN_0044c950: wrecked, the race is over.
			if me.damage >= 1099.0 && rules.phase == RaceRules::RACING {
				rules.phase = RaceRules::TOTAL_LOSS;
				rules.finished_at = 0.0;
			}
			// A chase has to be finished in time; FUN_0044c8c0 ticks its last five seconds.
			if time_limit > 0.0 && rules.phase == RaceRules::RACING {
				let left = (time_limit - rules.time) as i32;
				if left < 6 && left != ticked && rules.time < time_limit {
					ticked = left;
					sound.effect("TIME_TICK", 1.0);
				}
			}
			if time_limit > 0.0 && rules.time > time_limit && rules.phase == RaceRules::RACING {
				rules.phase = RaceRules::TIME_UP;
				rules.finished_at = 0.0;
			}
			// Testing: A2_RACE_LIMIT=<seconds> ends the race there as if finished.
			if race_limit > 0.0 && clock > race_limit && rules.phase == RaceRules::RACING {
				rules.phase = RaceRules::FINISHED;
				rules.finished_at = 14.0;
			}
			// "DRUK 'SPATIE' OM VERDER TE GAAN"
			if (rules.phase == RaceRules::FINISHED
				|| rules.phase == RaceRules::ARRESTED
				|| rules.phase == RaceRules::TIME_UP
				|| rules.phase == RaceRules::TOTAL_LOSS)
				&& (rules.finished_at > 15.0 || inp.key == KEY_SPACE || inp.key == KEY_ENTER)
			{
				break;
			}

			// The engines starting with the countdown (0x43c380: START_ENGINES; car_snd.ini
			// Start), its beeps, the start.
			if rules.phase == RaceRules::COUNTDOWN && !said_engines {
				said_engines = true;
				sound.effect("START_ENGINES", 1.0);
				if !sound.start_name.is_empty() {
					let s = sound.start_name.clone();
					sound.effect(&s, 1.0);
				}
			}
			if rules.phase == RaceRules::COUNTDOWN && (rules.countdown as i32) + 1 < last_count {
				last_count = rules.countdown as i32 + 1;
				sound.effect("POSITION_SWITCH", 1.0);
			}
			if rules.phase == RaceRules::FINISHED && !said_finish {
				sound.effect("FINISH_JUICHEN", 1.0);
				said_finish = true;
			}
			if rules.phase == RaceRules::RACING && !said_go {
				sound.effect("GO", 1.0);
				said_go = true;
			}
		}

		let mut player_in = CarInput {
			steer: (if keyispressed(keys.right) { 1.0 } else { 0.0 })
				- (if keyispressed(keys.left) { 1.0 } else { 0.0 }),
			throttle: if keyispressed(keys.up) { 1.0 } else { 0.0 },
			brake: if keyispressed(keys.down) { 1.0 } else { 0.0 },
			handbrake: keyispressed(keys.handbrake),
			..Default::default()
		};
		let mut horn_now = keyispressed(keys.horn);
		// A joystick, joypad or wheel as well (input.cpp): the stick's travel to the power
		// of SENSITIVITY (more: livelier near the middle), a dead zone in the middle.
		pad_turbo = false;
		if opt.device != 0 {
			let pad = sys_pad();
			if pad.present {
				let sens = (if opt.sensitivity >= 0 { opt.sensitivity } else { keys.sensitivity }).clamp(0, 100) as f32;
				let sx = if pad.steer.abs() < 0.08 { 0.0 } else { pad.steer };
				let shaped = (if sx < 0.0 { -1.0 } else { 1.0 }) * sx.abs().powf(2.0 - 1.5 * sens / 100.0);
				if shaped.abs() > player_in.steer.abs() {
					player_in.steer = shaped;
				}
				player_in.throttle = player_in.throttle.max(pad.throttle);
				player_in.brake = player_in.brake.max(pad.brake);
				pad_turbo = pad.button[0];
				player_in.handbrake = player_in.handbrake || pad.button[1];
				horn_now = horn_now || pad.button[2];
			}
		}
		let phase0 = racers[0].rules.phase;
		// The horn (TOETER) while the key is held.
		if horn_now && horn_voice == 0 && phase0 != RaceRules::COUNTDOWN {
			horn_voice = sound.r#loop("TOETER");
		}
		if horn_voice != 0 {
			sound.set(horn_voice, if horn_now { 1.0 } else { 0.0 });
		}
		if !horn_now && horn_voice != 0 {
			sound.stop_voice(horn_voice);
			horn_voice = 0;
		}
		// The turbo (FUN_0044e970): a tenth of a unit every 100 ms while burning, so a full
		// tank lasts ten seconds; fast forward burns it for free.
		let want_turbo =
			phase0 == RaceRules::RACING && (fast_left > 0.0 || (!autopilot && (keyispressed(keys.turbo) || pad_turbo)));
		turbo_tick += frame_dt;
		if !want_turbo {
			turbo_on = false;
			turbo_tick = 0.0;
		} else {
			while turbo_tick >= 0.1 {
				turbo_tick -= 0.1;
				if fast_left > 0.0 {
					turbo_on = true;
				} else if turbo >= 1.0 {
					turbo -= 1.0;
					turbo_on = true;
				} else {
					turbo_on = false;
				}
			}
		}
		if turbo_on && turbo_voice == 0 {
			turbo_voice = sound.r#loop("TURBO");
		} else if !want_turbo && turbo_voice != 0 {
			sound.stop_voice(turbo_voice);
			turbo_voice = 0;
		}
		player_in.turbo = turbo_on;
		let mut obstacles_v = solid_obstacles.clone();
		for l in &loose.list {
			if l.mass >= 250.0
				&& l.tilt < 60.0
				&& let Some(m) = &l.mesh
			{
				obstacles_v.push(obstacle_of(m, &l.pos, track.objects[l.obj].rot[1] + l.yaw));
			}
		}
		let obstacles = Rc::new(obstacles_v);
		while acc >= STEP {
			lights_red = LIGHT_CYCLE[light_step].0 != 0;
			for ri in 0..racers.len() {
				if racers[ri].hidden || racers[ri].on_path {
					continue;
				}
				let phase0 = racers[0].rules.phase;
				racers[ri].ai.obstacles = Some(obstacles.clone());
				racers[ri].ai.red_light = if racers[ri].traffic { Some(lights_red) } else { None };
				let mut ci = CarInput::default();
				if racers[ri].police == Racer::WAITING {
					ci.hold = true;
				} else if racers[ri].police == Racer::CHASING {
					let ti = racers[ri].target;
					let (rc, t) = pair_mut(&mut racers, ri, ti);
					let choice = police_rules.for_kind(&rc.car.spec.name);
					let act = rc.plan.action(&police_rules, choice, STEP, &mut cop_rnd);
					ci = rc.ai.chase(&track, &rc.car, &t.car, STEP, act, rc.plan.side);
				} else if racers[ri].arrested {
					ci.hold = true;
				} else if racers[ri].revenge > 0.0 && racers[ri].racing() && !racers[ri].player {
					let (rc, t) = pair_mut(&mut racers, ri, 0);
					ci = rc.ai.chase(&track, &rc.car, &t.car, STEP, CopAction::INTO, 1);
				} else {
					let rc = &mut racers[ri];
					ci = if rc.player && !autopilot { player_in } else { rc.ai.drive(&track, &rc.car, STEP) };
				}
				let rc = &mut racers[ri];
				if rc.player && autopilot {
					ci.turbo = player_in.turbo;
				}
				// STATE_TOTAL_LOSS: a wrecked computer car lets go of everything.
				if !rc.player && rc.damage >= 1100.0 {
					ci.throttle = 0.0;
					ci.brake = 0.0;
					ci.steer = 0.0;
					ci.turbo = false;
				}
				// FreezeRacers: the others stand still for a while.
				if freeze_left > 0.0 && !rc.player && !rc.traffic && rc.police == Racer::NONE {
					ci.throttle = 0.0;
					ci.hold = true;
				}
				if !rc.racing() {
					rc.rules.phase = RaceRules::RACING;
				}
				// No driving before the start; after the finish the car rolls out.
				if rc.rules.phase != RaceRules::RACING || (rc.police != Racer::NONE && phase0 == RaceRules::COUNTDOWN) {
					ci.throttle = 0.0;
					ci.brake = 0.3;
					ci.hold = rc.rules.phase == RaceRules::COUNTDOWN;
					if ci.hold {
						ci.steer = 0.0;
					}
					rc.ai.stuck = 0.0;
				}
				rc.car.wall_hit = 0.0;
				rc.car.step(&world, &ci, STEP);
				if rc.car.wall_hit > 0.0 && !rc.traffic {
					// Against the world: speed (game units/s) x half its mass x how upright
					// the face is (the port's walls all are).
					let imp = rc.car.wall_hit * 10.0 * rc.car.spec.mass / 2.0;
					let since = clock - rc.last_hit;
					let invulnerable = rc.player && (invulnerable_left > 0.0 || phase0 != RaceRules::RACING);
					let hurt = rc.hit(&damage_table, imp, clock, invulnerable);
					let at = [rc.car.pos[0], rc.car.pos[1] + 5.0, rc.car.pos[2]];
					knock_fx(&mut fx, rc, &at, imp, hurt);
					if rc.player && (hurt || imp > rc.damage_model.min_player / 3.0 || since < 0.3) {
						knock_sound(&mut sound, player_min_imp, player_max_imp, imp, true, since);
					}
				}
				if rc.racing() {
					let chunk = rc.car.chunk;
					rc.rules.update(STEP, chunk);
				}
			}
			for i in 0..racers.len() {
				for j in i + 1..racers.len() {
					if racers[i].hidden || racers[j].hidden {
						continue;
					}
					let v = {
						let (a, b) = pair_mut(&mut racers, i, j);
						collide(&mut a.car, &mut b.car)
					};
					if v <= 0.0 {
						continue;
					}
					// Car against car: speed x the other's mass (at most 1666.7).
					for side in 0..2 {
						let (mi, oi) = if side != 0 { (j, i) } else { (i, j) };
						if racers[mi].traffic {
							continue;
						}
						let o_mass = racers[oi].car.spec.mass;
						let o_traffic = racers[oi].traffic;
						let o_irritating = racers[oi].irritating;
						let o_police = racers[oi].police;
						let o_entry = racers[oi].entry;
						let phase0 = racers[0].rules.phase;
						let imp = v * 10.0 * o_mass.min(1666.7);
						let me_ = &mut racers[mi];
						let since = clock - me_.last_hit;
						let invulnerable = me_.player && (invulnerable_left > 0.0 || phase0 != RaceRules::RACING);
						let hurt = me_.hit(&damage_table, imp, clock, invulnerable);
						let me_player = me_.player;
						let mut at = [0.0f32; 3];
						for a in 0..3 {
							at[a] =
								(racers[i].car.pos[a] + racers[j].car.pos[a]) / 2.0 + if a == 1 { 5.0 } else { 0.0 };
						}
						knock_fx(&mut fx, &racers[mi], &at, imp, hurt);
						if me_player {
							knock_sound(&mut sound, player_min_imp, player_max_imp, imp, false, since);
						}
						if me_player && !o_traffic && v > 2.0 {
							sound.effect("RACER_COLLISION", 0.6);
						}
						if me_player && o_irritating && v > 3.0 {
							racers[oi].irritation += 30.0;
						}
						// ai_racer.cpp: a racer bumped by the player has its say.
						if me_player && !o_traffic && o_police == Racer::NONE && o_entry < 5 && v > 2.0 {
							comm.post(&format!("~racer{}collision", o_entry), o_entry, clock);
						}
					}
				}
			}
			// Knocking the loose objects about: a heavy one hurts like a car of its
			// mass; mailboxes, bins and paper burst once each time they are set going.
			for ri in 0..racers.len() {
				if racers[ri].hidden {
					continue;
				}
				let (v, hit_obj) = loose.hit(&mut racers[ri].car);
				let Some(hi) = hit_obj else { continue };
				if v < 0.5 {
					continue;
				}
				let phase0 = racers[0].rules.phase;
				let rc = &mut racers[ri];
				let l = &mut loose.list[hi];
				if rc.player {
					if let Some(s) = l.sound {
						sound.effect(s, 1.0);
					} else if !l.sound3d.is_empty() && !l.sound3d_loops && v > 2.0 {
						sound.effect(&l.sound3d, 1.0);
					}
					let kind = match track.objects[l.obj].r#type {
						19 => Effects::TRASH,
						20 => Effects::MAIL,
						22 => Effects::PAPER,
						_ => Effects::SCENERY_KINDS,
					};
					if kind != Effects::SCENERY_KINDS && !l.burst {
						let dir = [rc.car.yaw.sin(), 0.0, rc.car.yaw.cos()];
						fx.scenery(kind, &l.pos, &dir, v, frame_dt);
						l.burst = true;
					}
				}
				if rc.traffic || l.mass < 100.0 {
					continue;
				}
				let imp = v * 10.0 * (if l.hinged { 300.0 } else { l.mass }).min(1666.7);
				let since = clock - rc.last_hit;
				let invulnerable = rc.player && (invulnerable_left > 0.0 || phase0 != RaceRules::RACING);
				let hurt = rc.hit(&damage_table, imp, clock, invulnerable);
				let at = [l.pos[0], rc.car.pos[1] + 5.0, l.pos[2]];
				knock_fx(&mut fx, rc, &at, imp, hurt);
				if rc.player {
					knock_sound(&mut sound, player_min_imp, player_max_imp, imp, false, since);
				}
			}
			loose.update(STEP, &world, &track);
			loose.revive(racers[0].car.chunk, n, 30, &track);
			let car = &racers[0].car;
			for l in loose.list.iter_mut() {
				if l.fell {
					l.fell = false;
					let dx = l.pos[0] - car.pos[0];
					let dz = l.pos[2] - car.pos[2];
					let d = (dx * dx + dz * dz).sqrt();
					if track.objects[l.obj].r#type == 3 && d < 500.0 {
						sound.effect("PAAL_HIT_GROUND", 1.0 - d / 500.0);
					}
				}
			}
			acc -= STEP;
			clock += STEP;
		}
		sound.engine(&racers[0].car, if autopilot { 1.0 } else { player_in.throttle });
		// The other cars' engines (snd_main.cpp's sound sources; CAR_CFG.INI's engine
		// sample, e.g. HOOG4): the four nearest within 600, pitched by their speed.
		{
			let car_pos = racers[0].car.pos;
			let mut nearest: Vec<(f32, usize)> = Vec::new();
			for (ri, rc) in racers.iter().enumerate() {
				if rc.player || rc.hidden || rc.car.spec.sound.is_empty() {
					continue;
				}
				let dx = rc.car.pos[0] - car_pos[0];
				let dz = rc.car.pos[2] - car_pos[2];
				let d = dx * dx + dz * dz;
				if d < 600.0 * 600.0 {
					nearest.push((d, ri));
				}
			}
			nearest.sort_by(|a, b| a.0.partial_cmp(&b.0).unwrap_or(std::cmp::Ordering::Equal));
			let heard: Vec<usize> = nearest.iter().take(4).map(|x| x.1).collect();
			for (ri, rc) in racers.iter_mut().enumerate() {
				let on = heard.contains(&ri);
				if on {
					if rc.engine_voice == 0 {
						rc.engine_voice = sound.r#loop(&rc.car.spec.sound);
					}
					let d = ((rc.car.pos[0] - car_pos[0]) * (rc.car.pos[0] - car_pos[0])
						+ (rc.car.pos[2] - car_pos[2]) * (rc.car.pos[2] - car_pos[2]))
						.sqrt();
					let pitch = 0.6 + rc.car.speed_kmh().min(200.0) / 200.0 * 0.9;
					sound.set_pitch(rc.engine_voice, (1.0 - d / 600.0) * 0.5, pitch);
				} else if rc.engine_voice != 0 {
					sound.stop_voice(rc.engine_voice);
					rc.engine_voice = 0;
				}
			}
		}
		if racers[0].car.gear != last_gear {
			if racers[0].car.gear > 0 && last_gear > 0 {
				let g = sound.gear_name.clone();
				sound.effect(&g, 0.8);
			}
			last_gear = racers[0].car.gear;
		}
		// The police: a waiting car sets off when the player passes close by fast, or when
		// a radar trap flashes nearby (Flitspaal, TrackObject type 7, over 80 km/h).
		if racers[0].rules.phase == RaceRules::RACING {
			let car_pos = racers[0].car.pos;
			let car_speed = racers[0].car.speed_kmh();
			for t in 0..radar_traps.len() {
				let o = &track.objects[radar_traps[t]];
				// Knocked down, it flashes no more; the player's doing earns the radar
				// bonus (language.ini 51, game.ini radarbonus).
				if let Some(lo) = loose.find(radar_traps[t])
					&& lo.tilt > 45.0
				{
					if !trap_down[t] {
						trap_down[t] = true;
						let ex = lo.pos[0] - car_pos[0];
						let ez = lo.pos[2] - car_pos[2];
						if ex * ex + ez * ez < 150.0 * 150.0 {
							money = (money + 100).min(999999);
							message = hud.lang.get(TXT_RADAR_BONUS, "FLITS BONUS  +100 EURO");
							message_time = 3.0;
						}
					}
					continue;
				}
				if let Some(lo) = loose.find(radar_traps[t])
					&& lo.tilt == 0.0
				{
					trap_down[t] = false; // stood up again (OnRevive)
				}
				let dx = o.pos[0] - car_pos[0];
				let dz = o.pos[2] - car_pos[2];
				let in_range = dx * dx + dz * dz < 120.0 * 120.0;
				if in_range && !flashed[t] && car_speed > 80.0 {
					flashed[t] = true;
					flashes += 1;
					flash_message = 3.0;
					sound.effect("PHOTO", 1.0);
					hud.white = 2;
					money = (money - 50).max(0); // Flitspaal: FLITS BOETE -50
					// The nearest waiting police car comes after the player.
					let mut best: Option<usize> = None;
					let mut bd = 1e30f32;
					for (ri, rc) in racers.iter().enumerate() {
						if rc.police != Racer::WAITING {
							continue;
						}
						let ex = rc.car.pos[0] - car_pos[0];
						let ez = rc.car.pos[2] - car_pos[2];
						let e = ex * ex + ez * ez;
						if e < bd {
							bd = e;
							best = Some(ri);
						}
					}
					if let Some(bi) = best
						&& bd < 3000.0 * 3000.0
					{
						let best = &mut racers[bi];
						best.police = Racer::CHASING;
						best.target = 0;
						best.chase_time = 0.0;
						best.plan.begin(&police_rules, police_rules.for_kind(&best.car.spec.name), &mut cop_rnd);
					}
				}
				if !in_range {
					flashed[t] = flashed[t] && dx * dx + dz * dz < 400.0 * 400.0;
				}
			}
		}
		flash_message = 0.0f32.max(flash_message - frame_dt);
		message_time = 0.0f32.max(message_time - frame_dt);
		// A wreck smokes (damage over 900, a puff each 200 ms, front or back).
		smoke_clock += frame_dt;
		if smoke_clock >= 0.2 && frame_dt < 1.0 / 12.0 {
			smoke_clock = 0.0;
			for rc in &racers {
				if rc.damage <= 900.0 {
					continue;
				}
				let (right, up, fwd) = rc.car.axes();
				let lx = (random(&mut rnd) % 10) as f32 - 5.0;
				let lz =
					if rc.damage_model.smoke_front { rc.car.spec.wheel_front[2] } else { rc.car.spec.wheel_rear[2] };
				let mut p = [0.0f32; 3];
				let v = [rc.car.vel[0], 0.0, rc.car.vel[2]];
				for a in 0..3 {
					p[a] = rc.car.pos[a] + right[a] * lx + up[a] * 5.0 + fwd[a] * lz;
				}
				fx.smoke(&p, &v, true);
			}
		}
		// The player's tyres: smoke and marks when they slide (gfx_wolk, gfx_skid). The
		// slide: sideways speed, and the speed with the wheels locked by the brake.
		{
			let car = &racers[0].car;
			let (right, _up, fwd) = car.axes();
			let vl = car.vel[0] * right[0] + car.vel[2] * right[2];
			let vf = car.vel[0] * fwd[0] + car.vel[2] * fwd[2];
			let locked = if player_in.brake > 0.5 && vf > 3.0 { vf * 0.5 } else { 0.0 };
			let level = if car.airborne { 0 } else { ((0.25 * vl * vl + locked * locked).sqrt() as i32).clamp(0, 10) };
			tyre_clock += frame_dt;
			for side in 0..2 {
				let wx = (if side != 0 { 1.0 } else { -1.0 }) * car.spec.wheel_rear[0];
				let mut p = [0.0f32; 3];
				for a in 0..3 {
					p[a] = car.pos[a] + right[a] * wx + fwd[a] * car.spec.wheel_rear[2];
				}
				fx.skid(side, &p, &right, level, clock);
				if level > 0 && tyre_clock >= 0.1 && frame_dt < 1.0 / 12.0 {
					let v = [car.vel[0], 0.0, car.vel[2]];
					fx.smoke(&p, &v, false);
				}
			}
			if tyre_clock >= 0.1 {
				tyre_clock = 0.0;
			}
			// plr_car.cpp SLIP: the tyres squealing, louder the harder they slide (on the
			// road, not the grass).
			let slip = level > 3 && !car.on_grass && racers[0].rules.phase == RaceRules::RACING;
			if slip && slip_voice == 0 {
				slip_voice = sound.r#loop("SLIP");
			}
			if slip_voice != 0 {
				sound.set(slip_voice, if slip { 1.0f32.min((level - 3) as f32 / 5.0) } else { 0.0 });
			}
			if !slip && slip_voice != 0 {
				sound.stop_voice(slip_voice);
				slip_voice = 0;
			}
		}
		{
			let car = &racers[0].car;
			let (right, _up, fwd) = car.axes();
			let mut dir = [fwd[0], 0.0, fwd[2]];
			let l = (dir[0] * dir[0] + dir[2] * dir[2]).sqrt();
			if l > 0.0 {
				dir[0] /= l;
				dir[2] /= l;
			}
			let speed = (car.vel[0] * car.vel[0] + car.vel[2] * car.vel[2]).sqrt();
			for t in scenery_triggers.iter_mut() {
				let opos = track.objects[t.obj].pos;
				let dx = opos[0] - car.pos[0];
				let dz = opos[2] - car.pos[2];
				let reach = t.radius + car_radius;
				let touching = dx * dx + dz * dz < reach * reach;
				let arrived = touching && !t.touching;
				t.touching = touching;
				if t.kind == Effects::MUD || t.kind == Effects::WATER {
					if !touching {
						continue;
					}
					for side in 0..2 {
						let mut p = [0.0f32; 3];
						for a in 0..3 {
							p[a] = car.pos[a]
								+ right[a] * (if side != 0 { 1.0 } else { -1.0 }) * car.spec.wheel_rear[0]
								+ fwd[a] * car.spec.wheel_rear[2];
						}
						p[1] = car.pos[1];
						fx.scenery(t.kind, &p, &dir, speed, frame_dt);
						fx.scenery(
							if t.kind == Effects::MUD { Effects::MUD_BITS } else { Effects::WATER_DROPS },
							&p,
							&dir,
							speed,
							frame_dt,
						);
					}
				} else if arrived {
					fx.scenery(t.kind, if t.kind == Effects::LEAVES { &car.pos } else { &opos }, &dir, speed, frame_dt);
				}
			}
		}
		fx.update(frame_dt, clock);
		for rc in racers.iter_mut() {
			if rc.hidden {
				continue;
			}
			if let Some(g) = world.ground(rc.car.pos[0], rc.car.pos[2], rc.car.pos[1] + 10.0, rc.car.chunk) {
				let want = ((g.colour >> 16) & 0xff) as f32;
				let speed = (rc.car.vel[0] * rc.car.vel[0] + rc.car.vel[2] * rc.car.vel[2]).sqrt() * 10.0;
				rc.light += (want - rc.light) * 1.0f32.min((speed * 0.1 + 1.0) * frame_dt);
			}
		}
		// The paths come into play as the player reaches their first chunk (pth_main.cpp),
		// once each time it passes.
		let car_chunk = racers[0].car.chunk;
		let in_window = |pa: &Path| {
			let span = ((pa.end - pa.start) % n + n) % n;
			let at = ((car_chunk - pa.start) % n + n) % n;
			car_chunk >= 0 && at <= span.max(1)
		};
		let phase0 = racers[0].rules.phase;
		for rc in racers.iter_mut() {
			let Some(pi) = rc.path else { continue };
			if phase0 != RaceRules::RACING {
				continue;
			}
			let path = &paths[pi];
			if rc.hidden && !rc.on_path && rc.path_f == 0.0 && in_window(path) {
				rc.hidden = false;
				rc.on_path = true;
			}
			if !rc.on_path {
				continue;
			}
			let before = rc.car.pos;
			rc.path_f = 1.0f32.min(rc.path_f + frame_dt / path.time);
			let (mut p, yaw) = path.at(rc.path_f);
			rc.car.chunk = world.nearest_chunk(p[0], p[2], rc.car.chunk);
			if let Some(g) = world.ground(p[0], p[2], p[1] + 30.0, rc.car.chunk) {
				p[1] = g.y;
			}
			rc.car.pos = p;
			rc.car.yaw = yaw;
			let mut a = 0;
			while a < 3 {
				rc.car.vel[a] = if frame_dt > 0.0 { (p[a] - before[a]) / frame_dt / 10.0 } else { 0.0 };
				a += 2;
			}
			if rc.path_f >= 1.0 {
				rc.on_path = false;
				rc.car.vel[0] = 0.0;
				rc.car.vel[2] = 0.0;
				let t = path.r#type;
				if t == Path::PCOP_DEADEND || t == Path::GPCOP_DEADEND {
					rc.hidden = true;
				} else if t == Path::PCOP_WAYPOINT || t == Path::GPCOP_WAYPOINT {
					rc.police = Racer::CHASING;
					rc.target = 0;
					rc.plan.begin(&police_rules, police_rules.for_kind(&rc.car.spec.name), &mut cop_rnd);
				}
			}
		}
		{
			let car_pos = racers[0].car.pos;
			for v in vehicles.iter_mut() {
				let path = &paths[v.path];
				let inside = in_window(path);
				if inside && v.armed && !v.active && phase0 == RaceRules::RACING {
					v.active = true;
					v.armed = false;
					v.f = 0.0;
					if path.r#type == Path::RANDOM_TRAFFIC && !traffic.kinds.is_empty() {
						let spec = traffic.pick(random(&mut rnd)).unwrap();
						v.model = models.entry(spec.animation.clone()).or_default().clone();
					}
				}
				if !inside {
					v.armed = true;
				}
				if !v.active {
					continue;
				}
				v.f += frame_dt / path.time;
				let (p, _yaw) = path.at(v.f.min(1.0));
				let dx = p[0] - car_pos[0];
				let dz = p[2] - car_pos[2];
				let d = (dx * dx + dz * dz).sqrt();
				if let Some(s) = v.sound {
					if v.voice == 0 {
						v.voice = sound.r#loop(s);
					}
					sound.set(v.voice, (1.0 - d / 2000.0).clamp(0.0, 1.0));
				}
				if v.f >= 1.0 {
					v.active = false;
					if v.voice != 0 {
						sound.stop_voice(v.voice);
						v.voice = 0;
					}
				}
			}
		}
		// What the communicator hears about: the road's triggers as the player reaches them
		// (58-61 the direction arrows, 62-68 FUN_00456050.. by the table at 0x5a3bb0), the
		// police setting off and giving up, rivals overtaking, heavy damage.
		if car_chunk >= 0 && car_chunk != comm_chunk && phase0 == RaceRules::RACING {
			comm_chunk = car_chunk;
			let rch = &track.road.chunks[car_chunk as usize];
			for t in [rch.a, rch.b] {
				match t {
					58 => comm.post("SYSTEM_goleft", -1, clock),
					59 => comm.post("SYSTEM_goright", -1, clock),
					60 => comm.post("SYSTEM_gofork", -1, clock),
					61 => comm.post("SYSTEM_gozigzag", -1, clock),
					45 => {
						if checkpoint_time > 0.0 {
							time_limit += checkpoint_time;
							ticked = -1;
							sound.effect("CHECKPOINT", 1.0);
						}
					}
					62 => {
						let cat = format!("~game_position_{:02}", position_of(&racers, 0).clamp(1, 5));
						comm.post(&cat, -1, clock);
					}
					63 => comm.post("~call_for_backup", -1, clock),
					64 => comm.post("~go_for_it", -1, clock),
					65 => comm.post("~junction_ahead_left", -1, clock),
					66 => comm.post("~junction_ahead_right", -1, clock),
					67 => {
						if !comm_start_said {
							comm.post("~challenge_at_start", -1, clock);
							comm_start_said = true;
						}
					}
					68 => {
						if !comm_finish_said {
							comm.post("~challenge_at_finish", -1, clock);
							comm_finish_said = true;
						}
					}
					_ => {}
				}
			}
		}
		{
			let me_score = racers[0].score();
			let car_pos = racers[0].car.pos;
			for rc in racers.iter_mut() {
				if rc.police == Racer::CHASING && rc.was_police != Racer::CHASING {
					comm.post("SYSTEM_copalert", -1, clock);
					comm.post("~warning_from_harry", -1, clock);
					comm.post("~warning_about_harry", -1, clock);
				}
				if rc.police == Racer::GAVE_UP && rc.was_police == Racer::CHASING {
					comm.post("~police_outsmarted", -1, clock);
				}
				rc.was_police = rc.police;
				// ai_new.cpp: "~racer%dpassing" as a racer overtakes the player, "passed" as the
				// player overtakes it.
				if !rc.player && !rc.traffic && rc.police == Racer::NONE && rc.entry < 5 && phase0 == RaceRules::RACING
				{
					let ahead = if rc.score() > me_score { 1 } else { 0 };
					let dx = rc.car.pos[0] - car_pos[0];
					let dz = rc.car.pos[2] - car_pos[2];
					if rc.was_ahead >= 0 && ahead != rc.was_ahead && dx * dx + dz * dz < 300.0 * 300.0 {
						comm.post(
							&format!("~racer{}{}", rc.entry, if ahead != 0 { "passing" } else { "passed" }),
							rc.entry,
							clock,
						);
					}
					rc.was_ahead = ahead;
				}
			}
		}
		if racers[0].damage >= 0.8 * 1100.0 && !comm_damage_said {
			comm.post("~a_lotta_damage", -1, clock);
			comm_damage_said = true;
		}
		comm.update(clock, frame_dt, &mut sound);
		// The rivals: irritation falling off, revenge once past it; intel.ini's catch-up
		// (not on hard): with the player over CatchUpSpeed, a rival more than
		// CatchUpClose / CatchUpFar chunks ahead of it loses that much of its speed.
		{
			let car_speed = racers[0].car.speed_kmh();
			let progress = racers[0].rules.progress;
			for rc in racers.iter_mut() {
				if rc.player || !rc.racing() {
					continue;
				}
				rc.irritation = 0.0f32.max(rc.irritation - 10.0 * frame_dt);
				if rc.irritation > 50.0 && rc.revenge <= 0.0 {
					rc.revenge = 4.0;
					rc.irritation = 0.0;
				}
				rc.revenge = 0.0f32.max(rc.revenge - frame_dt);
				let mut penalty = 0.0f32;
				if difficulty < 2 && car_speed > catch_up_speed {
					let ahead = (rc.rules.progress - progress) as i32;
					if ahead > catch_up_far_chunks {
						penalty = catch_up_far[difficulty as usize];
					} else if ahead > catch_up_close_chunks[difficulty as usize] {
						penalty = catch_up_close[difficulty as usize];
					}
				}
				rc.ai.skill = rc.base_skill * (1.0 - penalty / 100.0);
			}
		}
		if phase0 == RaceRules::RACING {
			let car = &racers[0].car;
			stuck_time = if car.speed_kmh() < 5.0 { stuck_time + frame_dt } else { 0.0 };
			// Against the road's way: the next chunk behind the car.
			let nc = (car.chunk + 1) % track.road.chunks.len() as i32;
			let a = &track.road.chunks[car.chunk.max(0) as usize].pos;
			let b = &track.road.chunks[nc as usize].pos;
			let rx = b[0] - a[0];
			let rz = b[2] - a[2];
			let rl = (rx * rx + rz * rz).sqrt();
			let along = if rl > 0.0 { (car.vel[0] * rx + car.vel[2] * rz) / rl } else { 0.0 };
			wrong_time = if along < -3.0 { wrong_time + frame_dt } else { 0.0 };
		} else {
			stuck_time = 0.0;
			wrong_time = 0.0;
		}
		hud.reset_prompt = stuck_time > reset_wait;
		hud.wrong_way = wrong_time > 1.5;
		hud.frame_dt = frame_dt;
		// A lap done (Tr_finis.cpp): its time against the track's record.
		{
			let rules = &racers[0].rules;
			if rules.lap_times.len() > laps_seen {
				laps_seen = rules.lap_times.len();
				let lap = *rules.lap_times.last().unwrap();
				hud.lap_info_new = rules.circuit && (lap_record <= 0.0 || lap < lap_record);
				if hud.lap_info_new {
					lap_record = lap;
				}
				hud.lap_info_lap = lap;
				hud.lap_info_record = lap_record;
				hud.lap_info_time = if rules.circuit && rules.phase == RaceRules::RACING { 4.0 } else { 0.0 };
			}
		}
		hud.lap_info_time = 0.0f32.max(hud.lap_info_time - frame_dt);
		hud.warning = if warning_left > 0.0 {
			hud.lang.get(
				if catches == 1 { TXT_WARNING_1 } else { TXT_WARNING_2 },
				if catches == 1 { "EERSTE WAARSCHUWING" } else { "LAATSTE WAARSCHUWING" },
			)
		} else {
			String::new()
		};
		hud.money = money;
		hud.faces.clear();
		{
			let mut field: Vec<(usize, i32)> = Vec::new();
			for (ri, rc) in racers.iter().enumerate() {
				if !rc.traffic && rc.police == Racer::NONE {
					field.push((ri, position_of(&racers, ri)));
				}
			}
			field.sort_by_key(|x| x.1);
			for &(ri, _) in &field {
				let rc = &racers[ri];
				hud.faces.push(Face {
					car: rc.entry,
					player: rc.player,
					finish: if rc.rules.phase == RaceRules::FINISHED { rc.rules.time } else { -1.0 },
				});
			}
		}
		hud.owner_damage = 0.0;
		for rc in &racers {
			if !rc.traffic && rc.police == Racer::NONE && rc.entry == comm.owner {
				hud.owner_damage = rc.damage;
			}
		}
		light_time += frame_dt;
		if light_time >= LIGHT_CYCLE[light_step].1 {
			light_step = (light_step + 1) % 3;
			light_time = 0.0;
		}
		{
			let car_pos = racers[0].car.pos;
			for am in ambients.iter_mut() {
				let at = match am.moved {
					Some(li) => loose.list[li].pos,
					None => track.objects[am.obj].pos,
				};
				let dx = at[0] - car_pos[0];
				let dz = at[2] - car_pos[2];
				let d = (dx * dx + dz * dz).sqrt();
				const REACH: f32 = 600.0;
				if d < REACH {
					if am.voice == 0 {
						am.voice = sound.r#loop(&am.file);
					}
					sound.set(am.voice, 1.0 - d / REACH);
				} else if am.voice != 0 {
					sound.stop_voice(am.voice);
					am.voice = 0;
				}
			}
		}
		for a in animated.values_mut() {
			a.elapsed += frame_dt.min(0.1) * 1000.0;
			if a.elapsed >= a.frames[a.step].1 as f32 {
				a.step = (a.step + 1) % a.frames.len();
				a.elapsed = 0.0;
			}
		}
		for rc in racers.iter_mut() {
			if !rc.pieces.is_empty() {
				let player = rc.player;
				update_pieces(
					rc,
					clock,
					&damage_table,
					&track,
					&mut meshes,
					&textures,
					&world,
					&mut debris,
					&mut || {
						if player {
							break_sound(&mut sound, &mut rnd)
						}
					},
				);
			}
		}
		freeze_left = 0.0f32.max(freeze_left - frame_dt);
		invulnerable_left = 0.0f32.max(invulnerable_left - frame_dt);
		if cheat_invincible {
			invulnerable_left = invulnerable_left.max(0.5);
		}
		if fast_left > 0.0 && {
			fast_left -= frame_dt;
			fast_left <= 0.0
		} {
			fov_target = 60.0; // OnTurnoff: ChangeFOV(0.375)
		}
		fov += (fov_target - fov) * (frame_dt / (if fov_target > 60.0 { 1.0 } else { 0.5 })).min(1.0);
		{
			let car_pos = racers[0].car.pos;
			let car_r = racers[0].car.spec.wheel_front[0].max(8.0) + 4.0;
			for b in bonuses.iter_mut() {
				let obj = &track.objects[b.obj];
				let k = bonus_kind(&obj.animation);
				if b.state == Bonus::WAITING && racers[0].rules.phase == RaceRules::RACING {
					let dx = obj.pos[0] - car_pos[0];
					let dz = obj.pos[2] - car_pos[2];
					if dx * dx + dz * dz < (b.radius + car_r) * (b.radius + car_r) {
						b.state = Bonus::FADING;
						b.taken = clock;
						if let Some(k) = k {
							money = (money + k.money).min(999999);
							turbo = (turbo + k.turbo).min(100.0);
							racers[0].damage = (racers[0].damage - k.repair).max(0.0);
							if k.anim == "pw_godm" {
								invulnerable_left = 20.0; // MakeInvulnerable(20)
							}
							if k.anim == "pw_stop" {
								freeze_left = 6.0;
							}
							if k.anim == "pw_fastf" {
								fast_left = 4.0;
								fov_target = 108.0; // ChangeFOV(0.6): 0.6 pi
							}
							if trace {
								println!(
									"race: picked up {} at {:.1} s: money {}, turbo {:.0}",
									obj.animation, clock, money, turbo
								);
							}
							message = hud.lang.get(k.text, "");
							message_time = 3.0;
							sound.effect(k.sound, 1.0);
						}
					}
				} else if b.state == Bonus::FADING && clock - b.taken >= 3.0 {
					b.state = Bonus::GONE;
				} else if b.state == Bonus::GONE
					&& let Some(k) = k
					&& k.respawn >= 0.0
					&& clock - b.taken >= k.respawn
				{
					b.state = Bonus::WAITING;
				}
			}
		}
		// The police (ai_cops.cpp): a waiting car sets off after a racer coming by fast
		// (at most CopsPerPlayer after the player, CopsPerRacer after each computer racer);
		// it gives up after ChaseTime, left GiveUpDist chunks behind, or far off.
		for ri in 0..racers.len() {
			if racers[ri].police == Racer::NONE || racers[ri].hidden || racers[ri].on_path {
				continue;
			}
			let car_chunk = racers[0].car.chunk;
			let car_pos = racers[0].car.pos;
			// behavior.ini: the Supercop sees the player within FrontVisibilityRange chunks
			// ahead of it, RearVisibilityRange behind.
			{
				let rc = &mut racers[ri];
				if rc.supercop && rc.police == Racer::WAITING && phase0 == RaceRules::RACING {
					let ahead = ((car_chunk - rc.car.chunk) % n + n) % n;
					if ahead <= supercop_front || n - ahead <= supercop_rear {
						rc.police = Racer::CHASING;
						rc.target = 0;
						rc.plan.begin(&police_rules, police_rules.for_kind("supercop"), &mut cop_rnd);
						comm.post("SYSTEM_copalert", -1, clock);
						comm.post("~attack", -1, clock);
					}
				}
				if rc.supercop && rc.police == Racer::CHASING {
					// Cheat: left CheatThreshHoldDistance chunks behind, it is put back
					// CheatReplaceDistance behind the player; wrecked, it is out (knock_out).
					let behind = ((car_chunk - rc.car.chunk) % n + n) % n;
					if supercop_cheat && behind > supercop_cheat_far && behind < n / 2 {
						rc.car.place(&world, &track, ((car_chunk - supercop_cheat_put) % n + n) % n, 0.0);
					}
					if rc.damage >= 1100.0 {
						rc.police = Racer::GAVE_UP;
						comm.post("~knock_out", -1, clock);
					}
					rc.chase_time = 0.0;
				}
			}
			if racers[ri].police == Racer::WAITING && !racers[ri].supercop && phase0 == RaceRules::RACING {
				for i in 0..racers.len() {
					let t = &racers[i];
					if !t.racing() || t.arrested || t.rules.phase != RaceRules::RACING {
						continue;
					}
					let ex = racers[ri].car.pos[0] - t.car.pos[0];
					let ez = racers[ri].car.pos[2] - t.car.pos[2];
					let limit = if t.player { police_rules.cops_per_player } else { police_rules.cops_per_racer };
					if ex * ex + ez * ez < 150.0 * 150.0 && t.car.speed_kmh() > 60.0 && chasing(&racers, i) < limit {
						let rc = &mut racers[ri];
						rc.police = Racer::CHASING;
						rc.target = i;
						rc.chase_time = 0.0;
						rc.plan.begin(&police_rules, police_rules.for_kind(&rc.car.spec.name), &mut cop_rnd);
						break;
					}
				}
			}
			let ti = racers[ri].target;
			let t_pos = racers[ti].car.pos;
			let t_chunk = racers[ti].car.chunk;
			let t_arrested = racers[ti].arrested;
			let t_phase = racers[ti].rules.phase;
			let rc = &mut racers[ri];
			let dx = rc.car.pos[0] - t_pos[0];
			let dz = rc.car.pos[2] - t_pos[2];
			let d = (dx * dx + dz * dz).sqrt();
			if rc.police == Racer::CHASING {
				rc.chase_time += frame_dt;
				let behind = ((t_chunk - rc.car.chunk) % n + n) % n;
				let lost = !rc.supercop
					&& (d > 3000.0
						|| rc.chase_time > police_rules.chase_time
						|| (behind > police_rules.give_up_chunks && behind < n / 2));
				if lost || phase0 != RaceRules::RACING || t_arrested || t_phase != RaceRules::RACING {
					rc.police = Racer::GAVE_UP;
				}
			}
			// MEGAPHONE: a call as the step begins (MEGA_0..3), from where the cop is.
			if rc.police == Racer::CHASING && rc.plan.tactic >= 0 && !rc.plan.step_started {
				rc.plan.step_started = true;
				let ct = &police_rules.tactics[rc.plan.tactic as usize];
				if ct.steps[rc.plan.step].0 == CopAction::MEGAPHONE {
					let pd = ((rc.car.pos[0] - car_pos[0]) * (rc.car.pos[0] - car_pos[0])
						+ (rc.car.pos[2] - car_pos[2]) * (rc.car.pos[2] - car_pos[2]))
						.sqrt();
					if pd < 500.0 {
						sound.effect(&format!("MEGA_{}", random(&mut rnd) % 4), 1.0 - pd / 500.0);
					}
				}
			}
			// The siren, louder the closer the car to the player.
			if rc.police == Racer::CHASING {
				let pd = ((rc.car.pos[0] - car_pos[0]) * (rc.car.pos[0] - car_pos[0])
					+ (rc.car.pos[2] - car_pos[2]) * (rc.car.pos[2] - car_pos[2]))
					.sqrt();
				let v = (1.0 - pd / 1500.0).clamp(0.0, 1.0);
				if rc.siren == 0 {
					rc.siren = sound.r#loop("POLITIE_SIRENE");
				}
				sound.set(rc.siren, v);
			} else if rc.siren != 0 {
				sound.stop_voice(rc.siren);
				rc.siren = 0;
			}
		}
		// Caught: stopped (under StopSpeed) with a chasing cop beside (within 60) for 3 s. A computer
		// racer is taken off the road; the player gets two warnings (ev_cops.cpp
		// 0x43a910: 4 s seen from beside the cop, ARREST_1A/B, ARREST_2A) and the third
		// time is arrested (ARREST_3A/B), the race over.
		for i in 0..racers.len() {
			{
				let t = &racers[i];
				if !t.racing() || t.arrested || t.rules.phase != RaceRules::RACING {
					continue;
				}
			}
			let mut cop: Option<usize> = None;
			for (ci, c) in racers.iter().enumerate() {
				let ex = c.car.pos[0] - racers[i].car.pos[0];
				let ez = c.car.pos[2] - racers[i].car.pos[2];
				if c.police == Racer::CHASING && c.target == i && ex * ex + ez * ez < 60.0 * 60.0 {
					cop = Some(ci);
				}
			}
			let t = &mut racers[i];
			t.caught_time = if cop.is_some() && t.car.speed_kmh() < police_rules.stop_speed + 1.0 {
				t.caught_time + frame_dt
			} else {
				0.0
			};
			let Some(cop) = cop else { continue };
			if t.caught_time <= 3.0 {
				continue;
			}
			t.caught_time = 0.0;
			if !t.player {
				t.arrested = true;
				t.rules.phase = RaceRules::ARRESTED;
				racers[cop].police = Racer::GAVE_UP;
				continue;
			}
			catches += 1;
			const VOICES: [[&str; 2]; 3] =
				[["ARREST_1A", "ARREST_1B"], ["ARREST_2A", "ARREST_2A"], ["ARREST_3A", "ARREST_3B"]];
			sound.effect(VOICES[(catches.min(3) - 1) as usize][(random(&mut rnd) % 2) as usize], 1.0);
			if catches >= 3 {
				racers[0].rules.phase = RaceRules::ARRESTED;
				racers[0].rules.finished_at = 0.0;
			} else {
				warning_left = 4.0;
				warning_cop = Some(cop);
				racers[cop].police = Racer::GAVE_UP;
			}
		}
		for rc in racers.iter_mut() {
			if rc.police == Racer::GAVE_UP {
				rc.ai.skill = 0.4;
			}
		}
		// Traffic: new cars out of sight, old ones gone when far behind.
		if !traffic.kinds.is_empty() && clock >= next_spawn {
			next_spawn = clock + 0.5;
			let car_chunk = racers[0].car.chunk;
			let mut with = 0;
			let mut against = 0;
			for rc in racers.iter_mut() {
				if !rc.traffic {
					continue;
				}
				let mut d = ((rc.car.chunk - car_chunk) % n + n) % n;
				if d > n / 2 {
					d -= n;
				}
				if !(-12..=40).contains(&d) {
					rc.car.chunk = -999; // gone
				} else if rc.ai.skill > 0.0 {
					with += 1;
				} else {
					against += 1;
				}
			}
			for rc in racers.iter_mut() {
				if rc.car.chunk == -999 && rc.engine_voice != 0 {
					sound.stop_voice(rc.engine_voice);
					rc.engine_voice = 0;
				}
			}
			let mut first = true;
			racers.retain(|rc| std::mem::replace(&mut first, false) || rc.car.chunk != -999);
			let want_with = with < traffic.max_with;
			let want_against = against < traffic.max_against;
			if (want_with || want_against) && !track.drive.is_empty() {
				let go_with = want_with && (!want_against || random(&mut rnd) % 2 != 0);
				for _tries in 0..20 {
					let i = random(&mut rnd) as usize % track.drive.len();
					let d = ((node_chunk[i] - car_chunk) % n + n) % n;
					if !(14..=34).contains(&d) || node_with[i] != go_with || track.drive[i].next < 0 {
						continue;
					}
					let dn = &track.drive[i];
					let mut clear = true;
					for o in &racers {
						let dx = o.car.pos[0] - dn.pos[0];
						let dz = o.car.pos[2] - dn.pos[2];
						clear = clear && dx * dx + dz * dz > 80.0 * 80.0;
					}
					if !clear || racers.len() >= racers_capacity {
						break;
					}
					let spec = traffic.pick(random(&mut rnd)).unwrap();
					let mut t = Racer { traffic: true, ..Default::default() };
					t.car.spec = spec.clone();
					t.model = models.entry(spec.animation.clone()).or_default().clone();
					let q = &track.drive[dn.next as usize].pos;
					t.car.place_at(&world, &dn.pos, (q[0] - dn.pos[0]).atan2(q[2] - dn.pos[2]));
					// A steady 45..60 km/h (stored as a share of the car's top speed; negative
					// marks a car coming the other way, for the counts).
					let cruise = (45.0 + (random(&mut rnd) % 16) as f32) / spec.top_speed.max(50.0);
					t.ai.skill = if go_with { cruise } else { -cruise };
					t.ai.node = i as i32;
					t.rules.phase = RaceRules::RACING;
					t.car.vel[0] = t.car.yaw.sin() * 10.0;
					t.car.vel[2] = t.car.yaw.cos() * 10.0;
					racers.push(t);
					break;
				}
			}
		}
		for rc in racers.iter_mut() {
			// Fallen off the world, or stuck for long: back on the road.
			if rc.car.airborne && rc.car.vel[1] < -40.0 {
				rc.respawn(&world, clock, &track);
			}
			rc.stuck =
				if rc.car.speed_kmh() < 3.0 && rc.rules.phase == RaceRules::RACING { rc.stuck + frame_dt } else { 0.0 };
			if rc.stuck > (if rc.player && !autopilot { 1e9 } else { 8.0 }) {
				rc.respawn(&world, clock, &track);
				rc.stuck = 0.0;
			}
			rc.remember(clock);
		}
		if trace && clock >= next_trace {
			let mut cops = 0;
			let mut chasing = 0;
			let mut cars = 0;
			let mut nearest = 1e9f32;
			let car = &racers[0].car;
			for rc in &racers {
				cars += rc.traffic as i32;
				cops += (rc.police != Racer::NONE) as i32;
				if rc.police == Racer::CHASING {
					chasing += 1;
					let dx = rc.car.pos[0] - car.pos[0];
					let dz = rc.car.pos[2] - car.pos[2];
					nearest = nearest.min((dx * dx + dz * dz).sqrt());
				}
			}
			print!(
				"t {:4.0} s  chunk {:3}  {:5.1} km/h  gear {}  lap {}  pos {}  traffic {}  police {}/{}  damage {:.0}",
				clock,
				car.chunk,
				car.speed_kmh(),
				car.gear,
				racers[0].rules.lap,
				position_of(&racers, 0),
				cars,
				chasing,
				cops,
				racers[0].damage
			);
			if chasing != 0 {
				print!(" ({:.0} away)", nearest);
			}
			println!(
				"{}{}{}",
				if car.on_grass { "  grass" } else { "" },
				if car.airborne { "  air" } else { "" },
				if car.touching_wall { "  WALL" } else { "" }
			);
			let _ = std::io::stdout().flush();
			next_trace += if trace_env.as_deref().is_some_and(|t| t.starts_with('2')) { 0.2 } else { 1.0 };
		}

		// The camera: behind and above, following smoothly; or the driver's view.
		let car = &racers[0].car;
		let (right, up, fwd) = car.axes();
		let mut eye = [0.0f32; 3];
		let mut target = [0.0f32; 3];
		if let Some(wc) = warning_cop
			&& warning_left > 0.0
		{
			// 0x43a690: from 40 beyond the cop, 30 up, at the player.
			let wcar = &racers[wc].car;
			let wx = wcar.pos[0] - car.pos[0];
			let wz = wcar.pos[2] - car.pos[2];
			let wl = (wx * wx + wz * wz).sqrt().max(1.0);
			eye[0] = wcar.pos[0] + wx / wl * 40.0;
			eye[1] = wcar.pos[1] + 30.0;
			eye[2] = wcar.pos[2] + wz / wl * 40.0;
			target = [car.pos[0], car.pos[1] + 8.0, car.pos[2]];
		} else if camera >= 2 {
			let dir = if camera == 2 { &right } else { &fwd };
			for i in 0..3 {
				eye[i] = car.pos[i] + dir[i] * 45.0 + up[i] * 12.0;
				target[i] = car.pos[i] + up[i] * 6.0;
			}
		} else if camera == 0 {
			let want = [car.pos[0] - car.yaw.sin() * 55.0, car.pos[1] + 22.0, car.pos[2] - car.yaw.cos() * 55.0];
			let k = 1.0 - (-8.0 * frame_dt).exp();
			for i in 0..3 {
				cam[i] += (want[i] - cam[i]) * k;
			}
			eye = cam;
			target[0] = car.pos[0] + fwd[0] * 20.0;
			target[1] = car.pos[1] + 10.0;
			target[2] = car.pos[2] + fwd[2] * 20.0;
		} else {
			for i in 0..3 {
				eye[i] = car.pos[i] + up[i] * 14.0 + fwd[i] * 4.0;
				target[i] = eye[i] + fwd[i] * 50.0;
			}
		}

		let Some((w, h)) = sys_gl_begin_frame() else { break };
		gl_perspective(fov * PI / 180.0, w as f32 / h as f32, 2.0, 30000.0);
		glEnable(GL_DEPTH_TEST);
		glDepthFunc(GL_LEQUAL);
		glDisable(GL_CULL_FACE);
		glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE as GLint);
		gl_look_at(&eye, &target);
		r.eye = eye;
		if let Some(sky) = sky
			&& !sky.is_empty()
			&& let Some(m) = meshes.get(&sky[0].mesh)
		{
			glPushMatrix();
			glTranslatef(eye[0], eye[1], eye[2]);
			glDepthMask(GL_FALSE);
			r.draw_mesh(&m, textures.get(&sky[0].texture), None);
			glDepthMask(GL_TRUE);
			glPopMatrix();
		}
		let c = if car.chunk < 0 { 0 } else { car.chunk };
		// game.ini [OPTIONS] visiblechunks=25, either way along the road.
		for k in -25..=25 {
			r.draw_chunk(&track.road.chunks[(((c + k) % n + n) % n) as usize], &road_tex);
		}
		for (oi, o) in track.objects.iter().enumerate() {
			if (police_on && (o.r#type == 9 || o.r#type == 28)) || o.r#type == 25 || loose.loose(oi) {
				continue; // drawn as cars, as pick-ups, and where they were knocked to
			}
			let d = ((o.chunk - c) % n + n) % n;
			if d > 25 && d < n - 25 {
				continue;
			}
			let Some(frames) = track.animation(&o.animation) else { continue };
			if frames.is_empty() {
				continue;
			}
			let mut fi = 0usize;
			if let Some(a) = animated.get(&oi) {
				fi = a.frames[a.step].0.clamp(0, frames.len() as i32 - 1) as usize;
			} else if o.r#type == 4 {
				fi = LIGHT_CYCLE[light_step].0.min(frames.len() as i32 - 1) as usize;
			}
			let Some(m) = meshes.get(&frames[fi].mesh) else { continue };
			glPushMatrix();
			glTranslatef(o.pos[0], o.pos[1], o.pos[2]);
			gl_rotate(o.rot[1], 0.0, 1.0, 0.0);
			gl_rotate(o.rot[0], 1.0, 0.0, 0.0);
			gl_rotate(o.rot[2], 0.0, 0.0, 1.0);
			r.draw_mesh(&m, textures.get(&frames[fi].texture), None);
			glPopMatrix();
		}
		// The cars' shadows (gfx_shdw.cpp): s_shadow's square stretched over the body's
		// box, each corner dropped onto the ground under it, blended SRCALPHA,
		// INVSRCALPHA.
		if shadow_tex != 0 && alpha_on {
			r.bind(shadow_tex);
			glDisable(GL_ALPHA_TEST); // bind's colour-key test would drop the half-dark
			glDepthMask(GL_FALSE);
			glEnable(GL_BLEND);
			glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
			glColor4f(0.0, 0.0, 0.0, 0.5);
			for rc in &racers {
				let d = ((rc.car.chunk - c) % n + n) % n;
				if (d > 25 && d < n - 25) || rc.hidden {
					continue;
				}
				let Some(b) = &rc.model.body else { continue };
				let (right, _up, fwd) = rc.car.axes();
				let corner = [[b.min[0], b.min[2]], [b.min[0], b.max[2]], [b.max[0], b.max[2]], [b.max[0], b.min[2]]];
				const UV: [[f32; 2]; 4] = [[0.0, 0.0], [0.0, 1.0], [1.0, 1.0], [1.0, 0.0]];
				glBegin(GL_TRIANGLE_FAN);
				for k in 0..4 {
					let x = rc.car.pos[0] + right[0] * corner[k][0] + fwd[0] * corner[k][1];
					let z = rc.car.pos[2] + right[2] * corner[k][0] + fwd[2] * corner[k][1];
					let y = world.ground(x, z, rc.car.pos[1] + 20.0, rc.car.chunk).map_or(rc.car.pos[1], |g| g.y);
					glTexCoord2f(UV[k][0], UV[k][1]);
					glVertex3f(x, y + 0.4, z);
				}
				glEnd();
			}
			glColor4f(1.0, 1.0, 1.0, 1.0);
			glDisable(GL_BLEND);
			glDepthMask(GL_TRUE);
		}
		for rc in &racers {
			let d = ((rc.car.chunk - c) % n + n) % n;
			if (d <= 25 || d >= n - 25) && !rc.hidden {
				let mut tint = [0.0f32; 4];
				for k in 0..3 {
					tint[k] = (rc.light + track.info.ambient[k] as f32).min(255.0) / 255.0;
				}
				tint[3] = 1.0;
				draw_car(&r, &rc.car, &rc.model, rc.damage <= rc.damage_model.window as f32, rc.phase, Some(&tint));
				draw_pieces(&r, rc);
			}
		}
		loose.draw(&r, c, n, 25, &track);
		for v in &vehicles {
			if !v.active {
				continue;
			}
			let path = &paths[v.path];
			let (p, yaw) = path.at(v.f.min(1.0));
			if path.r#type == Path::RANDOM_TRAFFIC {
				let mut shown = Car { pos: p, yaw, ..Default::default() };
				if let Some(g) = world.ground(p[0], p[2], p[1] + 30.0, world.nearest_chunk(p[0], p[2], c)) {
					shown.pos[1] = g.y;
				}
				draw_car(&r, &shown, &v.model, true, 0, None);
				continue;
			}
			let Some(mesh) = &v.mesh else { continue };
			glPushMatrix();
			glTranslatef(p[0], p[1], p[2]);
			gl_rotate(yaw * 180.0 / PI, 0.0, 1.0, 0.0);
			r.draw_mesh(mesh, v.tex, None);
			if let Some(rotor) = &v.rotor {
				gl_rotate(clock * 1440.0, 0.0, 1.0, 0.0);
				r.draw_mesh(rotor, v.rotor_tex, None);
			}
			glPopMatrix();
		}
		for b in &debris {
			glPushMatrix();
			glTranslatef(b.pos[0], b.pos[1], b.pos[2]);
			gl_rotate(-b.yaw * 180.0 / PI, 0.0, 1.0, 0.0);
			gl_rotate(b.def.rot[0], 1.0, 0.0, 0.0);
			gl_rotate(b.def.rot[2], 0.0, 0.0, 1.0);
			r.draw_mesh(&b.mesh, b.tex, None);
			glPopMatrix();
		}
		{
			let mut f = [target[0] - eye[0], target[1] - eye[1], target[2] - eye[2]];
			let mut cr = [f[2], 0.0, -f[0]];
			let l = (cr[0] * cr[0] + cr[2] * cr[2]).sqrt();
			if l > 0.0 {
				cr[0] /= l;
				cr[2] /= l;
			}
			let fl = (f[0] * f[0] + f[1] * f[1] + f[2] * f[2]).sqrt();
			let mut cu = [0.0f32, 1.0, 0.0];
			if fl > 0.0 {
				for x in f.iter_mut() {
					*x /= fl;
				}
				cu[0] = cr[1] * f[2] - cr[2] * f[1];
				cu[1] = cr[2] * f[0] - cr[0] * f[2];
				cu[2] = cr[0] * f[1] - cr[1] * f[0];
				if cu[1] < 0.0 {
					for x in cu.iter_mut() {
						*x = -*x;
					}
				}
			}
			fx.draw(&r, &cr, &cu, clock);
			// The lights' glows (car_whl.cpp): frames 3 (front) and 4 (back) of a car's
			// animation at its light_positions, both sides, brighter the more they face
			// the camera, turning as they brighten; blended as a soft add (ONE,
			// ONE_MINUS_SRC_COLOR). Gone with the lights' damage. A chasing police car's
			// blue lights turn on its roof.
			glDepthMask(GL_FALSE);
			glEnable(GL_BLEND);
			glBlendFunc(GL_ONE, GL_ONE_MINUS_SRC_COLOR);
			for rc in &racers {
				let d = ((rc.car.chunk - c) % n + n) % n;
				if (d > 12 && d < n - 12) || rc.hidden {
					continue;
				}
				let (rr, uu, ff) = rc.car.axes();
				let dot = f[0] * ff[0] + f[1] * ff[1] + f[2] * ff[2];
				let glow = |frame: usize, at: &[f32; 3], bright: f32| {
					if bright <= 0.0 || frame >= rc.model.frames.len() {
						return;
					}
					let Some(m) = &rc.model.frames[frame].0 else { return };
					let mut side = -1;
					while side <= 1 {
						glPushMatrix();
						gl_mult_world(&rr, &uu, &ff, &rc.car.pos);
						glTranslatef(at[0] * side as f32, at[1], at[2]);
						gl_rotate(bright * 1500.0 * 360.0 / 1024.0, 0.0, 0.0, 1.0);
						glScalef(bright, bright, bright);
						r.draw_mesh(m, rc.model.frames[frame].1, None);
						glPopMatrix();
						side += 2;
					}
				};
				if rc.damage <= rc.damage_model.lights as f32 {
					glow(3, &rc.car.spec.light_front, 0.0f32.max(((0.0f32.min(dot)).abs() - 0.6) * 3.5));
					glow(4, &rc.car.spec.light_rear, 0.0f32.max(((0.0f32.min(-dot)).abs() - 0.6) * 3.5));
				}
				if rc.siren != 0
					&& let Some(beacon) = &beacon
				{
					let sc = 0.0f32.max((dot.abs() - 0.6) * 12.0);
					let mut side = -1;
					while side <= 1 && sc > 0.0 {
						glPushMatrix();
						gl_mult_world(&rr, &uu, &ff, &rc.car.pos);
						glTranslatef(3.2 * side as f32, 15.0, -2.8);
						gl_rotate(clock * 6000.0 * 360.0 / 1024.0 * side as f32, 0.0, 1.0, 0.0);
						glScalef(sc, sc, sc);
						r.draw_mesh(beacon, beacon_tex, None);
						glPopMatrix();
						side += 2;
					}
				}
			}
			glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
			glDisable(GL_BLEND);
			glDepthMask(GL_TRUE);
		}
		// The pick-ups turn (OnInit: anglespeed 600, in 1024ths of a turn a second) and
		// pulse (OnFramecall: 1 + 0.3 sin(pi t)); taken, they shrink away (OnFadeout).
		for b in &bonuses {
			let obj = &track.objects[b.obj];
			let d = ((obj.chunk - c) % n + n) % n;
			let Some(mesh) = &b.mesh else { continue };
			if b.state == Bonus::GONE || (d > 25 && d < n - 25) {
				continue;
			}
			let prefix: String = obj.animation.chars().take(7).collect();
			let mut pulse = 1.0 + (if equal_ci(&prefix, "pw_1pts") { 0.2 } else { 0.3 }) * (PI * clock).sin();
			if b.state == Bonus::FADING {
				pulse *= 0.0f32.max(1.0 - (clock - b.taken) / 0.5);
			}
			glPushMatrix();
			glTranslatef(obj.pos[0], obj.pos[1], obj.pos[2]);
			gl_rotate(obj.rot[1] + clock * 600.0 * 360.0 / 1024.0, 0.0, 1.0, 0.0);
			glScalef(pulse, pulse, pulse);
			r.draw_mesh(mesh, b.tex, None);
			glPopMatrix();
		}
		hud.flash = flash_message;
		hud.turbo = turbo;
		hud.damage = racers[0].damage;
		hud.message = message.clone();
		hud.message_time = message_time;
		hud.time_limit = time_limit;
		hud.flashes = flashes;
		let position = position_of(&racers, 0);
		hud.draw(&r, &racers[0].rules, &racers[0].car, position, field_size, if comm_on { Some(&comm) } else { None });
		sys_gl_end_frame();
	}
	sound.stop();
	if let Some(res) = result.as_deref_mut() {
		res.money = money;
		res.turbo = turbo;
	}
	if trace {
		for i in 0..field_size as usize {
			let rc = &racers[i];
			println!(
				"racer {} (car {}): chunk {}, progress {:.0}, {:.0} km/h{}",
				i,
				rc.entry,
				rc.car.chunk,
				rc.rules.progress,
				rc.car.speed_kmh(),
				if rc.player { " (player)" } else { "" }
			);
		}
	}
	let rules = &racers[0].rules;
	if let Some(res) = result.as_deref_mut() {
		res.finished = rules.phase == RaceRules::FINISHED;
		res.arrested = rules.phase == RaceRules::ARRESTED;
		res.time_up = rules.phase == RaceRules::TIME_UP;
		res.total_loss = rules.phase == RaceRules::TOTAL_LOSS;
		res.quit = !res.finished && !res.arrested && !res.time_up && !res.total_loss;
		res.lap_times = rules.lap_times.clone();
		res.order.clear();
		let distance = rules.distance().max(1) as f32;
		for i in 0..field_size as usize {
			let rc = &racers[i];
			// Not there yet: the time its pace so far would take.
			let time = if rc.rules.phase == RaceRules::FINISHED {
				rc.rules.time
			} else {
				rules.time * distance / rc.rules.progress.max(1.0) + 0.01 * i as f32
			};
			res.order.push(RaceResultEntry { car: rc.entry, time, player: rc.player });
		}
		res.order.sort_by(|a, b| a.time.partial_cmp(&b.time).unwrap_or(std::cmp::Ordering::Equal));
		for k in 0..res.order.len() {
			if res.order[k].player {
				res.position = k as i32 + 1;
			}
		}
	}
	print!(
		"race: {}, position {} of {}, time {}",
		if rules.phase == RaceRules::FINISHED {
			"finished"
		} else if rules.phase == RaceRules::ARRESTED {
			"arrested"
		} else {
			"not finished"
		},
		position_of(&racers, 0),
		field_size,
		format_time(rules.time)
	);
	for i in 0..rules.lap_times.len() {
		print!("{} lap {} {}", if i != 0 { "," } else { ";" }, i + 1, format_time(rules.lap_times[i]));
	}
	println!();
	0
}
