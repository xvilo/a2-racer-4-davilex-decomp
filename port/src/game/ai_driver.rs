//! A computer driver (ai_racer.cpp, ai_path.cpp in the original): follows the lanes of the
//! stage's drive map, looking ahead as far as its speed carries it, braking for the bends
//! it sees coming, steering round obstacles, and backing out when it is stuck. Its skill (opponent.ini: NOVICE,
//! NORMAL, SKILLED) sets how close to its car's top speed it drives.

use std::rc::Rc;

use crate::game::car::{Car, CarInput};
use crate::game::police::CopAction;
use crate::game::track::Track;

#[allow(clippy::approx_constant)]
const PI: f32 = 3.14159265;

/// C's remainderf: x - n * y, n being x / y rounded to the nearest integer (ties to even).
fn remainderf(x: f32, y: f32) -> f32 {
	let (x, y) = (x as f64, y as f64);
	(x - (x / y).round_ties_even() * y) as f32
}

/// Something solid by or on the road (ai_ShortTermVision.cpp, AI_OAInfo.cpp in the
/// original): a box seen from above, centre x, z, turned by yaw (radians, like a car's),
/// half extents across (hx) and along (hz) it.
#[derive(Clone, Copy, Debug, Default)]
pub struct AiObstacle {
	pub x: f32,
	pub z: f32,
	pub yaw: f32,
	pub hx: f32,
	pub hz: f32,
}

#[derive(Clone)]
pub struct AiDriver {
	/// fraction of the top speed it aims for
	pub skill: f32,
	/// the drive map node it is heading for
	pub node: i32,
	pub stuck: f32,
	pub reverse: f32,
	/// km/h, a chasing cop's when far ahead of its target
	pub patrol_speed: f32,
	/// For a racer: which drive map nodes' lanes run the race's way. Lost, it takes one of
	/// those (and turns round to it), not whatever lane it happens to face.
	pub race_lanes: Option<Rc<Vec<bool>>>,
	/// Traffic only: true while the traffic lights are red or orange; it stops before a
	/// drive map node with trigger 10 (Stoplicht, ai_nwtrf.cpp RED_LIGHT).
	pub red_light: Option<bool>,
	/// What it steers round: whatever stands in its way to the point it aims at.
	pub obstacles: Option<Rc<Vec<AiObstacle>>>,
}

impl Default for AiDriver {
	fn default() -> Self {
		AiDriver {
			skill: 0.9,
			node: -1,
			stuck: 0.0,
			reverse: 0.0,
			patrol_speed: 30.0,
			race_lanes: None,
			red_light: None,
			obstacles: None,
		}
	}
}

/// opponent.ini skill words to a speed fraction.
pub fn skill_factor(w: &str) -> f32 {
	if w == "NOVICE" {
		return 0.86;
	}
	if w == "SKILLED" {
		return 0.98;
	}
	0.93
}

impl AiDriver {
	/// Picks the lane node nearest to the car that runs its way.
	pub fn find_lane(&mut self, track: &Track, car: &Car) {
		let fx = car.yaw.sin();
		let fz = car.yaw.cos();
		let mut best = 1e30f32;
		self.node = -1;
		for (i, n) in track.drive.iter().enumerate() {
			if n.next < 0 || n.next >= track.drive.len() as i32 {
				continue;
			}
			let nx = &track.drive[n.next as usize].pos;
			if let Some(lanes) = &self.race_lanes
				&& i < lanes.len()
			{
				if !lanes[i] {
					continue;
				}
			} else if (nx[0] - n.pos[0]) * fx + (nx[2] - n.pos[2]) * fz <= 0.0 {
				continue;
			}
			let dx = n.pos[0] - car.pos[0];
			let dz = n.pos[2] - car.pos[2];
			// Prefer nodes ahead of the car.
			let d = dx * dx + dz * dz + if dx * fx + dz * fz < 0.0 { 4000.0 } else { 0.0 };
			if d < best {
				best = d;
				self.node = i as i32;
			}
		}
	}

