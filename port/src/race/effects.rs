//! The race's effects (Par_Main.cpp, gfx_wolk.cpp, gfx_bwlk.cpp, gfx_skid.cpp): sparks
//! and flying bits from knocks, smoke from a wrecked car and from sliding tyres, and the
//! tyres' skid marks. Positions are game units (decimetres), speeds game units/s. Each
//! can be turned off as game.ini [GFX OPTIONS] particles, clouds, skidmarks say.

use std::rc::Rc;

use crate::engine::mesh::Mesh;
use crate::engine::render::{Renderer, gl_rotate};
use crate::platform::gl::*;

#[derive(Clone, Copy, Default)]
struct Spark {
	p: [f32; 3],
	v: [f32; 3],
	age: f32,
	life: f32,
}

#[derive(Clone, Default)]
struct Bit {
	p: [f32; 3],
	v: [f32; 3],
	rot: [f32; 3],
	spin: f32,
	age: f32,
	life: f32,
	ground: f32,
	mesh: Option<Rc<Mesh>>,
}

#[derive(Clone, Copy, Default)]
struct Puff {
	p: [f32; 3],
	v: [f32; 3],
	age: f32,
	life: f32,
	size: f32,
	grow: f32,
	damage: bool,
}

#[derive(Clone)]
struct Mark {
	id: i32,
	open: bool,
	born: f32,
	alpha: i32,
	/// x, y, z each
	left: Vec<f32>,
	right: Vec<f32>,
}

impl Default for Mark {
	fn default() -> Self {
		Mark { id: -1, open: false, born: 0.0, alpha: 200, left: Vec::new(), right: Vec::new() }
	}
}

#[derive(Clone, Copy, Default)]
struct Piece {
	kind: i32,
	p: [f32; 3],
	v: [f32; 3],
	carry: [f32; 3],
	rot: [f32; 3],
	scale: [f32; 3],
	age: f32,
	life: f32,
	ground: f32,
	flap: f32,
	frame: i32,
	flap_down: bool,
	settled: bool,
}

pub struct Effects {
	pub particles: bool,
	pub clouds: bool,
	pub skidmarks: bool,
	pub fade_skidmarks: bool,
	/// s_sfx.pcx: sparks, tyre smoke, skid marks, bits
	pub sfx_tex: u32,
	/// L1RACER3.PCX: a wrecked car's smoke
	pub smoke_tex: u32,
	/// Par_Damage: P_DMG0..7
	pub bits: Vec<Option<Rc<Mesh>>>,
	pub scenery_meshes: [Vec<Option<Rc<Mesh>>>; Effects::SCENERY_KINDS as usize],

	spark_list: Vec<Spark>,
	bit_list: Vec<Bit>,
	puffs: Vec<Puff>,
	marks: Vec<Mark>,
	pieces: Vec<Piece>,
	/// the sprays' fractions of a piece
	owed: [f32; Effects::SCENERY_KINDS as usize],
	rnd: u32,
}

impl Default for Effects {
	fn default() -> Self {
		Effects {
			particles: true,
			clouds: true,
			skidmarks: true,
			fade_skidmarks: true,
			sfx_tex: 0,
			smoke_tex: 0,
			bits: Vec::new(),
			scenery_meshes: Default::default(),
			spark_list: Vec::new(),
			bit_list: Vec::new(),
			puffs: Vec::new(),
			marks: Vec::new(),
			pieces: Vec::new(),
			owed: [0.0; Effects::SCENERY_KINDS as usize],
			rnd: 12345,
		}
	}
}

fn random(rnd: &mut u32, lo: f32, hi: f32) -> f32 {
	*rnd = rnd.wrapping_mul(1103515245).wrapping_add(12345);
	lo + (hi - lo) * ((*rnd >> 16) & 0x7fff) as f32 / 32767.0
}

#[derive(Clone, Copy, PartialEq)]
enum Landing {
	Fly,
	Settle,
	Bounce,
	Spray,
	Vanish,
}

/// Per system, from the constructors and the particles' updates. A burst has base - 307.69
/// dt pieces; each starts at rand(-spread, spread) across the ground, flies out at that
/// offset times out and rand(up) upwards, lives rand(life) seconds, falls with gravity and
/// tumbles rand(tumble) radians a frame. The emitter itself moves off at 11 game units/s,
/// slowing by carry_stop a second (MAIL: x 0.99 a frame).
struct SceneryKind {
	base: i32,
	spread: f32,
	out: f32,
	up_lo: f32,
	up_hi: f32,
	life_lo: f32,
	life_hi: f32,
	gravity: f32,
	tumble_lo: f32,
	tumble_hi: f32,
	landing: Landing,
	carry_stop: f32,
}

