//! A car: what it is (CAR_CFG.INI, VDYNS.DAT, its animation) and how it drives.
//!
//!   CAR_CFG.INI [league<n>] / [traffic] n=  name, animation, driver, engine sound, a number
//!                     (600, 1500...), car type, a number (5000), dynamics type, damage set
//!               [wheel_positions] <car type>=  front x, y, z, rear x, y, z
//!               [light_positions] <car type>=  front x, y, z, rear x, y, z
//!   VDYNS.DAT         100 records of 616 bytes (Car_dynm.cpp), one per dynamics type; the
//!                     values used here, by offset: 0x00 mass, 0x04 centre of gravity x, y, z,
//!                     0x10 and 0x14 (35, 30: steering), 0x98 top speed in km/h per engine
//!                     upgrade level (scaled by the difficulty), 0xac and 0xc0 tyre values per
//!                     level, 0xd4 the six gear ratios per gearbox level.
//!   The animation's frames: 0 body, 1 wheel, 2 windows, 3 and 4 lights.
//!
//! The original simulates the car with the Ipion physics library. The port drives it with
//! its own model (a car on four sampled ground points, with tyre forces from slip angles),
//! fed with the same mass, gears and speeds.

use crate::engine::collision::CollisionWorld;
use crate::game::track::Track;
use crate::res::archive::{equal_ci, find_file_ci, rdf32, read_file_ci};
use crate::xvga::inifile::{IniFile, atof, atoi, split_fields};

#[derive(Clone, Debug)]
pub struct CarSpec {
	pub name: String,
	pub animation: String,
	pub driver: String,
	pub sound: String,
	/// damage_set: damage.ini [Damage Models]
	pub damage_set: String,
	pub r#type: i32,
	pub dynamics: i32,
	pub wheel_front: [f32; 3],
	pub wheel_rear: [f32; 3],
	/// The left ones.
	pub light_front: [f32; 3],
	pub light_rear: [f32; 3],
	pub mass: f32,
	/// km/h
	pub top_speed: f32,
	pub grip: f32,
	pub grip_shape: f32,
	/// The garage's ABS: the port's own stand-in, stronger brakes (the original's ABS is
	/// Ipion's business).
	pub brake_force: f32,
	pub gears: [f32; 6],
	pub gear_count: i32,
}

impl Default for CarSpec {
	fn default() -> Self {
		CarSpec {
			name: String::new(),
			animation: String::new(),
			driver: String::new(),
			sound: String::new(),
			damage_set: String::new(),
			r#type: 0,
			dynamics: 0,
			wheel_front: [7.5, 0.0, 13.0],
			wheel_rear: [7.5, 0.0, -15.0],
			light_front: [6.0, 8.0, 20.0],
			light_rear: [6.0, 8.0, -20.0],
			mass: 600.0,
			top_speed: 100.0,
			grip: 0.7,
			grip_shape: 3.8,
			brake_force: 1.0,
			gears: [2.8, 2.2, 1.3, 1.0, 0.8, 0.0],
			gear_count: 5,
		}
	}
}

#[derive(Clone, Copy, Debug, Default)]
pub struct CarInput {
	/// -1 left .. 1 right
	pub steer: f32,
	/// 0..1
	pub throttle: f32,
	/// 0..1
	pub brake: f32,
	/// Held on the line (before the start).
	pub hold: bool,
	/// The turbo burning.
	pub turbo: bool,
	/// The rear wheels locked.
	pub handbrake: bool,
}

#[derive(Clone, Debug)]
pub struct Car {
	pub spec: CarSpec,
	/// The car's origin (on the ground under its middle), game units. Game units are
	/// decimetres; the model works in metres and seconds.
	pub pos: [f32; 3],
	/// Radians; 0 faces +z.
	pub yaw: f32,
	/// m/s, world
	pub vel: [f32; 3],
	/// rad/s
	pub yaw_rate: f32,
	/// Front wheel angle, radians.
	pub steer: f32,
	pub up: [f32; 3],
	/// Radians.
	pub wheel_spin: f32,
	pub gear: i32,
	pub rpm: f32,
	/// Where on the road it is.
	pub chunk: i32,
	pub on_grass: bool,
	/// The hardest knock into a wall since it was last cleared: the speed into it, m/s.
	pub wall_hit: f32,
	pub airborne: bool,
	pub touching_wall: bool,
}

