//! What the cars drive on and bump into, built from the road. The original hands the road's
//! polygons to the Ipion physics library (Rd_chunk.cpp: one physical object per chunk,
//! "ChunkMaterial"); the port keeps its own simple version: the road's level triangles (up
//! to ~40 degrees) are the ground, steeper ones (guard rails, kerbs, walls, embankments,
//! bridge sides) are walls.

use crate::engine::mesh::Mesh;
use crate::engine::road::Road;

#[derive(Clone, Copy, Debug)]
pub struct GroundHit {
	pub y: f32,
	pub normal: [f32; 3],
	/// Where the triangle came from: the road's lists 0 road, 1 grass, 2 second grass, 3
	/// rails; 3 also for objects.
	pub list: i32,
	/// The road's colour there (RGBA bytes in memory): its light, lighting the cars.
	pub colour: u32,
}

impl Default for GroundHit {
	fn default() -> Self {
		GroundHit { y: 0.0, normal: [0.0, 1.0, 0.0], list: 0, colour: 0xffffffff }
	}
}

#[derive(Clone, Copy)]
struct Tri {
	a: [f32; 3],
	b: [f32; 3],
	c: [f32; 3],
	normal: [f32; 3],
	list: i32,
	colour: u32,
}

/// An upright triangle, seen from the side: its base edge in the ground plane, and its
/// three corners as (distance along that edge, height), so the wall's height can be
/// found at any point along it (a ramp's side is low at one end, high at the other).
#[derive(Clone, Copy, Default)]
struct Wall {
	x0: f32,
	z0: f32,
	x1: f32,
	z1: f32,
	s: [f32; 3],
	y: [f32; 3],
	ymin: f32,
	ymax: f32,
	/// The side the face shows (horizontal unit vector): walls only block from there,
	/// like the back of a ramp's lip, which the car drives over, not into. Two-sided
	/// things (guard rails) are modelled with a face on each side.
	nx: f32,
	nz: f32,
}

#[derive(Clone, Default)]
struct Chunk {
	pos: [f32; 3],
	ground: Vec<Tri>,
	walls: Vec<Wall>,
}

#[derive(Default)]
pub struct CollisionWorld {
	chunks: Vec<Chunk>,
}

/// Chunks searched either side of the given one.
const NEAR: i32 = 2;

/// gl_rotate's rotation of v about a unit axis.
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

/// Whether (x, z) lies in the triangle's footprint; the height there.
fn height_in(a: &[f32; 3], b: &[f32; 3], c: &[f32; 3], x: f32, z: f32) -> Option<f32> {
	let d = (b[2] - c[2]) * (a[0] - c[0]) + (c[0] - b[0]) * (a[2] - c[2]);
	if d.abs() < 1e-9 {
		return None;
	}
	let l1 = ((b[2] - c[2]) * (x - c[0]) + (c[0] - b[0]) * (z - c[2])) / d;
	let l2 = ((c[2] - a[2]) * (x - c[0]) + (a[0] - c[0]) * (z - c[2])) / d;
	let l3 = 1.0 - l1 - l2;
	let eps = -1e-4f32;
	if l1 < eps || l2 < eps || l3 < eps {
		return None;
	}
	Some(l1 * a[1] + l2 * b[1] + l3 * c[1])
}

fn min3(a: f32, b: f32, c: f32) -> f32 {
	let m = if b < a { b } else { a };
	if c < m { c } else { m }
}

fn max3(a: f32, b: f32, c: f32) -> f32 {
	let m = if a < b { b } else { a };
	if m < c { c } else { m }
}

impl Wall {
	/// The wall's bottom and top at distance t (0..1) along the base edge.
	fn extent(&self, t: f32) -> Option<(f32, f32)> {
		let s = &self.s;
		let y = &self.y;
		let mut bottom = 0f32;
		let mut top = 0f32;
		let mut any = false;
		for k in 0..3 {
			let j = (k + 1) % 3;
			let s0 = s[k];
			let s1 = s[j];
			if t < s0.min(s1) - 1e-4 || t > s0.max(s1) + 1e-4 {
				continue;
			}
			let yy = if (s1 - s0).abs() < 1e-6 { y[k].max(y[j]) } else { y[k] + (y[j] - y[k]) * (t - s0) / (s1 - s0) };
			if (s1 - s0).abs() < 1e-6 {
				// An upright edge: it spans both heights.
				bottom = if any { bottom.min(y[k].min(y[j])) } else { y[k].min(y[j]) };
				top = if any { top.max(yy) } else { yy };
			} else {
				bottom = if any { bottom.min(yy) } else { yy };
				top = if any { top.max(yy) } else { yy };
			}
			any = true;
		}
		if any { Some((bottom, top)) } else { None }
	}
}