#[rustfmt::skip]
#[allow(clippy::too_many_arguments)]
const fn sk(base: i32, spread: f32, out: f32, up_lo: f32, up_hi: f32, life_lo: f32, life_hi: f32, gravity: f32,
	tumble_lo: f32, tumble_hi: f32, landing: Landing, carry_stop: f32) -> SceneryKind {
	SceneryKind { base, spread, out, up_lo, up_hi, life_lo, life_hi, gravity, tumble_lo, tumble_hi, landing, carry_stop }
}

#[rustfmt::skip]
const SCENERY_KINDS: [SceneryKind; Effects::SCENERY_KINDS as usize] = [
	sk(40, 5.0, 2.0, 7.5, 10.0, 4.0, 8.0, 9.81, -0.1, 0.5, Landing::Settle, 100.0), // 0x45bfe0
	sk(35, 20.0, 4.0, 20.0, 30.0, 4.0, 8.0, 0.0, 0.0, 0.0, Landing::Fly, 0.0), // 0x458f50
	sk(40, 5.0, 1.0, 20.0, 30.0, 4.0, 8.0, 20.0, -0.05, 0.25, Landing::Settle, -1.0), // 0x45c9c0
	sk(35, 5.0, 1.0, 70.0, 100.0, 4.0, 8.0, 150.0, -0.05, 0.25, Landing::Bounce, 50.0), // 0x460bb0
	sk(35, 5.0, 4.0, 20.0, 30.0, 4.0, 8.0, 9.81, -0.05, 0.25, Landing::Settle, 150.0), // 0x45ef00
	sk(15, 0.7, 0.0, 1.0, 2.0, 3.0, 4.0, 0.0, 0.0, 0.0, Landing::Spray, 50.0), // 0x45a1d0
	sk(15, 2.7, 4.0, 0.0, 0.0, 2.0, 8.0, 150.0, -0.05, 0.25, Landing::Bounce, 150.0), // 0x45a9f0
	sk(20, 0.7, 0.0, 1.0, 2.0, 1.0, 2.0, 0.0, 0.0, 0.0, Landing::Spray, 50.0), // 0x461570
	sk(25, 3.7, 1.8, 10.0, 25.0, 0.5, 1.5, 150.0, 0.0, 0.0, Landing::Vanish, 50.0), // 0x461dc0
];

impl Effects {
	/// The scenery's particles (Par_Leafs, Par_Birds, Par_Mail, Par_Trash, Par_Paper,
	/// Par_Dirtpieces; the systems of types 2-6 and 8-11): small meshes of s_sfx.pcx (the
	/// animations par_Leaf, par_Bird, par_mail, par_trash, par_paper, par_dirt,
	/// par_dirtpieces, par_water, par_waterdrops).
	pub const LEAVES: i32 = 0;
	pub const BIRDS: i32 = 1;
	pub const MAIL: i32 = 2;
	pub const TRASH: i32 = 3;
	pub const PAPER: i32 = 4;
	pub const MUD: i32 = 5;
	pub const MUD_BITS: i32 = 6;
	pub const WATER: i32 = 7;
	pub const WATER_DROPS: i32 = 8;
	pub const SCENERY_KINDS: i32 = 9;

	fn random(&mut self, lo: f32, hi: f32) -> f32 {
		random(&mut self.rnd, lo, hi)
	}

	/// Type 1: five pairs of sparks at p, thrown out to the sides.
	///
	/// 0x45f6f0: offsets rand(-1, 1) across, speeds rand(-15, 15) times them across and
	/// rand(2, 5) up (game units/s; the port takes them as metres a second), life rand(0, 1).
	pub fn sparks(&mut self, p: &[f32; 3]) {
		if !self.particles {
			return;
		}
		for _ in 0..5 {
			let mut s = Spark::default();
			let ox = self.random(-1.0, 1.0);
			let oz = self.random(-1.0, 1.0);
			s.p[0] = p[0] + ox;
			s.p[1] = p[1];
			s.p[2] = p[2] + oz;
			s.v[0] = self.random(-15.0 * ox.abs(), 15.0 * ox.abs()) * 10.0;
			s.v[1] = self.random(2.0, 5.0) * 10.0;
			s.v[2] = self.random(-15.0 * oz.abs(), 15.0 * oz.abs()) * 10.0;
			s.age = 0.0;
			s.life = self.random(0.2, 1.0);
			self.spark_list.push(s);
		}
	}

