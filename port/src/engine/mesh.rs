//! The models (.d3d in rcs), as dx3d/Mesh.cpp reads them:
//!
//!   int32 a                     a < 0: the version (-1: vertices carry a colour), and the
//!                               vertex count follows; otherwise a is the vertex count
//!                               (version 0)
//!   int32 triangle count
//!   vertices                    version -1: 49 bytes { float x, y, z, nx, ny, nz, u, v,
//!                               r, g, b, a (0..1); u8 unused }; version 0: 33 bytes (no
//!                               colour)
//!   triangles                   9 bytes { u16 a, b, c; u8 unused[3] }
//!
//! The texture is not in the file: the animation definitions pair each model with one.

use crate::res::archive::{rd32, rdf32};
use crate::res::image::{rgb, rgba};

#[repr(C)]
#[derive(Clone, Copy, Default, Debug)]
pub struct MeshVertex {
	pub x: f32,
	pub y: f32,
	pub z: f32,
	pub nx: f32,
	pub ny: f32,
	pub nz: f32,
	pub u: f32,
	pub v: f32,
	/// RGBA bytes in memory; white for version 0
	pub colour: u32,
}

#[derive(Clone, Default, Debug)]
pub struct Mesh {
	pub vertices: Vec<MeshVertex>,
	/// three per triangle
	pub indices: Vec<u16>,
	/// bounding box
	pub min: [f32; 3],
	pub max: [f32; 3],
}

/// A colour channel, 0..1 in the file.
fn channel(c: f32) -> u8 {
	((c * 255.0 + 0.5) as i32).clamp(0, 255) as u8
}

impl Mesh {
	/// Reads a .d3d file's bytes; false if they don't hold a model.
	pub fn load(&mut self, d: &[u8]) -> bool {
		if d.len() < 8 {
			return false;
		}
		let a = rd32(d) as i32;
		let mut version = 0;
		let mut p = 4usize;
		let mut nv = a;
		if a < 0 {
			version = a;
			nv = rd32(&d[p..]) as i32;
			p += 4;
		}
		if p + 4 > d.len() {
			return false;
		}
		let nt = rd32(&d[p..]) as i32;
		p += 4;
		let vs: usize = if version == -1 { 49 } else { 33 };
		if nv < 0 || nt < 0 || p + nv as usize * vs + nt as usize * 9 > d.len() {
			return false;
		}
		self.vertices.resize(nv as usize, MeshVertex::default());
		for o in self.vertices.iter_mut() {
			let v = &d[p..];
			o.x = rdf32(v);
			o.y = rdf32(&v[4..]);
			o.z = rdf32(&v[8..]);
			o.nx = rdf32(&v[12..]);
			o.ny = rdf32(&v[16..]);
			o.nz = rdf32(&v[20..]);
			o.u = rdf32(&v[24..]);
			o.v = rdf32(&v[28..]);
			o.colour = if version == -1 {
				rgba(
					channel(rdf32(&v[32..])),
					channel(rdf32(&v[36..])),
					channel(rdf32(&v[40..])),
					channel(rdf32(&v[44..])),
				)
			} else {
				rgb(255, 255, 255)
			};
			p += vs;
		}
		self.indices.resize(nt as usize * 3, 0);
		for i in 0..nt as usize {
			for k in 0..3 {
				let ix = (d[p + 2 * k] as u16) | (d[p + 2 * k + 1] as u16) << 8;
				self.indices[i * 3 + k] = if (ix as i32) < nv { ix } else { 0 };
			}
			p += 9;
		}
		for k in 0..3 {
			self.min[k] = if self.vertices.is_empty() { 0.0 } else { 1e30 };
			self.max[k] = if self.vertices.is_empty() { 0.0 } else { -1e30 };
		}
		for v in &self.vertices {
			let c = [v.x, v.y, v.z];
			for k in 0..3 {
				if c[k] < self.min[k] {
					self.min[k] = c[k];
				}
				if self.max[k] < c[k] {
					self.max[k] = c[k];
				}
			}
		}
		true
	}
}

#[cfg(test)]
mod tests {
	use super::*;
	use crate::res::archive::NamedArchive;

	const DATA: &str = "/Users/xvilo/projects/A2Racer4-dump/disc/Data";

	#[test]
	fn loads_a_model_from_rcs() {
		if !std::path::Path::new(DATA).is_dir() {
			return;
		}
		let mut rcs = NamedArchive::default();
		assert!(rcs.open(DATA, "rcs"));
		let bytes = rcs.read("humvee.d3d").expect("humvee.d3d");
		let mut m = Mesh::default();
		assert!(m.load(&bytes));
		assert!(!m.vertices.is_empty());
		assert_eq!(m.indices.len() % 3, 0);
		assert!(m.indices.iter().all(|&i| (i as usize) < m.vertices.len()));
		for k in 0..3 {
			assert!(m.min[k] <= m.max[k]);
		}
		assert!(!Mesh::default().load(&bytes[..6]));
	}
}
