//! The stage's loose objects (tob_main.cpp): the original makes them Ipion bodies
//! (FUN_004a79d0: mass, friction, elasticity) that the cars knock about. The port gives each
//! a circle on the ground that slides, spins, bounces, tips over and knocks into the others.
//!
//!   type  2 pilon               10 kg, friction 1.0, elasticity 0.6, sound PION_HIT_CAR
//!         3 road works sign     50 kg, 0.9, 0.2, sound PAAL_HIT_CAR
//!         7 radar trap         150 kg, 0.9, 0.2, sound PAAL_HIT_CAR
//!        10 police blockade   2000 kg, 1.4, 0.2
//!        18 lamp post         2000 kg, 0.9, 0, hinged at its foot: it only falls over
//!        19 rubbish bin       2000 kg, 0.9, 0.2
//!        20 mailbox            500 kg, 0.9, 0.2
//!        21 light obstacle     400 kg, 0.9, 0.2
//!        22 paper               10 kg, 0.9, 0.2, sound PION_HIT_CAR
//!        29 scripted          bonus.dso OnInit_<animation>: InitPhysics(mass, friction,
//!                             elasticity, unmovable); without it, no physics

use std::collections::BTreeMap;
use std::rc::Rc;

use crate::engine::collision::CollisionWorld;
use crate::engine::mesh::Mesh;
use crate::engine::render::{Renderer, gl_rotate};
use crate::engine::texture::TextureManager;
use crate::game::car::Car;
use crate::game::track::{MeshCache, Track};
use crate::platform::gl::*;
use crate::res::archive::{latin1, read_file_ci};

#[derive(Clone)]
pub struct LooseObject {
	/// Its index in the track's objects.
	pub obj: usize,
	pub mesh: Option<Rc<Mesh>>,
	pub tex: u32,
	pub mass: f32,
	pub friction: f32,
	pub elasticity: f32,
	pub hinged: bool,
	pub sound: Option<&'static str>,
	/// A scripted one's sample: when knocked, or all the while.
	pub sound3d: String,
	pub sound3d_loops: bool,
	/// Game units.
	pub radius: f32,
	pub height: f32,
	pub pos: [f32; 3],
	/// m/s
	pub vel: [f32; 3],
	/// Degrees, degrees/s, on top of its own rotation.
	pub yaw: f32,
	pub spin: f32,
	/// Degrees about a level axis.
	pub tilt: f32,
	pub tilt_rate: f32,
	pub tilt_axis: [f32; 2],
	pub moving: bool,
	/// Its particles came out since it was last at rest.
	pub burst: bool,
	/// It has just come to lie on the ground (cleared by the race).
	pub fell: bool,
	pub chunk: i32,
}

impl Default for LooseObject {
	fn default() -> Self {
		LooseObject {
			obj: 0,
			mesh: None,
			tex: 0,
			mass: 100.0,
			friction: 1.0,
			elasticity: 0.2,
			hinged: false,
			sound: None,
			sound3d: String::new(),
			sound3d_loops: false,
			radius: 5.0,
			height: 0.0,
			pos: [0.0; 3],
			vel: [0.0; 3],
			yaw: 0.0,
			spin: 0.0,
			tilt: 0.0,
			tilt_rate: 0.0,
			tilt_axis: [1.0, 0.0],
			moving: false,
			burst: false,
			fell: false,
			chunk: 0,
		}
	}
}

#[derive(Default)]
pub struct LooseObjects {
	pub list: Vec<LooseObject>,
	/// The track object's index -> its place in list.
	index: BTreeMap<usize, usize>,
}

#[derive(Clone)]
struct ScriptPhysics {
	mass: f32,
	friction: f32,
	elasticity: f32,
	sound: String,
	sound_loops: bool,
}

fn lower(s: &str) -> String {
	s.chars().map(|c| c.to_ascii_lowercase()).collect()
}

fn max(a: f32, b: f32) -> f32 {
	if a < b { b } else { a }
}

fn min(a: f32, b: f32) -> f32 {
	if b < a { b } else { a }
}