impl Default for Car {
	fn default() -> Self {
		Car {
			spec: CarSpec::default(),
			pos: [0.0; 3],
			yaw: 0.0,
			vel: [0.0; 3],
			yaw_rate: 0.0,
			steer: 0.0,
			up: [0.0, 1.0, 0.0],
			wheel_spin: 0.0,
			gear: 1,
			rpm: 0.0,
			chunk: -1,
			on_grass: false,
			wall_hit: 0.0,
			airborne: false,
			touching_wall: false,
		}
	}
}

/// Game units per metre.
const UNITS: f32 = 10.0;
const GRAVITY: f32 = 9.81;

fn max(a: f32, b: f32) -> f32 {
	if a < b { b } else { a }
}

fn min(a: f32, b: f32) -> f32 {
	if b < a { b } else { a }
}

fn clamp(v: f32, lo: f32, hi: f32) -> f32 {
	if v < lo {
		lo
	} else if hi < v {
		hi
	} else {
		v
	}
}

fn vdyns(d: &[u8], record: i32, offset: i32) -> f32 {
	let p = (record as usize).wrapping_mul(616).wrapping_add(offset as usize);
	if p.wrapping_add(4) > d.len() {
		return 0.0;
	}
	rdf32(&d[p..])
}

impl CarSpec {
	/// Reads entry `index` of section (e.g. "league0") from CAR_CFG.INI and its dynamics
	/// record; motor/gearbox/tyres/abs are the upgrade levels (0 or 1). An error message, or empty.
	#[allow(clippy::too_many_arguments)]
	pub fn load(
		&mut self,
		dir: &str,
		section: &str,
		index: i32,
		motor: i32,
		gearbox: i32,
		tyres: i32,
		abs: i32,
	) -> String {
		let mut cfg = IniFile::default();
		let path = find_file_ci(dir, "CAR_CFG.INI");
		if path.is_empty() || !cfg.load(&path) {
			return "cannot read CAR_CFG.INI".to_string();
		}
		let f = split_fields(&cfg.get(section, &index.to_string()), ',');
		if f.len() < 9 {
			return format!("CAR_CFG.INI [{}] has no car {}", section, index);
		}
		self.name = f[0].clone();
		self.animation = f[1].clone();
		self.driver = f[2].clone();
		self.sound = f[3].clone();
		self.r#type = atoi(&f[5]);
		self.dynamics = atoi(&f[7]);
		self.damage_set = f[8].clone();
		{
			let w = split_fields(&cfg.get("light_positions", &self.r#type.to_string()), ',');
			if w.len() >= 6 {
				for k in 0..3 {
					self.light_front[k] = atof(&w[k]) as f32;
					self.light_rear[k] = atof(&w[3 + k]) as f32;
				}
			}
		}
		for key in ["wheel_positions"] {
			let w = split_fields(&cfg.get(key, &self.r#type.to_string()), ',');
			if w.len() >= 6 {
				for k in 0..3 {
					self.wheel_front[k] = atof(&w[k]) as f32;
					self.wheel_rear[k] = atof(&w[3 + k]) as f32;
				}
			}
		}
		let Some(d) = read_file_ci(dir, "VDYNS.DAT") else {
			return "cannot read VDYNS.DAT".to_string();
		};
		if d.len() < 616usize.wrapping_mul(self.dynamics.wrapping_add(1) as usize) {
			return "cannot read VDYNS.DAT".to_string();
		}
		let motor = motor.clamp(0, 4);
		let gearbox = gearbox.clamp(0, 4);
		let tyres = tyres.clamp(0, 4);
		self.brake_force = if abs > 0 { 1.25 } else { 1.0 };
		self.mass = vdyns(&d, self.dynamics, 0x00);
		self.top_speed = vdyns(&d, self.dynamics, 0x98 + 4 * motor);
		self.grip = vdyns(&d, self.dynamics, 0xac + 4 * tyres);
		self.grip_shape = vdyns(&d, self.dynamics, 0xc0 + 4 * tyres);
		self.gear_count = 0;
		for g in 0..6 {
			self.gears[g] = vdyns(&d, self.dynamics, 0xd4 + gearbox * 0x18 + 4 * g as i32);
			if self.gears[g] > 0.0 {
				self.gear_count = g as i32 + 1;
			}
		}
		if self.mass <= 0.0 {
			self.mass = 600.0;
		}
		if self.top_speed <= 0.0 {
			self.top_speed = 100.0;
		}
		if self.grip <= 0.0 {
			self.grip = 0.7;
		}
		if self.gear_count == 0 {
			self.gears[0] = 1.0;
			self.gear_count = 1;
		}
		String::new()
	}

	/// The entry of section whose name (the first field) is name; -1 if none.
	pub fn find(dir: &str, section: &str, name: &str) -> i32 {
		let mut cfg = IniFile::default();
		let path = find_file_ci(dir, "CAR_CFG.INI");
		if path.is_empty() || !cfg.load(&path) {
			return -1;
		}
		let count = cfg.get_int(section, "Count", 0);
		for i in 0..count {
			let f = split_fields(&cfg.get(section, &i.to_string()), ',');
			if !f.is_empty() && equal_ci(&f[0], name) {
				return i;
			}
		}
		-1
	}
}

impl Car {
	/// Puts the car on the road at chunk, facing the next chunk.
	pub fn place(&mut self, world: &CollisionWorld, track: &Track, c: i32, side: f32) {
		let n = track.road.chunks.len() as i32;
		let c = ((c % n) + n) % n;
		let a = track.road_centre(c);
		let b = track.road_centre(c + 1);
		self.yaw = (b[0] - a[0]).atan2(b[2] - a[2]);
		// Right of the direction of travel: (cos yaw, 0, -sin yaw).
		self.pos[0] = a[0] + self.yaw.cos() * side;
		self.pos[2] = a[2] - self.yaw.sin() * side;
		self.chunk = world.nearest_chunk(self.pos[0], self.pos[2], -1);
		self.pos[1] = match world.ground(self.pos[0], self.pos[2], a[1] + 50.0, self.chunk) {
			Some(hit) => hit.y,
			None => a[1],
		};
		self.vel = [0.0; 3];
		self.yaw_rate = 0.0;
		self.steer = 0.0;
		self.gear = 1;
	}

	/// Puts the car at a position (game units) facing yaw, standing still.
	pub fn place_at(&mut self, world: &CollisionWorld, p: &[f32; 3], y: f32) {
		self.pos = *p;
		self.yaw = y;
		self.chunk = world.nearest_chunk(self.pos[0], self.pos[2], self.chunk);
		if let Some(hit) = world.ground(self.pos[0], self.pos[2], self.pos[1] + 20.0, self.chunk) {
			self.pos[1] = hit.y;
		}
		self.vel = [0.0; 3];
		self.up = [0.0, 1.0, 0.0];
		self.yaw_rate = 0.0;
		self.steer = 0.0;
		self.airborne = false;
		self.gear = 1;
	}

	/// The car's axes in game coordinates: right, up, forward.
	pub fn axes(&self) -> ([f32; 3], [f32; 3], [f32; 3]) {
		// Heading on the ground plane, tilted to the ground's normal.
		let up = &self.up;
		let f = [self.yaw.sin(), 0.0, self.yaw.cos()];
		let d = f[0] * up[0] + f[1] * up[1] + f[2] * up[2];
		let mut forward = [0f32; 3];
		let mut u = [0f32; 3];
		for k in 0..3 {
			forward[k] = f[k] - up[k] * d;
		}
		let l = (forward[0] * forward[0] + forward[1] * forward[1] + forward[2] * forward[2]).sqrt();
		for k in 0..3 {
			forward[k] /= if l > 0.0 { l } else { 1.0 };
			u[k] = up[k];
		}
		let right = [
			u[1] * forward[2] - u[2] * forward[1],
			u[2] * forward[0] - u[0] * forward[2],
			u[0] * forward[1] - u[1] * forward[0],
		];
		(right, u, forward)
	}

	pub fn speed_kmh(&self) -> f32 {
		(self.vel[0] * self.vel[0] + self.vel[2] * self.vel[2]).sqrt() * 3.6
	}

	pub fn step(&mut self, world: &CollisionWorld, inp: &CarInput, dt: f32) {
		let m = self.spec.mass;
		let a = self.spec.wheel_front[2].abs() / UNITS;
		let b = self.spec.wheel_rear[2].abs() / UNITS;
		let inertia = m * (a * a + b * b) * 0.5;
		// The turbo (FUN_00428c70): full throttle and a push forward. The original pushes
		// 12.5 + 0.625 v m/s^2 through Ipion, against Ipion's resistances; the port's car has
		// simpler ones, so its turbo is a stand-in: a stronger engine with a higher top.
		let v_top = self.spec.top_speed / 3.6 * (if inp.turbo { 1.4 } else { 1.0 });
		// forward
		let mut fx = self.yaw.sin();
		let mut fz = self.yaw.cos();
		// right
		let mut rx = self.yaw.cos();
		let mut rz = -self.yaw.sin();
		// forward speed
		let mut vf = self.vel[0] * fx + self.vel[2] * fz;
		// sideways speed, to the right
		let mut vl = self.vel[0] * rx + self.vel[2] * rz;
		let speed = (vf * vf + vl * vl).sqrt();

		// Steering: less lock at speed, and the wheels turn at a finite rate.
		let lock = 35.0f32 * 3.14159265 / 180.0 / (1.0 + speed / 18.0);
		let target = inp.steer * lock;
		let rate = 3.0 * dt;
		self.steer += clamp(target - self.steer, -rate, rate);

		let grip = if self.on_grass { self.spec.grip * 1.1 } else { self.spec.grip * 1.3 };
		let load = m * GRAVITY;
		let mut fl = 0.0f32;
		let mut rl = 0.0f32;
		let mut drive = 0.0f32;
		if !self.airborne {
			// Tyre side forces from the slip angles, saturating.
			let vfa = max(vf.abs(), 1.0);
			let slip_f = (vl + a * self.yaw_rate).atan2(vfa) - self.steer * (if vf >= 0.0 { 1.0 } else { -1.0 });
			let slip_r = (vl - b * self.yaw_rate).atan2(vfa);
			let shape = self.spec.grip_shape;
			fl = -grip * load * (b / (a + b)) * (shape * slip_f).tanh();
			rl = -grip * load * (a / (a + b)) * (shape * slip_r).tanh();
			if inp.brake > 0.5 && inp.throttle > 0.5 {
				// handbrake-like slide
				rl *= 0.5;
			}
			// The handbrake: the rear wheels locked slide sideways and drag the car to a stop.
			if inp.handbrake {
				rl *= 0.3;
			}

			// Engine: full pull at low speed, none at the top speed. Brake, then reverse.
			let throttle = if inp.turbo { 1.0 } else { inp.throttle };
			if throttle > 0.0 {
				let frac = clamp(vf / v_top, 0.0, 1.0);
				drive += throttle * m * (if inp.turbo { 9.0 } else { 4.5 }) * (1.0 - frac * frac);
			}
			if inp.brake > 0.0 {
				if vf > 0.5 {
					drive -= inp.brake * m * 9.0 * self.spec.brake_force;
				} else if vf > -25.0 / 3.6 && inp.brake > 0.5 {
					drive -= inp.brake * m * 3.0;
				}
			}
			if inp.handbrake {
				drive -= clamp(vf * 4.0, -1.0, 1.0) * m * 4.0;
			}
			// Rolling resistance (more off the road) and air drag.
			let roll = (if self.on_grass { 1.2 } else { 0.15 }) * m;
			drive -= clamp(vf * 2.0, -1.0, 1.0) * roll;
			drive -= vf * vf.abs() * 0.3;
		}

		if inp.hold && !self.airborne {
			vf = 0.0;
			vl = 0.0;
			self.yaw_rate = 0.0;
			drive = 0.0;
			fl = 0.0;
			rl = 0.0;
		}
		// Integrate in the car's frame.
		let af = drive / m + vl * self.yaw_rate;
		let al = (fl * self.steer.cos() + rl) / m - vf * self.yaw_rate;
		vf += af * dt;
		vl += al * dt;
		if !self.airborne {
			let torque = a * fl * self.steer.cos() - b * rl;
			self.yaw_rate += torque / inertia * dt;
			if speed < 0.5 && inp.throttle.abs() < 0.01 {
				self.yaw_rate *= 0.8;
				if vf.abs() < 0.3 && inp.brake < 0.01 {
					vf *= 0.9;
				}
			}
		}
		self.yaw += self.yaw_rate * dt;
		fx = self.yaw.sin();
		fz = self.yaw.cos();
		rx = self.yaw.cos();
		rz = -self.yaw.sin();
		self.vel[0] = fx * vf + rx * vl;
		self.vel[2] = fz * vf + rz * vl;
		self.pos[0] += self.vel[0] * UNITS * dt;
		self.pos[2] += self.vel[2] * UNITS * dt;

		// Walls: a circle at the front and one at the back.
		self.chunk = world.nearest_chunk(self.pos[0], self.pos[2], self.chunk);
		let half = max(self.spec.wheel_front[0], self.spec.wheel_rear[0]) + 2.0;
		self.touching_wall = false;
		for off in [a * UNITS, -b * UNITS] {
			let mut cx = self.pos[0] + fx * off;
			let mut cz = self.pos[2] + fz * off;
			if let Some(mut n) =
				world.push_out(&mut cx, &mut cz, half, self.pos[1] + 4.0, self.pos[1] + 12.0, self.chunk)
			{
				self.touching_wall = true;
				self.pos[0] = cx - fx * off;
				self.pos[2] = cz - fz * off;
				let nl = (n[0] * n[0] + n[1] * n[1]).sqrt();
				if nl > 0.0 {
					n[0] /= nl;
					n[1] /= nl;
					let into = self.vel[0] * n[0] + self.vel[2] * n[1];
					self.wall_hit = max(self.wall_hit, -into);
					if into < 0.0 {
						// Lose the speed into the wall; a real hit costs some along it too.
						self.vel[0] -= n[0] * into * 1.3;
						self.vel[2] -= n[1] * into * 1.3;
						if into < -2.0 {
							self.vel[0] *= 0.85;
							self.vel[2] *= 0.85;
							self.yaw_rate *= 0.5;
						}
					}
				}
			}
		}

		// The ground under the four wheels.
		let fw = self.spec.wheel_front[2];
		let rw = self.spec.wheel_rear[2];
		let hx = max(self.spec.wheel_front[0], 4.0);
		let pts: [[f32; 2]; 4] = [[-hx, fw], [hx, fw], [-hx, rw], [hx, rw]];
		let mut h = [0f32; 4];
		let mut found = 0;
		let mut grass = 0;
		// A wheel steps up at most half a metre; more is a wall.
		let top = self.pos[1] + 5.0;
		for i in 0..4 {
			let x = self.pos[0] + rx * pts[i][0] + fx * pts[i][1];
			let z = self.pos[2] + rz * pts[i][0] + fz * pts[i][1];
			if let Some(hit) = world.ground(x, z, top, self.chunk) {
				h[i] = hit.y;
				found += 1;
				grass += (hit.list != 0) as i32;
			} else {
				h[i] = self.pos[1] - 20.0;
			}
		}
		if found == 0 {
			// Off the world: back onto the road.
			self.airborne = true;
			self.vel[1] -= GRAVITY * dt;
			self.pos[1] += self.vel[1] * UNITS * dt;
			return;
		}
		self.on_grass = grass * 2 > found;
		let ground_y = (h[0] + h[1] + h[2] + h[3]) / 4.0;
		if self.pos[1] > ground_y + 1.5 {
			self.airborne = true;
			self.vel[1] -= GRAVITY * dt;
			self.pos[1] += self.vel[1] * UNITS * dt;
			if self.pos[1] <= ground_y {
				self.pos[1] = ground_y;
				self.vel[1] = 0.0;
			}
		} else {
			self.airborne = false;
			// Follow the ground; leaving a crest faster than gravity pulls means flying.
			let climb = (ground_y - self.pos[1]) / UNITS / dt;
			self.vel[1] = climb;
			self.pos[1] = ground_y;
		}
		// Tilt to the plane through the wheels.
		let wx =
			if (pts[1][0] - pts[0][0]).abs() > 0.0 { ((h[1] + h[3]) - (h[0] + h[2])) / 2.0 / (2.0 * hx) } else { 0.0 };
		let wz = if (fw - rw) != 0.0 { ((h[0] + h[1]) - (h[2] + h[3])) / 2.0 / (fw - rw) } else { 0.0 };
		// up = normalize(-wx * right - wz * forward + y)
		let target_up = [-wx * rx - wz * fx, 1.0, -wx * rz - wz * fz];
		let l = (target_up[0] * target_up[0] + target_up[1] * target_up[1] + target_up[2] * target_up[2]).sqrt();
		for k in 0..3 {
			self.up[k] += (target_up[k] / l - self.up[k]) * min(1.0, dt * 12.0);
		}

		// Wheels and the gearbox (for the sound and the dashboard later).
		self.wheel_spin += vf * UNITS * dt / 3.5;
		// The top gear reaches 6500 rpm at the top speed; shift up at 6000, down at 3000.
		let gears = self.spec.gears;
		let gear_count = self.spec.gear_count;
		let rpm_in = |g: i32| vf.abs() / v_top * 6500.0 * gears[(g - 1) as usize] / gears[(gear_count - 1) as usize];
		if self.gear < gear_count && rpm_in(self.gear) > 6000.0 {
			self.gear += 1;
		} else if self.gear > 1 && rpm_in(self.gear) < 3000.0 {
			self.gear -= 1;
		}
		self.rpm = clamp(rpm_in(self.gear), 900.0, 7000.0);
	}
}