impl CollisionWorld {
	pub fn build(&mut self, road: &Road) {
		self.chunks.clear();
		self.chunks.resize(road.chunks.len(), Chunk::default());
		for (i, rc) in road.chunks.iter().enumerate() {
			self.chunks[i].pos = rc.pos;
			for l in 0..4 {
				for q in &rc.lists[l] {
					for t in 0..2 {
						let mut p = [[0f32; 3]; 3];
						for k in 0..3 {
							let v = &q.v[q.tri[t * 3 + k] as usize];
							p[k] = [v.x, v.y, v.z];
						}
						self.add_triangle(
							i as i32,
							&p[0],
							&p[1],
							&p[2],
							l as i32,
							q.v[q.tri[t * 3 + 2] as usize].colour,
						);
					}
				}
			}
		}
	}

	/// Adds a solid object (a model placed like the stage's objects: at pos, turned by rot
	/// in degrees) to a chunk's ground and walls.
	pub fn add_mesh(&mut self, m: &Mesh, pos: &[f32; 3], rot: &[f32; 3], chunk: i32) {
		if self.chunks.is_empty() {
			return;
		}
		let n = self.chunks.len() as i32;
		let chunk = ((chunk % n) + n) % n;
		let world: Vec<[f32; 3]> = m
			.vertices
			.iter()
			.map(|mv| {
				let mut v = [mv.x, mv.y, mv.z];
				rotate(&mut v, rot[2], 0.0, 0.0, 1.0);
				rotate(&mut v, rot[0], 1.0, 0.0, 0.0);
				rotate(&mut v, rot[1], 0.0, 1.0, 0.0);
				[v[0] + pos[0], v[1] + pos[1], v[2] + pos[2]]
			})
			.collect();
		let mut i = 0;
		while i + 2 < m.indices.len() {
			let (a, b, c) = (m.indices[i] as usize, m.indices[i + 1] as usize, m.indices[i + 2] as usize);
			self.add_triangle(chunk, &world[a], &world[b], &world[c], 3, 0xffffffff);
			i += 3;
		}
	}

	/// Sorts a triangle into the chunk's ground or walls; list: where it came from.
	fn add_triangle(&mut self, chunk: i32, a: &[f32; 3], b: &[f32; 3], c3: &[f32; 3], list: i32, colour: u32) {
		let c = &mut self.chunks[chunk as usize];
		let mut tr = Tri { a: *a, b: *b, c: *c3, normal: [0.0; 3], list: 0, colour: 0 };
		let mut u = [0f32; 3];
		let mut w = [0f32; 3];
		for k in 0..3 {
			u[k] = tr.b[k] - tr.a[k];
			w[k] = tr.c[k] - tr.a[k];
		}
		let mut n = [u[1] * w[2] - u[2] * w[1], u[2] * w[0] - u[0] * w[2], u[0] * w[1] - u[1] * w[0]];
		let len = (n[0] * n[0] + n[1] * n[1] + n[2] * n[2]).sqrt();
		if len < 1e-6 {
			return;
		}
		for x in n.iter_mut() {
			*x /= len;
		}
		let raw = n;
		if n[1] < 0.0 {
			// Ground faces point up; a downward one is ground seen from below (an underpass
			// ceiling): it still counts, turned over.
			for x in n.iter_mut() {
				*x = -*x;
			}
		}
		if n[1] > 0.75 {
			tr.normal = n;
			tr.list = list;
			tr.colour = colour;
			c.ground.push(tr);
			return;
		}
		// An upright or steep face (over ~40 degrees): its longest horizontal edge is the
		// wall.
		let e = [[tr.a, tr.b], [tr.b, tr.c], [tr.c, tr.a]];
		let mut best = 0;
		let mut bl = -1f32;
		for k in 0..3 {
			let dx = e[k][1][0] - e[k][0][0];
			let dz = e[k][1][2] - e[k][0][2];
			let l2 = dx * dx + dz * dz;
			if l2 > bl {
				bl = l2;
				best = k;
			}
		}
		if bl < 1.0 {
			return;
		}
		let mut wl = Wall {
			x0: e[best][0][0],
			z0: e[best][0][2],
			x1: e[best][1][0],
			z1: e[best][1][2],
			ymin: min3(tr.a[1], tr.b[1], tr.c[1]),
			ymax: max3(tr.a[1], tr.b[1], tr.c[1]),
			..Wall::default()
		};
		let hl = (raw[0] * raw[0] + raw[2] * raw[2]).sqrt();
		if hl < 1e-6 {
			return;
		}
		wl.nx = raw[0] / hl;
		wl.nz = raw[2] / hl;
		let pt = [tr.a, tr.b, tr.c];
		let ex = wl.x1 - wl.x0;
		let ez = wl.z1 - wl.z0;
		for k in 0..3 {
			wl.s[k] = ((pt[k][0] - wl.x0) * ex + (pt[k][2] - wl.z0) * ez) / bl;
			wl.y[k] = pt[k][1];
		}
		// Low edges (kerbs) are driven over.
		if wl.ymax - wl.ymin < 4.0 {
			return;
		}
		c.walls.push(wl);
	}