/// bonus.dso is compiled DaviScript. Each scripted object's OnInit_<animation> pushes its
/// InitPhysics arguments as double literals (the bytes 03 01 01 00 01 and the double) and
/// calls CScriptedObject's method 3 (3c 03 00); a string literal (03 01 03 00 03, a u16
/// length and the text) names the sound.ini sample of its InitSound3D: heard when it is
/// knocked, or all the while when its OnFramecall does anything (the barrel organ's).
/// Only that much is read here.
fn read_scripted(dir: &str) -> BTreeMap<String, ScriptPhysics> {
	let mut out = BTreeMap::new();
	let Some(d) = read_file_ci(dir, "Bonus.dso") else {
		return out;
	};
	const LIT: [u8; 5] = [0x03, 0x01, 0x01, 0x00, 0x01];
	const STR: [u8; 5] = [0x03, 0x01, 0x03, 0x00, 0x03];
	const INIT: &[u8] = b"OnInit_";
	let starts_on = |p: usize| d[p] == b'O' && d[p + 1] == b'n' && d[p + 2].is_ascii_uppercase();
	let mut i = 0usize;
	while i + INIT.len() + 1 < d.len() {
		if &d[i..i + INIT.len()] != INIT {
			i += 1;
			continue;
		}
		let s = i + INIT.len();
		let mut e = s;
		while e < d.len() && d[e] != 0 {
			e += 1;
		}
		let name = lower(&latin1(&d[s..e]));
		let mut end = e;
		while end + 2 < d.len() && !starts_on(end) {
			end += 1;
		}
		let mut vals: Vec<f32> = Vec::new();
		let mut sound = String::new();
		let mut calls_init = false;
		let mut k = e;
		while k + 13 <= end {
			if d[k..k + 5] == LIT {
				let mut b = [0u8; 8];
				b.copy_from_slice(&d[k + 5..k + 13]);
				vals.push(f64::from_le_bytes(b) as f32);
			}
			if d[k..k + 5] == STR {
				let len = d[k + 5] as usize | (d[k + 6] as usize) << 8;
				if k + 7 + len <= end && sound.is_empty() {
					sound = latin1(&d[k + 7..k + 7 + len]);
				}
			}
			if d[k] == 0x3c && d[k + 1] == 0x03 && d[k + 2] == 0x00 {
				calls_init = true;
			}
			k += 1;
		}
		// OnFramecall_<name>: more than the empty function's bytes.
		let mut loops = false;
		let mut fc: Vec<u8> = b"OnFramecall_".to_vec();
		fc.extend_from_slice(&d[s..e]);
		let mut k = end;
		while k + fc.len() < d.len() && k < end + 4096 {
			if d[k..k + fc.len()] == fc[..] {
				let f = k + fc.len();
				let mut g = f;
				while g + 2 < d.len() && !starts_on(g) {
					g += 1;
				}
				loops = g - f > 48;
				break;
			}
			k += 1;
		}
		if calls_init && vals.len() >= 3 {
			out.insert(
				name,
				ScriptPhysics { mass: vals[0], friction: vals[1], elasticity: vals[2], sound, sound_loops: loops },
			);
		}
		i = e + 1;
	}
	out
}

fn rotate(v: &mut [f32; 3], deg: f32, x: f32, y: f32, z: f32) {
	let a = deg * 3.14159265f32 / 180.0;
	let c = a.cos();
	let s = a.sin();
	let t = 1.0 - c;
	let m: [f32; 9] = [
		t * x * x + c,
		t * x * y + s * z,
		t * x * z - s * y,
		t * x * y - s * z,
		t * y * y + c,
		t * y * z + s * x,
		t * x * z + s * y,
		t * y * z - s * x,
		t * z * z + c,
	];
	let mut r = [0f32; 3];
	for i in 0..3 {
		r[i] = m[i] * v[0] + m[3 + i] * v[1] + m[6 + i] * v[2];
	}
	*v = r;
}

/// Two different elements of a slice, both mutable.
fn pair_mut<T>(v: &mut [T], i: usize, k: usize) -> (&mut T, &mut T) {
	if i < k {
		let (lo, hi) = v.split_at_mut(k);
		(&mut lo[i], &mut hi[0])
	} else {
		let (lo, hi) = v.split_at_mut(i);
		(&mut hi[0], &mut lo[k])
	}
}