	/// Moves the point aimed at past the nearest obstacle in the way; None if none is,
	/// else whether it is near (close).
	pub fn avoid(&self, car: &Car, aim: &mut [f32; 2]) -> Option<bool> {
		let obstacles = self.obstacles.as_ref()?;
		let mut fx = aim[0] - car.pos[0];
		let mut fz = aim[1] - car.pos[2];
		let len = (fx * fx + fz * fz).sqrt();
		if len < 1.0 {
			return None;
		}
		fx /= len;
		fz /= len;
		// Look as far as it gets in some 1.5 s, at least past the point aimed at; sx, sz: to
		// the right.
		let reach = f32::max(len + 40.0, 100.0 + car.speed_kmh() / 3.6 * 15.0);
		let sx = fz;
		let sz = -fx;
		let half = f32::max(car.spec.wheel_front[0], car.spec.wheel_rear[0]) + 3.5 + 6.0;
		let mut nearest = reach;
		let mut far_end = 0.0f32;
		let mut shift = 0.0f32;
		for o in obstacles.iter() {
			let ox = o.x - car.pos[0];
			let oz = o.z - car.pos[2];
			let r = o.hx + o.hz;
			let along = ox * fx + oz * fz;
			if along + r < 0.0 || along - r > reach {
				continue;
			}
			// The box's corners in the car's way: along it and across it.
			let cy = o.yaw.cos();
			let sy = o.yaw.sin();
			let (mut a0, mut a1, mut l0, mut l1) = (1e9f32, -1e9f32, 1e9f32, -1e9f32);
			for k in 0..4 {
				let lx = (if k & 1 != 0 { 1.0 } else { -1.0 }) * o.hx;
				let lz = (if k & 2 != 0 { 1.0 } else { -1.0 }) * o.hz;
				let wx = ox + lx * cy + lz * sy;
				let wz = oz - lx * sy + lz * cy;
				let a = wx * fx + wz * fz;
				let l = wx * sx + wz * sz;
				a0 = a0.min(a);
				a1 = a1.max(a);
				l0 = l0.min(l);
				l1 = l1.max(l);
			}
			if a1 < 0.0 || a0 > reach || l1 < -half || l0 > half || a0 >= nearest {
				continue;
			}
			// Past it on the side needing the smaller turn.
			let right = l1 + half;
			let left = l0 - half;
			nearest = a0.max(0.0);
			far_end = a1;
			shift = if right.abs() < left.abs() { right } else { left };
		}
		if nearest >= reach {
			return None;
		}
		let close = nearest < 150.0;
		// Towards its near end, then alongside it to beyond the far one.
		let at = if nearest > 30.0 { nearest } else { far_end + 20.0 };
		aim[0] = car.pos[0] + fx * at + sx * shift;
		aim[1] = car.pos[2] + fz * at + sz * shift;
		Some(close)
	}