	/// Type 7: pieces of car from a knock of the given impulse, flying out along dir
	/// (a horizontal heading, radians), bouncing on the ground at ground_y.
	///
	/// 0x459de0: 1 + impulse / 2000 pieces, out along the knock's heading +-35 degrees, 20..40
	/// up; gravity 100, they bounce (x -0.8) on the ground and slow down; life 0.5..1 s.
	pub fn car_bits(&mut self, p: &[f32; 3], dir: f32, impulse: f32, ground_y: f32) {
		if !self.particles || self.bits.is_empty() {
			return;
		}
		let pick = self.random(0.0, self.bits.len() as f32 - 0.01) as usize;
		let mesh = self.bits[pick].clone();
		let n = (1 + (0.0005 * impulse) as i32).min(12);
		for _ in 0..n {
			let mut b = Bit::default();
			let a = dir + self.random(-35.0, 35.0) * 3.14159265 / 180.0;
			let sp = 15.0 + self.random(-15.0, 15.0);
			b.p[0] = p[0];
			b.p[1] = p[1];
			b.p[2] = p[2];
			b.v[0] = a.sin() * sp * 4.0;
			b.v[1] = 20.0 + self.random(0.0, 20.0);
			b.v[2] = a.cos() * sp * 4.0;
			b.rot[0] = self.random(0.0, 360.0);
			b.rot[1] = self.random(0.0, 360.0);
			b.rot[2] = self.random(0.0, 360.0);
			b.spin = self.random(0.0, 10.0) * 36.0;
			b.age = 0.0;
			b.life = self.random(0.5, 1.0);
			b.ground = ground_y;
			b.mesh = mesh.clone();
			self.bit_list.push(b);
		}
	}

	/// A puff of smoke: a wrecked car's (gfx_bwlk) or a sliding tyre's (gfx_wolk); vel is
	/// the car's, m/s.
	pub fn smoke(&mut self, p: &[f32; 3], vel: &[f32; 3], damage: bool) {
		if !self.clouds {
			return;
		}
		if self.puffs.len() >= 140 {
			self.puffs.remove(0);
		}
		let mut f = Puff::default();
		f.p = *p;
		// The car's speed in m/s, and a little up (15 dt).
		f.v[0] = vel[0];
		f.v[1] = 15.0 / 60.0;
		f.v[2] = vel[2];
		f.age = 0.0;
		f.life = if damage { 6.0 } else { 4.0 };
		f.size = 3.0;
		f.grow = if damage { 47.0 } else { 33.0 };
		f.damage = damage;
		self.puffs.push(f);
	}

	/// A wheel's skid mark: extended while level (0..10) is over 3, started anew after it
	/// was below 4. id picks the mark (two per car).
	pub fn skid(&mut self, id: i32, p: &[f32; 3], across: &[f32; 3], level: i32, time: f32) {
		if !self.skidmarks {
			return;
		}
		let mut m: Option<usize> = None;
		for (i, k) in self.marks.iter().enumerate() {
			if k.id == id && k.open {
				m = Some(i);
			}
		}
		if level <= 3 {
			if let Some(i) = m {
				self.marks[i].open = false;
			}
			return;
		}
		if let Some(i) = m
			&& self.marks[i].left.len() >= 49 * 3
		{
			self.marks[i].open = false;
			m = None;
		}
		let i = match m {
			Some(i) => i,
			None => {
				if self.marks.len() >= 20 {
					self.marks.remove(0);
				}
				self.marks.push(Mark::default());
				let k = self.marks.last_mut().unwrap();
				k.id = id;
				k.open = true;
				k.born = time;
				k.alpha = (200 - 16 * (level - 4)).clamp(0, 255);
				self.marks.len() - 1
			}
		};
		let m = &mut self.marks[i];
		for a in 0..3 {
			m.left.push(p[a] - across[a] * 2.0);
			m.right.push(p[a] + across[a] * 2.0);
		}
	}