impl LooseObjects {
	pub fn build(&mut self, track: &Track, meshes: &mut MeshCache, textures: &TextureManager, dir: &str) {
		self.list.clear();
		self.index.clear();
		let scripted = read_scripted(dir);
		for (oi, o) in track.objects.iter().enumerate() {
			let mut l = LooseObject { obj: oi, ..Default::default() };
			match o.r#type {
				2 => {
					l.mass = 10.0;
					l.friction = 1.0;
					l.elasticity = 0.6;
					l.sound = Some("PION_HIT_CAR");
				}
				3 => {
					l.mass = 50.0;
					l.friction = 0.9;
					l.sound = Some("PAAL_HIT_CAR");
				}
				7 => {
					l.mass = 150.0;
					l.friction = 0.9;
					l.sound = Some("PAAL_HIT_CAR");
				}
				10 => {
					l.mass = 2000.0;
					l.friction = 1.4;
				}
				18 => {
					l.mass = 2000.0;
					l.friction = 0.9;
					l.elasticity = 0.0;
					l.hinged = true;
				}
				19 => {
					l.mass = 2000.0;
					l.friction = 0.9;
				}
				20 => {
					l.mass = 500.0;
					l.friction = 0.9;
				}
				21 => {
					l.mass = 400.0;
					l.friction = 0.9;
				}
				22 => {
					l.mass = 10.0;
					l.friction = 0.9;
					l.sound = Some("PION_HIT_CAR");
				}
				29 => {
					let Some(sp) = scripted.get(&lower(&o.animation)) else {
						continue;
					};
					l.mass = max(sp.mass, 1.0);
					l.friction = sp.friction;
					l.elasticity = sp.elasticity;
					l.sound3d = sp.sound.clone();
					l.sound3d_loops = sp.sound_loops;
				}
				_ => continue,
			}
			let Some(f) = track.animation(&o.animation) else {
				continue;
			};
			if f.is_empty() {
				continue;
			}
			let Some(mesh) = meshes.get(&f[0].mesh) else {
				continue;
			};
			l.tex = textures.get(&f[0].texture);
			// The footprint, turned as placed, and the height.
			let mut r2 = 0.0f32;
			for v in &mesh.vertices {
				let mut p = [v.x, v.y, v.z];
				rotate(&mut p, o.rot[2], 0.0, 0.0, 1.0);
				rotate(&mut p, o.rot[0], 1.0, 0.0, 0.0);
				r2 = max(r2, p[0] * p[0] + p[2] * p[2]);
				l.height = max(l.height, p[1]);
			}
			l.mesh = Some(mesh);
			// A circle round a long thing (a fence) reaches past it: take a little less.
			l.radius = max(2.0, r2.sqrt() * 0.8);
			l.pos = o.pos;
			l.chunk = o.chunk;
			self.index.insert(oi, self.list.len());
			self.list.push(l);
		}
	}

	/// Whether the track's object `o` (its index) is a loose one.
	pub fn loose(&self, o: usize) -> bool {
		self.index.contains_key(&o)
	}

	pub fn find(&mut self, o: usize) -> Option<&mut LooseObject> {
		let i = *self.index.get(&o)?;
		Some(&mut self.list[i])
	}

	/// Pushes a car and the objects it touches apart, sharing out the speed they met at. The
	/// hardest knock's speed (m/s, 0 if none) and object (its index in list).
	pub fn hit(&mut self, car: &mut Car) -> (f32, Option<usize>) {
		let mut which = None;
		let mut hardest = 0.0f32;
		let fx = car.yaw.sin();
		let fz = car.yaw.cos();
		let fa = car.spec.wheel_front[2].abs();
		let ra = car.spec.wheel_rear[2].abs();
		let circles: [[f32; 2]; 2] =
			[[car.pos[0] + fx * fa, car.pos[2] + fz * fa], [car.pos[0] - fx * ra, car.pos[2] - fz * ra]];
		let cr = max(car.spec.wheel_front[0], car.spec.wheel_rear[0]) + 3.5;
		for (li, l) in self.list.iter_mut().enumerate() {
			// Lying down, it is driven over.
			if l.tilt > 60.0 || l.pos[1] + l.height < car.pos[1] || l.pos[1] > car.pos[1] + 15.0 {
				continue;
			}
			let dx0 = l.pos[0] - car.pos[0];
			let dz0 = l.pos[2] - car.pos[2];
			let reach = l.radius + cr + fa + ra;
			if dx0 * dx0 + dz0 * dz0 > reach * reach {
				continue;
			}
			for c in &circles {
				let dx = l.pos[0] - c[0];
				let dz = l.pos[2] - c[1];
				let d2 = dx * dx + dz * dz;
				let r = l.radius + cr;
				if d2 >= r * r || d2 < 1e-6 {
					continue;
				}
				let d = d2.sqrt();
				let nx = dx / d;
				let nz = dz / d;
				// The light ones are pushed away; the car is pushed off the heavy ones.
				let share = if l.hinged { 0.0 } else { car.spec.mass / (car.spec.mass + l.mass) };
				l.pos[0] += nx * (r - d) * share;
				l.pos[2] += nz * (r - d) * share;
				car.pos[0] -= nx * (r - d) * (1.0 - share);
				car.pos[2] -= nz * (r - d) * (1.0 - share);
				let rel = (l.vel[0] - car.vel[0]) * nx + (l.vel[2] - car.vel[2]) * nz;
				if rel >= 0.0 {
					break;
				}
				// A lamp post gives way as it bends over: a lighter body against the car.
				let m = if l.hinged { 300.0 } else { l.mass };
				let j = -(1.0 + l.elasticity) * rel / (1.0 / car.spec.mass + 1.0 / m);
				car.vel[0] -= j / car.spec.mass * nx;
				car.vel[2] -= j / car.spec.mass * nz;
				let dv = j / m;
				if !l.hinged {
					l.vel[0] += dv * nx;
					l.vel[2] += dv * nz;
					l.vel[1] += min(dv * 0.3, 8.0);
					// Struck off its middle, it turns.
					let side = if (car.vel[0] * nz - car.vel[2] * nx) >= 0.0 { 1.0 } else { -1.0 };
					l.spin += side * min(dv * 40.0, 720.0);
				}
				// Taller than wide and knocked hard enough, it topples away from the knock.
				if if l.hinged { -rel > 4.0 } else { l.height > l.radius * 1.2 && dv > 1.0 } {
					l.tilt_axis[0] = nz;
					l.tilt_axis[1] = -nx;
					l.tilt_rate = max(l.tilt_rate, min(dv * 30.0, 400.0) + (if l.hinged { 40.0 } else { 0.0 }));
				}
				l.moving = true;
				if -rel > hardest {
					hardest = -rel;
					which = Some(li);
				}
				break;
			}
		}
		(hardest, which)
	}

	pub fn update(&mut self, dt: f32, world: &CollisionWorld, track: &Track) {
		let g = 9.81f32;
		for l in self.list.iter_mut() {
			if !l.moving {
				continue;
			}
			if l.tilt_rate > 0.0 {
				// Falling over gathers speed until it lies.
				l.tilt_rate += 300.0 * dt;
				l.tilt += l.tilt_rate * dt;
				if l.tilt >= 90.0 {
					l.tilt = 90.0;
					l.tilt_rate = 0.0;
					l.fell = true;
				}
			}
			if !l.hinged {
				// 0x4545a0: a light obstacle (21) loses 5% of its speed a frame.
				if track.objects[l.obj].r#type == 21 {
					let k = 0.95f32.powf(dt * 30.0);
					for v in l.vel.iter_mut() {
						*v *= k;
					}
					l.spin *= k;
				}
				l.vel[1] -= g * dt;
				for k in 0..3 {
					l.pos[k] += l.vel[k] * 10.0 * dt;
				}
				l.chunk = world.nearest_chunk(l.pos[0], l.pos[2], l.chunk);
				let mut on_ground = false;
				if let Some(gh) = world.ground(l.pos[0], l.pos[2], l.pos[1] + 20.0, l.chunk)
					&& l.pos[1] <= gh.y
				{
					l.pos[1] = gh.y;
					l.vel[1] = if l.vel[1] < -2.0 { -l.vel[1] * l.elasticity } else { 0.0 };
					on_ground = true;
				}
				let (mut px, mut pz) = (l.pos[0], l.pos[2]);
				let pushed = world.push_out(&mut px, &mut pz, l.radius, l.pos[1] + 1.0, l.pos[1] + l.height, l.chunk);
				l.pos[0] = px;
				l.pos[2] = pz;
				if let Some(n) = pushed {
					let nl = (n[0] * n[0] + n[1] * n[1]).sqrt();
					if nl > 0.0 {
						let vn = (l.vel[0] * n[0] + l.vel[2] * n[1]) / nl;
						if vn < 0.0 {
							l.vel[0] -= (1.0 + l.elasticity) * vn * n[0] / nl;
							l.vel[2] -= (1.0 + l.elasticity) * vn * n[1] / nl;
						}
					}
				}
				if on_ground {
					let sp = (l.vel[0] * l.vel[0] + l.vel[2] * l.vel[2]).sqrt();
					let stop = max(l.friction, 0.3) * g * dt;
					let k = if sp > stop { (sp - stop) / sp } else { 0.0 };
					l.vel[0] *= k;
					l.vel[2] *= k;
					l.spin *= max(0.0, 1.0 - 3.0 * dt);
				}
				l.yaw += l.spin * dt;
				if on_ground
					&& l.vel[1] == 0.0
					&& l.vel[0].abs() + l.vel[2].abs() < 0.05
					&& l.spin.abs() < 5.0
					&& l.tilt_rate == 0.0
				{
					l.moving = false;
					l.spin = 0.0;
					l.burst = false;
				}
			} else if l.tilt_rate == 0.0 {
				l.moving = false;
				l.burst = false;
			}
		}
		self.knock_each_other(track);
	}

	/// Ipion's bodies knock into each other too: one sliding into another pushes it away (the
	/// lighter more), sharing out the speed they met at; a lamp post hit hard enough falls.
	fn knock_each_other(&mut self, track: &Track) {
		for i in 0..self.list.len() {
			{
				let a = &self.list[i];
				if !a.moving || a.hinged || a.tilt > 60.0 {
					continue;
				}
			}
			for k in 0..self.list.len() {
				if k == i {
					continue;
				}
				let (a, b) = pair_mut(&mut self.list, i, k);
				if b.tilt > 60.0 || a.pos[1] > b.pos[1] + b.height || b.pos[1] > a.pos[1] + a.height {
					continue;
				}
				let dx = b.pos[0] - a.pos[0];
				let dz = b.pos[2] - a.pos[2];
				let r = a.radius + b.radius;
				let d2 = dx * dx + dz * dz;
				if d2 >= r * r || d2 < 1e-6 {
					continue;
				}
				// Placed overlapping (a row of pilons), they stay as they were put.
				let (ao, bo) = (&track.objects[a.obj], &track.objects[b.obj]);
				let ox = bo.pos[0] - ao.pos[0];
				let oz = bo.pos[2] - ao.pos[2];
				if ox * ox + oz * oz < r * r {
					continue;
				}
				let d = d2.sqrt();
				let nx = dx / d;
				let nz = dz / d;
				let share = if b.hinged { 0.0 } else { a.mass / (a.mass + b.mass) };
				b.pos[0] += nx * (r - d) * share;
				b.pos[2] += nz * (r - d) * share;
				a.pos[0] -= nx * (r - d) * (1.0 - share);
				a.pos[2] -= nz * (r - d) * (1.0 - share);
				let rel = (b.vel[0] - a.vel[0]) * nx + (b.vel[2] - a.vel[2]) * nz;
				if rel >= 0.0 {
					continue;
				}
				let mb = if b.hinged { 300.0 } else { b.mass };
				let e = min(a.elasticity, b.elasticity);
				let j = -(1.0 + e) * rel / (1.0 / a.mass + 1.0 / mb);
				a.vel[0] -= j / a.mass * nx;
				a.vel[2] -= j / a.mass * nz;
				let dv = j / mb;
				if !b.hinged {
					b.vel[0] += dv * nx;
					b.vel[2] += dv * nz;
					let side = if (a.vel[0] * nz - a.vel[2] * nx) >= 0.0 { 1.0 } else { -1.0 };
					b.spin += side * min(dv * 40.0, 720.0);
				}
				if if b.hinged { -rel > 4.0 } else { b.height > b.radius * 1.2 && dv > 1.0 } {
					b.tilt_axis[0] = nz;
					b.tilt_axis[1] = -nx;
					b.tilt_rate = max(b.tilt_rate, min(dv * 30.0, 400.0) + (if b.hinged { 40.0 } else { 0.0 }));
				}
				b.moving = true;
			}
		}
	}

	/// OnRevive: the ones knocked about, back in their places once out of sight (their
	/// chunk at least `away` from the player's, of n).
	pub fn revive(&mut self, player_chunk: i32, n: i32, away: i32, track: &Track) {
		for l in self.list.iter_mut() {
			let o = &track.objects[l.obj];
			let knocked = l.moving || l.tilt > 0.0 || l.yaw != 0.0 || l.pos[0] != o.pos[0] || l.pos[2] != o.pos[2];
			if !knocked || n <= 0 {
				continue;
			}
			let d = ((o.chunk - player_chunk) % n + n) % n;
			if d < away || d > n - away {
				continue;
			}
			l.pos = o.pos;
			l.vel = [0.0; 3];
			l.yaw = 0.0;
			l.spin = 0.0;
			l.tilt = 0.0;
			l.tilt_rate = 0.0;
			l.moving = false;
			l.burst = false;
			l.fell = false;
			l.chunk = o.chunk;
		}
	}

	/// The ones within `range` chunks of chunk (of n).
	pub fn draw(&self, r: &Renderer, chunk: i32, n: i32, range: i32, track: &Track) {
		for l in &self.list {
			let d = ((l.chunk - chunk) % n + n) % n;
			if d > range && d < n - range {
				continue;
			}
			let Some(mesh) = &l.mesh else {
				continue;
			};
			let o = &track.objects[l.obj];
			glPushMatrix();
			glTranslatef(l.pos[0], l.pos[1], l.pos[2]);
			if l.tilt > 0.0 {
				gl_rotate(l.tilt, l.tilt_axis[0], 0.0, l.tilt_axis[1]);
			}
			gl_rotate(o.rot[1] + l.yaw, 0.0, 1.0, 0.0);
			gl_rotate(o.rot[0], 1.0, 0.0, 0.0);
			gl_rotate(o.rot[2], 0.0, 0.0, 1.0);
			r.draw_mesh(mesh, l.tex, None);
			glPopMatrix();
		}
	}
}

