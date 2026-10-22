//! The stage's paths (pth_main.cpp, pth_ptrf.cpp, pth_trfc.cpp; etappe<n>.pth): things
//! that move along a fixed course when the player comes by.
//!
//!   int32 version (-1), int32 count; then per path { int32 start chunk, end chunk, type,
//!   flags, time (ms to run it), n; n points { float unused, x, y, z } }
//!
//! The course is a Catmull-Rom spline through the points (0x464950: Hermite, tangents
//! half the neighbours' difference). Types (etappe<n>.ini [pathtypes]): 3 boat (e00_rond),
//! 4 train (C_TREIN, sound TRAIN), 5 helicopter (C_HELI, rotor C_LBLADE), 6 random
//! traffic, 7 plane (a_VLIEGT, sound PLANE), 13-18 police cars pulling out (PCOP: the
//! Dutch PATH_POLITIE car, GPCOP: the German PATH_POLIZEI; DEADEND they drive off and are
//! gone, STOPEND they stop across the road at the end, WAYPOINT they go after the player).

use crate::res::archive::{rd32, rdf32, read_file_ci};

#[derive(Clone, Copy, Debug, Default, PartialEq)]
pub struct PathPoint {
	pub x: f32,
	pub y: f32,
	pub z: f32,
}

#[derive(Clone, Debug)]
pub struct Path {
	pub start: i32,
	pub end: i32,
	pub r#type: i32,
	pub flags: i32,
	/// s
	pub time: f32,
	pub points: Vec<PathPoint>,
}

impl Default for Path {
	fn default() -> Self {
		Path { start: 0, end: 0, r#type: 0, flags: 0, time: 1.0, points: Vec::new() }
	}
}

impl Path {
	pub const BOAT: i32 = 3;
	pub const TRAIN: i32 = 4;
	pub const HELICOPTER: i32 = 5;
	pub const RANDOM_TRAFFIC: i32 = 6;
	pub const PLANE: i32 = 7;
	pub const PCOP_DEADEND: i32 = 13;
	pub const PCOP_STOPEND: i32 = 14;
	pub const PCOP_WAYPOINT: i32 = 15;
	pub const GPCOP_DEADEND: i32 = 16;
	pub const GPCOP_STOPEND: i32 = 17;
	pub const GPCOP_WAYPOINT: i32 = 18;

	pub fn police(&self) -> bool {
		self.r#type >= Self::PCOP_DEADEND && self.r#type <= Self::GPCOP_WAYPOINT
	}

	/// Where along it at f (0..1), and the heading there (radians, like a car's yaw).
	pub fn at(&self, f: f32) -> ([f32; 3], f32) {
		let mut yaw = 0.0;
		if self.points.is_empty() {
			return ([0.0; 3], yaw);
		}
		if self.points.len() == 1 {
			let p = self.points[0];
			return ([p.x, p.y, p.z], yaw);
		}
		let out = sample(&self.points, f);
		// The heading: towards a little further on (back from a little before, at the end).
		let e = 0.01f32;
		let a = sample(&self.points, f.min(1.0 - e));
		let b = sample(&self.points, f.min(1.0 - e) + e);
		if (b[0] - a[0]).abs() + (b[2] - a[2]).abs() > 1e-4 {
			yaw = (b[0] - a[0]).atan2(b[2] - a[2]);
		}
		(out, yaw)
	}
}

/// Reads etappe<n>.pth; empty if there is none.
pub fn load_paths(dir: &str, stage_file: &str) -> Vec<Path> {
	let mut out = Vec::new();
	let Some(d) = read_file_ci(dir, &format!("{stage_file}.pth")) else {
		return out;
	};
	if d.len() < 8 {
		return out;
	}
	let i32_at = |p: usize| rd32(&d[p..]) as i32;
	let count = i32_at(4);
	let mut p = 8usize;
	let mut i = 0;
	while i < count && p + 24 <= d.len() {
		let mut path = Path {
			start: i32_at(p),
			end: i32_at(p + 4),
			r#type: i32_at(p + 8),
			flags: i32_at(p + 12),
			time: f32::max(0.1, i32_at(p + 16) as f32 / 1000.0),
			points: Vec::new(),
		};
		let n = i32_at(p + 20);
		p += 24;
		let mut k = 0;
		while k < n && p + 16 <= d.len() {
			path.points.push(PathPoint { x: rdf32(&d[p + 4..]), y: rdf32(&d[p + 8..]), z: rdf32(&d[p + 12..]) });
			k += 1;
			p += 16;
		}
		out.push(path);
		i += 1;
	}
	out
}

fn sample(points: &[PathPoint], f: f32) -> [f32; 3] {
	let n = points.len() as i32;
	let s = f.clamp(0.0, 1.0) * (n - 1) as f32;
	let i = (s as i32).min(n - 2);
	let t = s - i as f32;
	let pt = |k: i32| points[k.clamp(0, n - 1) as usize];
	let (p0, p1, p2, p3) = (pt(i - 1), pt(i), pt(i + 1), pt(i + 2));
	let t2 = t * t;
	let t3 = t2 * t;
	let h00 = 2.0 * t3 - 3.0 * t2 + 1.0;
	let h10 = t3 - 2.0 * t2 + t;
	let h01 = -2.0 * t3 + 3.0 * t2;
	let h11 = t3 - t2;
	let axis = |a0: f32, a1: f32, a2: f32, a3: f32| h00 * a1 + h01 * a2 + h10 * (a2 - a0) * 0.5 + h11 * (a3 - a1) * 0.5;
	[axis(p0.x, p1.x, p2.x, p3.x), axis(p0.y, p1.y, p2.y, p3.y), axis(p0.z, p1.z, p2.z, p3.z)]
}

#[cfg(test)]
mod tests {
	use super::*;

	const DATA: &str = "/Users/xvilo/projects/A2Racer4-dump/disc/Data";

	#[test]
	fn spline_runs_through_the_points() {
		let path = Path {
			points: vec![
				PathPoint { x: 0.0, y: 0.0, z: 0.0 },
				PathPoint { x: 0.0, y: 0.0, z: 10.0 },
				PathPoint { x: 10.0, y: 0.0, z: 10.0 },
			],
			..Default::default()
		};
		let (p, yaw) = path.at(0.0);
		assert_eq!(p, [0.0, 0.0, 0.0]);
		assert!(yaw.abs() < 0.2);
		let (p, _) = path.at(0.5);
		assert_eq!(p, [0.0, 0.0, 10.0]);
		let (p, yaw) = path.at(1.0);
		assert_eq!(p, [10.0, 0.0, 10.0]);
		assert!((yaw - std::f32::consts::FRAC_PI_2).abs() < 0.2);
	}

	#[test]
	fn loads_stage_paths() {
		if !std::path::Path::new(DATA).exists() {
			return;
		}
		let paths = load_paths(DATA, "etappe0");
		assert!(!paths.is_empty());
		for p in &paths {
			assert!(p.time >= 0.1);
			assert!(!p.points.is_empty());
		}
		assert!(load_paths(DATA, "no_such_stage").is_empty());
	}
}