	/// A burst at p (on the ground), carried off along dir (horizontal, unit length). speed:
	/// the car's, m/s, which stretches the sprays. dt: the frame time, which makes the
	/// original's bursts smaller (none from 0.13 s); the sprays thrown each frame (MUD,
	/// MUD_BITS, WATER, WATER_DROPS) come at the rate the original had at 30 frames/s.
	pub fn scenery(&mut self, kind: i32, p: &[f32; 3], dir: &[f32; 3], speed: f32, dt: f32) {
		let ki = kind as usize;
		if !self.particles || self.scenery_meshes[ki].is_empty() {
			return;
		}
		let k = &SCENERY_KINDS[ki];
		let stream =
			kind == Effects::MUD || kind == Effects::MUD_BITS || kind == Effects::WATER || kind == Effects::WATER_DROPS;
		let n: i32;
		if stream {
			self.owed[ki] += 0.0f32.max(k.base as f32 - 307.69 / 30.0) * 30.0 * dt;
			n = self.owed[ki] as i32;
			self.owed[ki] -= n as f32;
		} else {
			n = 0.max((k.base as f32 - dt.min(0.1) * 307.69) as i32);
		}
		for _ in 0..n {
			if self.pieces.len() >= 4000 {
				self.pieces.remove(0);
			}
			let mut q = Piece { kind, ..Default::default() };
			let ox = self.random(-k.spread, k.spread);
			let oz = self.random(-k.spread, k.spread);
			q.p[0] = p[0] + ox;
			q.p[1] = p[1] + 0.12;
			q.p[2] = p[2] + oz;
			q.v[0] = ox * k.out;
			q.v[1] = if kind == Effects::MUD_BITS {
				0.4 * speed * 10.0 * self.random(0.5, 1.0)
			} else {
				self.random(k.up_lo, k.up_hi)
			};
			q.v[2] = oz * k.out;
			if k.landing == Landing::Spray {
				q.p[1] += self.random(k.up_lo, k.up_hi) - k.up_lo;
				q.v[1] = 0.0;
			}
			for a in 0..3 {
				q.carry[a] = dir[a] * 11.0;
				q.rot[a] = self.random(0.0, 6.2832);
				q.scale[a] = 1.0;
			}
			if k.landing == Landing::Spray {
				// 0x45a680: stretched along the way by the car's speed, each frame anew.
				q.rot[0] = 0.0;
				q.rot[2] = 0.0;
				q.rot[1] = dir[0].atan2(dir[2]);
				let water = kind == Effects::WATER;
				q.scale[0] =
					0.1f32.max(self.random(if water { 0.03 } else { 0.02 }, if water { 0.05 } else { 0.04 }) * speed);
				q.scale[2] =
					0.1f32.max(self.random(if water { 0.14 } else { 0.25 }, if water { 0.18 } else { 0.29 }) * speed);
			}
			q.age = 0.0;
			q.life = self.random(k.life_lo, k.life_hi);
			q.ground = p[1];
			q.flap = self.random(0.0, 0.025);
			q.frame = self.random(0.0, self.scenery_meshes[ki].len() as f32 - 0.01) as i32;
			q.flap_down = self.random(0.0, 1.0) < 0.5;
			q.settled = false;
			self.pieces.push(q);
		}
	}

