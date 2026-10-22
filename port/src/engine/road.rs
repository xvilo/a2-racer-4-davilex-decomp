//! The road and its surroundings (engine Rd_main.cpp, Rd_chunk.cpp): a stage is a ring of
//! chunks, each with up to four lists of quads drawn with the stage's four textures (road,
//! grass, second grass, guard rail; Raser.ini [MAPS]).
//!
//!   etappe<n>.rmp   int32 version (-1), int32 (a size hint), int32 chunk count; then per
//!                   chunk four lists, each { int32 count; quad[count] }, a quad being 4 x
//!                   { float x, y, z, u, v; u8 r, g, b, unused } and 6 x int32 vertex indices
//!                   (its two triangles)
//!   etappe<n>.pmp   int32 chunk count; then per chunk { float x, y, z; int32 a, b; three
//!                   lists { int32 count (at most 12); int32 values[count] } }, the first
//!                   the chunk's rails (Rd_chunk.cpp FUN_004ab6d0)
//!   etappe<n>.cmp   int32 count; then count x { float x, y, z, dx, dy, dz }: the rails
//!                   (rd_rail.cpp), invisible walls from (x, y, z) to (x+dx, y+dy, z+dz)
//!                   closing the road where its polygons don't

use crate::res::archive::read_file_ci;
use crate::res::image::rgb;

#[repr(C)]
#[derive(Clone, Copy, Default, Debug)]
pub struct RoadVertex {
	pub x: f32,
	pub y: f32,
	pub z: f32,
	pub u: f32,
	pub v: f32,
	/// RGBA bytes in memory
	pub colour: u32,
}

#[derive(Clone, Copy, Default, Debug)]
pub struct RoadQuad {
	pub v: [RoadVertex; 4],
	pub tri: [i32; 6],
}

#[derive(Clone, Copy, Default, Debug)]
pub struct RoadRail {
	pub pos: [f32; 3],
	pub dir: [f32; 3],
}

#[derive(Clone, Default, Debug)]
pub struct RoadChunk {
	pub pos: [f32; 3],
	/// trigger numbers (etappe<n>.ini [triggers])
	pub a: i32,
	pub b: i32,
	/// links[0]: the chunk's rails (indices into Road::rails)
	pub links: [Vec<i32>; 3],
	pub lists: [Vec<RoadQuad>; 4],
}

#[derive(Clone, Default, Debug)]
pub struct Road {
	pub chunks: Vec<RoadChunk>,
	pub rails: Vec<RoadRail>,
}

struct Reader<'a> {
	d: &'a [u8],
	p: usize,
	bad: bool,
}

impl<'a> Reader<'a> {
	fn new(d: &'a [u8]) -> Self {
		Reader { d, p: 0, bad: false }
	}

	fn i32(&mut self) -> i32 {
		if self.p + 4 > self.d.len() {
			self.bad = true;
			return 0;
		}
		let d = &self.d[self.p..];
		let v = (d[0] as u32 | (d[1] as u32) << 8 | (d[2] as u32) << 16 | (d[3] as u32) << 24) as i32;
		self.p += 4;
		v
	}

	fn f32(&mut self) -> f32 {
		f32::from_bits(self.i32() as u32)
	}
}

impl Road {
	/// Reads etappe<n>.rmp, .pmp and .cmp from the data folder; an error message, or empty.
	pub fn load(&mut self, dir: &str, name: &str) -> String {
		let Some(rmp) = read_file_ci(dir, &format!("{name}.rmp")) else {
			return format!("cannot read {name}.rmp");
		};
		let Some(pmp) = read_file_ci(dir, &format!("{name}.pmp")) else {
			return format!("cannot read {name}.pmp");
		};
		let mut r = Reader::new(&rmp);
		let mut p = Reader::new(&pmp);
		let version = r.i32();
		if version < 0 {
			r.i32(); // a size hint
		}
		let count = r.i32();
		if p.i32() != count || count < 0 {
			return format!("{name}: the .rmp and .pmp chunk counts differ");
		}
		self.chunks = vec![RoadChunk::default(); count as usize];
		for c in self.chunks.iter_mut() {
			for x in c.pos.iter_mut() {
				*x = p.f32();
			}
			c.a = p.i32();
			c.b = p.i32();
			for l in c.links.iter_mut() {
				let n = p.i32();
				let mut k = 0;
				while k < n && !p.bad {
					l.push(p.i32());
					k += 1;
				}
			}
			for list in c.lists.iter_mut() {
				let n = r.i32();
				let mut k = 0;
				while k < n && !r.bad {
					let mut q = RoadQuad::default();
					for v in q.v.iter_mut() {
						v.x = r.f32();
						v.y = r.f32();
						v.z = r.f32();
						v.u = r.f32();
						v.v = r.f32();
						let c = if version == -1 { r.i32() as u32 } else { 0xffffff };
						v.colour = rgb(c as u8, (c >> 8) as u8, (c >> 16) as u8);
					}
					for t in q.tri.iter_mut() {
						*t = r.i32() & 3;
					}
					list.push(q);
					k += 1;
				}
			}
			if r.bad || p.bad {
				return format!("{name}: the road files end early");
			}
		}
		self.rails.clear();
		if let Some(cmp) = read_file_ci(dir, &format!("{name}.cmp")) {
			let mut c = Reader::new(&cmp);
			let n = c.i32();
			for _ in 0..n.max(0) {
				let mut rail = RoadRail::default();
				for x in rail.pos.iter_mut().chain(rail.dir.iter_mut()) {
					*x = c.f32();
				}
				if c.bad {
					return format!("{name}: the rails end early");
				}
				self.rails.push(rail);
			}
		}
		String::new()
	}
}

#[cfg(test)]
mod tests {
	use super::*;

	#[test]
	fn loads_a_stage() {
		if !std::path::Path::new(&crate::res::archive::test_data()).is_dir() {
			return;
		}
		let mut road = Road::default();
		assert_eq!(road.load(&crate::res::archive::test_data(), "etappe0"), "");
		assert!(!road.chunks.is_empty());
		assert!(road.chunks.iter().any(|c| !c.lists[0].is_empty()));
		assert_eq!(Road::default().load(&crate::res::archive::test_data(), "nothing"), "cannot read nothing.rmp");
	}
}