	/// What to do this frame.
	pub fn drive(&mut self, track: &Track, car: &Car, dt: f32) -> CarInput {
		let mut inp = CarInput::default();
		let dn = &track.drive;
		if self.node < 0 || self.node >= dn.len() as i32 {
			self.find_lane(track, car);
		}
		if self.node < 0 {
			return inp;
		}
		// Move on along the lane once a node is beside or behind the car.
		let fx = car.yaw.sin();
		let fz = car.yaw.cos();
		for _ in 0..8 {
			let p = &dn[self.node as usize].pos;
			let dx = p[0] - car.pos[0];
			let dz = p[2] - car.pos[2];
			if dx * fx + dz * fz > 20.0 || dn[self.node as usize].next < 0 {
				break;
			}
			self.node = dn[self.node as usize].next;
		}
		// Lost the lane (pushed off it): find one again.
		{
			let p = &dn[self.node as usize].pos;
			let dx = p[0] - car.pos[0];
			let dz = p[2] - car.pos[2];
			if dx * dx + dz * dz > 250.0 * 250.0 {
				self.find_lane(track, car);
			}
		}
		if self.node < 0 {
			return inp;
		}
		// Aim further ahead the faster it goes.
		let speed = car.speed_kmh() / 3.6;
		let ahead = 1 + (speed / 12.0) as i32;
		let mut t = self.node;
		let mut k = 0;
		while k < ahead && dn[t as usize].next >= 0 {
			t = dn[t as usize].next;
			k += 1;
		}
		let tp = &dn[t as usize].pos;
		let mut aim = [tp[0], tp[2]];
		let avoided = self.avoid(car, &mut aim);
		let swerve = avoided.is_some();
		let close = avoided.unwrap_or(false);
		let want = (aim[0] - car.pos[0]).atan2(aim[1] - car.pos[2]);
		let d = remainderf(want - car.yaw, 2.0 * PI);
		inp.steer = (d * 2.5).clamp(-1.0, 1.0);

		// The bend ahead: how much the lane turns over the next stretch.
		let mut turn = 0.0f32;
		let mut a = self.node;
		for _ in 0..10 {
			let b = dn[a as usize].next;
			if b < 0 {
				break;
			}
			let c = dn[b as usize].next;
			if c < 0 {
				break;
			}
			let (pa, pb, pc) = (&dn[a as usize].pos, &dn[b as usize].pos, &dn[c as usize].pos);
			let h1 = (pb[0] - pa[0]).atan2(pb[2] - pa[2]);
			let h2 = (pc[0] - pb[0]).atan2(pc[2] - pb[2]);
			turn += remainderf(h2 - h1, 2.0 * PI).abs();
			a = b;
		}
		let v_top = car.spec.top_speed / 3.6 * self.skill.abs();
		let v_bend = 10.0 + 30.0 / (1.0 + turn * 2.5);
		let mut target = v_top.min(v_bend);
		if swerve && close {
			target = target.min(15.0);
		}
		// A stop line ahead with the lights red: slow down to stand before it.
		if self.red_light == Some(true) {
			let mut k = self.node;
			let mut i = 0;
			while i < 4 && k >= 0 {
				if dn[k as usize].trigger == 10 {
					let sp = &dn[k as usize].pos;
					let sx = sp[0] - car.pos[0];
					let sz = sp[2] - car.pos[2];
					let ahead = sx * car.yaw.sin() + sz * car.yaw.cos();
					if ahead > 5.0 && ahead < 150.0 {
						target = target.min(f32::max(0.0, (ahead - 15.0) * 0.15));
					}
					break;
				}
				i += 1;
				k = dn[k as usize].next;
			}
		}
		inp.throttle = if speed < target { 1.0 } else { 0.0 };
		inp.brake = if speed > target + 3.0 || (target < 0.5 && speed > 0.3) { 1.0 } else { 0.0 };

		// Stuck (not waiting at a light): back out, steering the other way.
		if speed < 1.0 && target > 1.0 {
			self.stuck += dt;
		} else if self.reverse <= 0.0 {
			self.stuck = 0.0;
		}
		if self.stuck > 1.5 && self.reverse <= 0.0 {
			self.reverse = 1.2;
		}
		if self.reverse > 0.0 {
			self.reverse -= dt;
			inp.throttle = 0.0;
			inp.brake = 1.0;
			inp.steer = -inp.steer;
			if self.reverse <= 0.0 {
				self.stuck = 0.0;
				self.find_lane(track, car);
			}
		}
		inp
	}