	/// The chunk nearest to (x, z), searching outwards from hint along the ring.
	pub fn nearest_chunk(&self, x: f32, z: f32, hint: i32) -> i32 {
		let n = self.chunks.len() as i32;
		if n == 0 {
			return 0;
		}
		if hint < 0 || hint >= n {
			// No idea where we are: look at all of them.
			let mut best = 0;
			let mut bd = 1e30f32;
			for i in 0..n {
				let c = &self.chunks[i as usize];
				let dx = c.pos[0] - x;
				let dz = c.pos[2] - z;
				let d = dx * dx + dz * dz;
				if d < bd {
					bd = d;
					best = i;
				}
			}
			return best;
		}
		let mut best = hint;
		let mut bd = 1e30f32;
		for k in -6..=6 {
			let i = ((hint + k) % n + n) % n;
			let c = &self.chunks[i as usize];
			let dx = c.pos[0] - x;
			let dz = c.pos[2] - z;
			let d = dx * dx + dz * dz;
			if d < bd {
				bd = d;
				best = i;
			}
		}
		best
	}

	/// The highest ground at (x, z) no higher than y_max, in the chunks around chunk; None if
	/// there is none (off the edge of the world).
	pub fn ground(&self, x: f32, z: f32, y_max: f32, chunk: i32) -> Option<GroundHit> {
		let n = self.chunks.len() as i32;
		let mut hit: Option<GroundHit> = None;
		for k in -NEAR..=NEAR {
			let c = &self.chunks[(((chunk + k) % n + n) % n) as usize];
			for t in &c.ground {
				let Some(y) = height_in(&t.a, &t.b, &t.c, x, z) else {
					continue;
				};
				if y > y_max {
					continue;
				}
				if hit.is_none_or(|h| y > h.y) {
					hit = Some(GroundHit { y, normal: t.normal, list: t.list, colour: t.colour });
				}
			}
		}
		hit
	}

	/// Pushes a circle (centre x, z; radius r; vertical extent y0..y1) out of the walls around
	/// chunk. Returns the summed push direction (x, z) if it touched one.
	pub fn push_out(&self, x: &mut f32, z: &mut f32, r: f32, y0: f32, y1: f32, chunk: i32) -> Option<[f32; 2]> {
		let n = self.chunks.len() as i32;
		let mut touched = false;
		let mut nout = [0f32; 2];
		for k in -NEAR..=NEAR {
			let c = &self.chunks[(((chunk + k) % n + n) % n) as usize];
			for w in &c.walls {
				if w.ymax < y0 || w.ymin > y1 {
					continue;
				}
				let ex = w.x1 - w.x0;
				let ez = w.z1 - w.z0;
				let l2 = ex * ex + ez * ez;
				let mut t = ((*x - w.x0) * ex + (*z - w.z0) * ez) / l2;
				t = t.clamp(0.0, 1.0);
				let Some((bottom, top)) = w.extent(t) else {
					continue;
				};
				if top < y0 || bottom > y1 || top - bottom < 4.0 {
					continue;
				}
				let px = w.x0 + ex * t;
				let pz = w.z0 + ez * t;
				let dx = *x - px;
				let dz = *z - pz;
				let d2 = dx * dx + dz * dz;
				if d2 >= r * r || dx * w.nx + dz * w.nz < 0.0 {
					continue;
				}
				let d = d2.sqrt();
				let (nx, nz) = if d > 1e-4 { (dx / d, dz / d) } else { (w.nx, w.nz) };
				if std::env::var_os("A2_TRACE_WALLS").is_some() {
					println!(
						"        wall chunk {} ({:.0} {:.0})-({:.0} {:.0}) y {:.0}..{:.0} at t {:.2}: {:.0}..{:.0}, car y {:.0}..{:.0}",
						((chunk + k) % n + n) % n,
						w.x0,
						w.z0,
						w.x1,
						w.z1,
						w.ymin,
						w.ymax,
						t,
						bottom,
						top,
						y0,
						y1
					);
				}
				*x += nx * (r - d);
				*z += nz * (r - d);
				nout[0] += nx;
				nout[1] += nz;
				touched = true;
			}
		}
		if touched { Some(nout) } else { None }
	}

	pub fn chunk_count(&self) -> i32 {
		self.chunks.len() as i32
	}
}

#[cfg(test)]
mod tests {
	use super::*;

	const DATA: &str = "/Users/xvilo/projects/A2Racer4-dump/disc/Data";

	#[test]
	fn the_road_is_ground_under_its_chunks() {
		if !std::path::Path::new(DATA).is_dir() {
			return;
		}
		let mut road = Road::default();
		assert_eq!(road.load(DATA, "etappe0"), "");
		let mut world = CollisionWorld::default();
		world.build(&road);
		assert_eq!(world.chunk_count() as usize, road.chunks.len());
		let q = road.chunks.iter().enumerate().find_map(|(i, c)| c.lists[0].first().map(|q| (i, *q))).unwrap();
		let (i, q) = q;
		let cx = (q.v[0].x + q.v[1].x + q.v[2].x + q.v[3].x) / 4.0;
		let cz = (q.v[0].z + q.v[1].z + q.v[2].z + q.v[3].z) / 4.0;
		let hit = world.ground(cx, cz, 1e9, i as i32);
		assert!(hit.is_some());
		assert!(hit.unwrap().normal[1] > 0.75);
	}
}