	pub fn update(&mut self, dt: f32, time: f32) {
		// The original stepped its particles once a frame at some 30 frames a second.
		let frames = dt * 30.0;
		let rnd = &mut self.rnd;
		let birds = self.scenery_meshes[Effects::BIRDS as usize].len() as i32;
		for q in &mut self.pieces {
			let k = &SCENERY_KINDS[q.kind as usize];
			q.age += dt;
			let c = (q.carry[0] * q.carry[0] + q.carry[2] * q.carry[2]).sqrt();
			let keep = if k.carry_stop < 0.0 {
				0.99f32.powf(frames)
			} else if c > 0.0 {
				0.0f32.max(c - k.carry_stop * dt) / c
			} else {
				0.0
			};
			for v in &mut q.carry {
				*v *= keep;
			}
			for a in 0..3 {
				q.p[a] += q.carry[a] * dt;
			}
			if q.kind == Effects::BIRDS {
				// 0x4594a0: the wings beat through the frames and back, a frame each 25 ms.
				q.flap += dt;
				if q.flap > 0.025 {
					let last = birds - 1;
					if !q.flap_down && q.frame >= last {
						q.flap_down = true;
					} else if q.flap_down && q.frame <= 0 {
						q.flap_down = false;
					}
					q.frame = (q.frame + if q.flap_down { -1 } else { 1 }).clamp(0, last);
					q.flap = 0.0;
				}
			}
			if q.settled || k.landing == Landing::Spray {
				continue;
			}
			q.v[1] -= k.gravity * dt;
			for a in 0..3 {
				q.p[a] += q.v[a] * dt;
			}
			if k.landing != Landing::Fly && q.p[1] <= q.ground + 0.11 && q.v[1] <= 0.0 {
				if k.landing == Landing::Vanish {
					q.age = q.life;
					continue;
				}
				// 0x461150: a bounce while still falling fast, then it lies flat.
				if k.landing == Landing::Bounce && q.v[1] < -3.0 {
					q.p[1] = q.ground + 0.12;
					q.v[1] *= -random(rnd, 0.5, 0.9);
					q.v[0] *= 0.5;
					q.v[2] *= 0.5;
				} else {
					q.p[1] = q.ground + 0.1;
					q.rot[0] = 0.0;
					q.rot[2] = 0.0;
					q.settled = true;
					continue;
				}
			}
			for r in &mut q.rot {
				*r += random(rnd, k.tumble_lo, k.tumble_hi) * frames;
			}
		}
		self.pieces.retain(|q| !(q.age >= q.life));
		for s in &mut self.spark_list {
			s.v[1] -= 100.0 * dt;
			for a in 0..3 {
				s.p[a] += s.v[a] * dt;
			}
			s.age += dt;
		}
		self.spark_list.retain(|s| !(s.age >= s.life));
		for b in &mut self.bit_list {
			b.v[1] -= 100.0 * dt;
			for a in 0..3 {
				b.p[a] += b.v[a] * dt;
				if a != 1 {
					b.v[a] -= b.v[a] * dt;
				}
			}
			if b.p[1] < b.ground && b.v[1] < 0.0 {
				b.p[1] = b.ground;
				b.v[1] *= -0.8;
			}
			b.rot[0] += b.spin * dt;
			b.rot[2] += b.spin * dt * 0.7;
			b.age += dt;
		}
		self.bit_list.retain(|b| !(b.age >= b.life));
		// The puffs drift (p += v dt 10: m/s to game units) and stop soon (v *= min(0.99,
		// 15 dt) a frame, 20 dt for a wreck's), growing where they are.
		for f in &mut self.puffs {
			for a in 0..3 {
				f.p[a] += f.v[a] * dt * 10.0;
			}
			let k = 0.99f32.min((if f.damage { 20.0 } else { 15.0 }) * dt);
			for v in &mut f.v {
				*v *= k;
			}
			f.size += f.grow / f.life * dt;
			f.age += dt;
		}
		self.puffs.retain(|f| !(f.age >= f.life));
		// Skid marks last about 20 s.
		self.marks.retain(|m| !(!m.open && time - m.born > 20.0));
	}

	/// cam_right / cam_up: the view's axes, for the smoke facing the camera.
	pub fn draw(&self, r: &Renderer, cr: &[f32; 3], cu: &[f32; 3], time: f32) {
		// Flat things seen from either side.
		glDisable(GL_CULL_FACE);
		glDepthMask(GL_FALSE);
		glEnable(GL_BLEND);
		glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE as GLint);

		// Skid marks: darker the harder the slide (the original blends them inverted).
		r.bind(self.sfx_tex);
		glDisable(GL_ALPHA_TEST); // bind's colour-key test would drop the see-through
		glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
		for m in &self.marks {
			let fade = if self.fade_skidmarks { (1.0 - (time - m.born) / 20.0).clamp(0.0, 1.0) } else { 1.0 };
			let a = (1.0 - m.alpha as f32 / 255.0) * fade;
			glColor4f(0.25, 0.25, 0.25, a);
			glBegin(GL_TRIANGLE_STRIP);
			let mut i = 0;
			while i + 2 < m.left.len() {
				glTexCoord2f(0.453125, 0.15625);
				glVertex3f(m.left[i], m.left[i + 1] + 0.3, m.left[i + 2]);
				glTexCoord2f(0.539063, 0.15625);
				glVertex3f(m.right[i], m.right[i + 1] + 0.3, m.right[i + 2]);
				i += 3;
			}
			glEnd();
		}