	/// A police car after its target, doing its tactic's step (game/police.rs): far off it
	/// follows the lanes flat out; near, it rams the target, keeps level with it on one
	/// side, or gets ahead of it and maybe brakes across its way.
	pub fn chase(&mut self, track: &Track, car: &Car, target: &Car, dt: f32, action: CopAction, side: i32) -> CarInput {
		let dx = target.pos[0] - car.pos[0];
		let dz = target.pos[2] - car.pos[2];
		let dist = (dx * dx + dz * dz).sqrt();
		// Far away: follow the lanes to catch up, like a racer; ahead of it, slowly, for
		// it to come by (behavior.ini PatrolSpeed).
		if dist > 400.0 {
			let mut inp = self.drive(track, car, dt);
			let ahead = -(dx * target.yaw.sin() + dz * target.yaw.cos()) > 0.0;
			let sp = car.speed_kmh();
			inp.throttle = if !ahead || sp < self.patrol_speed { 1.0 } else { 0.0 };
			inp.brake = if ahead && sp > self.patrol_speed + 10.0 { 1.0 } else { 0.0 };
			return inp;
		}
		let mut inp = CarInput::default();
		let tf = [target.yaw.sin(), target.yaw.cos()];
		let tr = [tf[1], -tf[0]];
		// Where the cop is, seen from the target: ahead of it (along) and to its right.
		let along = -(dx * tf[0] + dz * tf[1]);
		let across = -(dx * tr[0] + dz * tr[1]);
		let lead = (dist / 300.0).min(1.0) * 0.8;
		let mut tx = target.pos[0] + target.vel[0] * 10.0 * lead;
		let mut tz = target.pos[2] + target.vel[2] * 10.0 * lead;
		let speed = car.speed_kmh();
		let their = target.speed_kmh();
		let mut aim_speed: f32;
		let mut block = false;
		let side_f = side as f32;
		match action {
			CopAction::INTO => {
				// Behind it: faster than it; alongside: a bit faster, to push in.
				aim_speed = if dist > 60.0 { car.spec.top_speed } else { their + 12.0 };
			}
			CopAction::BESIDE | CopAction::MEGAPHONE => {
				// Level with it, a car's width to the side.
				tx += tr[0] * side_f * 28.0;
				tz += tr[1] * side_f * 28.0;
				aim_speed = their + (-along * 0.3).clamp(-15.0, 25.0);
			}
			CopAction::FRONT | CopAction::HANDBRAKE => {
				// Some way ahead of it, in its way.
				tx += tf[0] * 70.0;
				tz += tf[1] * 70.0;
				aim_speed = their + ((70.0 - along) * 0.4).clamp(-20.0, 30.0);
				block = action == CopAction::HANDBRAKE && along > 30.0 && across.abs() < 30.0;
			}
		}
		// STATE_STOP_RACER, INIT_ARREST: the target (nearly) stopped, it pulls up beside it
		// and stops there.
		let arrest = their < 20.0 && dist < 200.0;
		if arrest {
			tx = target.pos[0] + tr[0] * side_f * 24.0;
			tz = target.pos[2] + tr[1] * side_f * 24.0;
			let ax = tx - car.pos[0];
			let az = tz - car.pos[2];
			let ad = (ax * ax + az * az).sqrt();
			aim_speed = (ad * 0.6).clamp(0.0, 60.0);
			block = false;
			if ad < 12.0 {
				inp.brake = 1.0;
				return inp;
			}
		}
		let want = (tx - car.pos[0]).atan2(tz - car.pos[2]);
		let d = remainderf(want - car.yaw, 2.0 * PI);
		inp.steer = (d * 2.5).clamp(-1.0, 1.0);
		inp.throttle = if speed < aim_speed && (d.abs() < 1.2 || (arrest && speed < 25.0)) { 1.0 } else { 0.0 };
		inp.brake = if (d.abs() > 1.6 && speed > 40.0) || speed > aim_speed + 15.0 { 1.0 } else { 0.0 };
		if block {
			// Across its way: full brake, the wheels turned.
			inp.throttle = 0.0;
			inp.brake = 1.0;
			inp.steer = side_f;
		}
		if speed < 1.0 {
			self.stuck += dt;
		} else if self.reverse <= 0.0 {
			self.stuck = 0.0;
		}
		if self.stuck > 1.5 && self.reverse <= 0.0 && !block {
			self.reverse = 1.0;
		}
		if self.reverse > 0.0 {
			self.reverse -= dt;
			inp.throttle = 0.0;
			inp.brake = 1.0;
			inp.steer = -inp.steer;
			if self.reverse <= 0.0 {
				self.stuck = 0.0;
			}
		}
		inp
	}
}

#[cfg(test)]
mod tests {
	use super::*;

	#[test]
	fn remainder_as_c_has_it() {
		assert_eq!(remainderf(3.0, 2.0), -1.0);
		assert_eq!(remainderf(5.0, 2.0), 1.0);
		assert_eq!(remainderf(-7.0, 2.0 * PI), -7.0 + 2.0 * PI);
		assert_eq!(remainderf(0.5, 2.0 * PI), 0.5);
	}

	#[test]
	fn skill_words() {
		assert_eq!(skill_factor("NOVICE"), 0.86);
		assert_eq!(skill_factor("NORMAL"), 0.93);
		assert_eq!(skill_factor("SKILLED"), 0.98);
	}
}