#[cfg(test)]
mod tests {
	use super::*;
	use crate::game::car::{CarInput, CarSpec};
	use crate::game::track::TrackObject;
	use crate::res::archive::NamedArchive;
	use std::fmt::Write;

	fn b(f: f32) -> String {
		format!("{:08x}", f.to_bits())
	}

	fn input(i: i32) -> CarInput {
		CarInput {
			steer: ((i / 45) % 5 - 2) as f32 * 0.45,
			throttle: if (i % 240) < 180 { 1.0 } else { 0.25 },
			brake: if (i % 240) >= 200 { 1.0 } else { 0.0 },
			hold: i < 30,
			turbo: (i / 120) % 6 == 3,
			handbrake: (i % 400) >= 350 && (i % 400) < 370,
		}
	}

	/// A car driven through stage 0 (and, with loose_mode, through objects put on the road),
	/// printed bit for bit: the same as a C++ build of car.cpp and loose_objects.cpp prints.
	fn trace(loose_mode: bool) -> String {
		let mut out = String::new();
		let mut rcs = NamedArchive::default();
		assert!(rcs.open(&crate::res::archive::test_data(), "rcs"));
		let rcs = Rc::new(rcs);
		let mut track = Track::default();
		assert_eq!(track.load(&crate::res::archive::test_data(), 0, 0), "");
		let mut world = CollisionWorld::default();
		world.build(&track.road);
		let mut meshes = MeshCache::new(rcs.clone());
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
		let mut car = Car::default();
		let err = car.spec.load(&crate::res::archive::test_data(), "league0", 0, 1, 1, 1, 1);
		let s = &car.spec;
		writeln!(
			out,
			"spec '{}' {} {} {} {} {} {} {} {} {} {} {} {}",
			err,
			s.name,
			s.animation,
			s.sound,
			s.damage_set,
			s.r#type,
			s.dynamics,
			b(s.mass),
			b(s.top_speed),
			b(s.grip),
			b(s.grip_shape),
			b(s.wheel_front[2]),
			s.gear_count
		)
		.unwrap();
		writeln!(
			out,
			"find {} {}",
			CarSpec::find(&crate::res::archive::test_data(), "league0", &car.spec.name),
			CarSpec::find(&crate::res::archive::test_data(), "traffic", "nope")
		)
		.unwrap();
		let n = track.road.chunks.len() as i32;
		const TYPES: [i32; 7] = [2, 3, 7, 18, 21, 22, 10];
		let base = track.objects.len();
		if loose_mode {
			let mut c = 2;
			while c < n {
				let p = track.road_centre(c);
				track.objects.push(TrackObject {
					pos: [p[0] + ((c % 3) - 1) as f32 * 12.0, p[1], p[2]],
					chunk: c,
					r#type: TYPES[((c / 2) % 7) as usize],
					..Default::default()
				});
				c += 2;
			}
		}
		let mut loose = LooseObjects::default();
		for k in base..track.objects.len() {
			let o = &track.objects[k];
			let mut l = LooseObject { obj: k, ..Default::default() };
			match o.r#type {
				2 => (l.mass, l.friction, l.elasticity) = (10.0, 1.0, 0.6),
				3 => (l.mass, l.friction) = (50.0, 0.9),
				7 => (l.mass, l.friction) = (150.0, 0.9),
				10 => (l.mass, l.friction) = (2000.0, 1.4),
				18 => (l.mass, l.friction, l.elasticity, l.hinged) = (2000.0, 0.9, 0.0, true),
				21 => (l.mass, l.friction) = (400.0, 0.9),
				22 => (l.mass, l.friction) = (10.0, 0.9),
				_ => {}
			}
			l.radius = 4.0 + (o.chunk % 4) as f32;
			l.height = ((o.chunk % 5) * 4 + 3) as f32;
			l.pos = o.pos;
			l.chunk = o.chunk;
			loose.list.push(l);
		}
		let dt = 1.0f32 / 60.0;
		for i in 0..3000 {
			if i % 600 == 0 {
				car.place(&world, &track, (i / 600) * 25, if (i / 600) % 2 != 0 { 15.0 } else { -15.0 });
			}
			car.step(&world, &input(i), dt);
			let c = &car;
			let fields = [
				b(c.pos[0]),
				b(c.pos[1]),
				b(c.pos[2]),
				b(c.yaw),
				b(c.vel[0]),
				b(c.vel[1]),
				b(c.vel[2]),
				b(c.yaw_rate),
				b(c.steer),
				b(c.up[0]),
				b(c.up[1]),
				b(c.up[2]),
				b(c.wheel_spin),
				c.gear.to_string(),
				b(c.rpm),
				c.chunk.to_string(),
				(c.on_grass as i32).to_string(),
				b(c.wall_hit),
				(c.airborne as i32).to_string(),
				(c.touching_wall as i32).to_string(),
			];
			writeln!(out, "{} {}", i, fields.join(" ")).unwrap();
			if i % 100 == 0 {
				let (r, u, f) = car.axes();
				let fields = [r[0], r[1], r[2], u[1], f[0], f[1], f[2], car.speed_kmh()].map(b);
				writeln!(out, "axes {}", fields.join(" ")).unwrap();
			}
			if loose_mode {
				let (v, w) = loose.hit(&mut car);
				loose.update(dt, &world, &track);
				loose.revive(car.chunk, n, 30, &track);
				writeln!(out, "hit {} {}", b(v), w.map_or(-1, |w| w as i32)).unwrap();
				if i % 20 == 0 {
					for (k, l) in loose.list.iter().enumerate() {
						if l.moving || l.tilt > 0.0 || l.yaw != 0.0 {
							let fields = [
								b(l.pos[0]),
								b(l.pos[1]),
								b(l.pos[2]),
								b(l.vel[0]),
								b(l.vel[1]),
								b(l.vel[2]),
								b(l.yaw),
								b(l.spin),
								b(l.tilt),
								b(l.tilt_rate),
								(l.moving as i32).to_string(),
								(l.fell as i32).to_string(),
								(l.burst as i32).to_string(),
								l.chunk.to_string(),
							];
							writeln!(out, "  {} {}", k, fields.join(" ")).unwrap();
						}
					}
				}
			}
		}
		out
	}

	#[test]
	fn reads_the_scripted_physics() {
		if !std::path::Path::new(&crate::res::archive::test_data()).is_dir() {
			return;
		}
		let s = read_scripted(&crate::res::archive::test_data());
		assert!(!s.is_empty());
		for (k, v) in &s {
			assert_eq!(*k, lower(k));
			if std::env::var_os("A2_XCHECK_DIR").is_some() {
				println!("{} {} {} {} '{}' {}", k, v.mass, v.friction, v.elasticity, v.sound, v.sound_loops as i32);
			}
		}
	}

	/// A2_XCHECK_DIR: where to write the traces, to compare with the C++ ones.
	#[test]
	fn drives_and_knocks_on_stage_0() {
		if !std::path::Path::new(&crate::res::archive::test_data()).is_dir() {
			return;
		}
		for (loose_mode, file) in [(false, "car_rust.txt"), (true, "loose_rust.txt")] {
			let t = trace(loose_mode);
			assert!(t.starts_with("spec '' "));
			assert!(t.lines().count() > 3000);
			if let Ok(dir) = std::env::var("A2_XCHECK_DIR") {
				std::fs::write(std::path::Path::new(&dir).join(file), t).unwrap();
			}
		}
	}
}