		// Sparks: a red and yellow head with a dark tail fading out.
		glDisable(GL_TEXTURE_2D);
		glBegin(GL_TRIANGLES);
		for s in &self.spark_list {
			let a = if s.age < s.life / 2.0 { 1.0 } else { 1.0 - (s.age - s.life / 2.0) / (s.life / 2.0) };
			glColor4f(1.0, 0.0, 0.0, 1.0);
			glVertex3f(s.p[0], s.p[1], s.p[2]);
			glColor4f(1.0, 1.0, 0.0, 1.0);
			glVertex3f(s.p[0] + 0.5, s.p[1], s.p[2]);
			glColor4f(0.0, 0.0, 0.0, a);
			glVertex3f(s.p[0] - s.v[0] * 0.025, s.p[1] - s.v[1] * 0.025 + 0.25, s.p[2] - s.v[2] * 0.025);
		}
		glEnd();
		glEnable(GL_TEXTURE_2D);

		// Smoke: puffs facing the camera, a bright middle fading out to the edges; tyre smoke
		// adds light (SRCALPHA, ONE), a wreck's covers. Farthest first would be right; the
		// port draws them in the order made.
		for pass in 0..2 {
			let damage = pass == 1;
			r.bind(if damage { self.smoke_tex } else { self.sfx_tex });
			glDisable(GL_ALPHA_TEST);
			glBlendFunc(GL_SRC_ALPHA, if damage { GL_ONE_MINUS_SRC_ALPHA } else { GL_ONE });
			let u0 = if damage { 0.5 } else { 0.008 };
			let u1 = if damage { 0.5898 } else { 0.3954 };
			let v0 = if damage { 0.1465 } else { 0.008 };
			let v1 = if damage { 0.2344 } else { 0.3268 };
			let mid: [f32; 2] = [if damage { 0.5449 } else { 0.1997 }, if damage { 0.1904 } else { 0.1634 }];
			for f in &self.puffs {
				if f.damage != damage {
					continue;
				}
				let fade = 1.0 - f.age / f.life;
				let h = f.size / 2.0;
				let mut corner = [[0.0f32; 3]; 4];
				let sx: [f32; 4] = [-1.0, -1.0, 1.0, 1.0];
				let sy: [f32; 4] = [-1.0, 1.0, 1.0, -1.0];
				for c in 0..4 {
					for a in 0..3 {
						corner[c][a] = f.p[a] + (cr[a] * sx[c] + cu[a] * sy[c]) * h;
					}
				}
				let cu_: [f32; 4] = [u0, u0, u1, u1];
				let cv_: [f32; 4] = [v1, v0, v0, v1];
				glBegin(GL_TRIANGLE_FAN);
				if damage {
					glColor4f(0.67, 0.67, 0.67, 0.5 * fade);
				} else {
					glColor4f(0.63, 0.63, 0.78, 0.5 * fade);
				}
				glTexCoord2f(mid[0], mid[1]);
				glVertex3f(f.p[0], f.p[1], f.p[2]);
				for c in 0..=4 {
					if damage {
						glColor4f(0.2, 0.2, 0.2, 0.0);
					} else {
						glColor4f(0.39, 0.39, 0.39, 0.06 * fade);
					}
					glTexCoord2f(cu_[c % 4], cv_[c % 4]);
					glVertex3f(corner[c % 4][0], corner[c % 4][1], corner[c % 4][2]);
				}
				glEnd();
			}
		}
		glColor4f(1.0, 1.0, 1.0, 1.0);
		glDisable(GL_BLEND);
		glDepthMask(GL_TRUE);

		// The flying bits: small meshes of s_sfx.pcx, tumbling.
		for b in &self.bit_list {
			let Some(mesh) = &b.mesh else { continue };
			glPushMatrix();
			glTranslatef(b.p[0], b.p[1], b.p[2]);
			gl_rotate(b.rot[1], 0.0, 1.0, 0.0);
			gl_rotate(b.rot[0], 1.0, 0.0, 0.0);
			gl_rotate(b.rot[2], 0.0, 0.0, 1.0);
			r.draw_mesh(mesh, self.sfx_tex, None);
			glPopMatrix();
		}
		for q in &self.pieces {
			let Some(m) = &self.scenery_meshes[q.kind as usize][q.frame as usize] else { continue };
			glPushMatrix();
			glTranslatef(q.p[0], q.p[1], q.p[2]);
			gl_rotate(q.rot[1] * 57.2958, 0.0, 1.0, 0.0);
			gl_rotate(q.rot[0] * 57.2958, 1.0, 0.0, 0.0);
			gl_rotate(q.rot[2] * 57.2958, 0.0, 0.0, 1.0);
			glScalef(q.scale[0], q.scale[1], q.scale[2]);
			r.draw_mesh(m, self.sfx_tex, None);
			glPopMatrix();
		}
	}
}
