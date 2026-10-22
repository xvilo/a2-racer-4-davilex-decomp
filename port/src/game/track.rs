//! A stage (Gm_ini.cpp load_track_info, anm_main.cpp, tob_main.cpp): its line in Raser.ini
//! [MAPS], its road, the animation definitions (each a list of frames, a model with its
//! texture) and the objects placed along the road.
//!
//!   Raser.ini [MAPS] n=  0 highway / 1 city, file name (etappe<n>), road, grass, second
//!                        grass and guard-rail textures, low/high resolution sky pictures,
//!                        the name shown in the menu, music index, timer, ambient light R,
//!                        G, B, track mode (0 normal, 1 chase)
//!   <anim>.ini           [config] n=<animation>; [<animation>] n=<model>.d3d,<texture>
//!                        (gen_anim.ini always, e<nn>_anim.ini per stage, L<n>_anim.ini per
//!                        league; Raser.ini [3D Anims])
//!   etappe<n>.ini        [objects] n=<mesh path>, <texture path>, name, type, <animation>,
//!                        ...: the one-frame animations of most of the stage's objects
//!   etappe<n>.pmp        each chunk's two values a and b are trigger numbers (etappe<n>.ini
//!                        [triggers]); the race starts at the chunk with 13 (StartPosition)
//!                        and runs towards higher chunk numbers (Tr_finis.cpp)
//!   anmtypes.ini         [typeN] AnimNames=<animation>,...; FrameK=<frame>,<ms>: the frames
//!                        the objects of type 12 (animated object) cycle through
//!   etappe<n>.omp        int32 count; then 68-byte records { int32 chunk, type; float
//!                        x, y, z; float rotation x, y, z (degrees); char animation[32];
//!                        int32 flags }; rotation y turns the model's +z towards +x
//!                        (its heading, like a car's yaw: the objects line up with the
//!                        drive map's lanes so)

use std::collections::BTreeMap;
use std::rc::Rc;

use crate::engine::mesh::Mesh;
use crate::engine::road::Road;
use crate::res::archive::{NamedArchive, find_file_ci, latin1, rd32, rdf32, read_file_ci};
use crate::xvga::inifile::{IniFile, atoi, split_fields};

#[derive(Clone, Debug)]
pub struct StageInfo {
	pub city: bool,
	pub file: String,
	pub road_texture: String,
	pub grass_texture: String,
	pub grass2_texture: String,
	pub rail_texture: String,
	pub sky_lo: String,
	pub sky_hi: String,
	pub name: String,
	pub music: i32,
	pub timer: i32,
	pub ambient: [i32; 3],
	/// 0 normal, 1 chase
	pub mode: i32,
}

impl Default for StageInfo {
	fn default() -> Self {
		StageInfo {
			city: false,
			file: String::new(),
			road_texture: String::new(),
			grass_texture: String::new(),
			grass2_texture: String::new(),
			rail_texture: String::new(),
			sky_lo: String::new(),
			sky_hi: String::new(),
			name: String::new(),
			music: 0,
			timer: 10000,
			ambient: [128, 128, 128],
			mode: 0,
		}
	}
}

#[derive(Clone, Debug, Default, PartialEq)]
pub struct AnimFrame {
	pub mesh: String,
	pub texture: String,
}

/// A frame sequence of anmtypes.ini (anm_type.cpp).
#[derive(Clone, Debug, Default)]
pub struct AnimType {
	/// lower case
	pub names: Vec<String>,
	/// animation frame, milliseconds
	pub frames: Vec<(i32, i32)>,
}

#[derive(Clone, Debug, Default)]
pub struct TrackObject {
	pub chunk: i32,
	pub r#type: i32,
	pub pos: [f32; 3],
	pub rot: [f32; 3],
	pub animation: String,
	pub flags: i32,
}

/// A node of the drive map (etappe<n>.dmp, rd_drmap.cpp): the lanes traffic and the
/// computer cars follow. File: int32 count; then 36-byte records { int32 flags, trigger;
/// float x, y, z; int32 next, left, right, previous } (-1: none). Lanes running the other
/// way link their "next" towards lower chunk numbers.
#[derive(Clone, Copy, Debug)]
pub struct DriveNode {
	pub flags: i32,
	pub trigger: i32,
	pub pos: [f32; 3],
	pub next: i32,
	pub left: i32,
	pub right: i32,
	pub prev: i32,
}

impl Default for DriveNode {
	fn default() -> Self {
		DriveNode { flags: 0, trigger: 0, pos: [0.0; 3], next: -1, left: -1, right: -1, prev: -1 }
	}
}

#[derive(Clone, Default)]
pub struct Track {
	pub info: StageInfo,
	pub road: Road,
	/// Animation name (lower case) -> frames.
	pub animations: BTreeMap<String, Vec<AnimFrame>>,
	pub objects: Vec<TrackObject>,
	pub anim_types: Vec<AnimType>,
	pub drive: Vec<DriveNode>,
}

fn lower(s: &str) -> String {
	s.to_ascii_lowercase()
}

/// The animations an anim ini defines ([config] lists their sections).
fn read_animations(dir: &str, file: &str, out: &mut BTreeMap<String, Vec<AnimFrame>>) {
	let mut ini = IniFile::default();
	let path = find_file_ci(dir, file);
	if path.is_empty() || !ini.load(&path) {
		return;
	}
	let n = ini.get_int("config", "count", 0);
	for i in 0..n {
		let name = ini.get("config", &i.to_string());
		if name.is_empty() {
			continue;
		}
		let mut frames = Vec::new();
		let count = ini.get_int(&name, "count", 0);
		for k in 0..count {
			let f = split_fields(&ini.get(&name, &k.to_string()), ',');
			frames.push(AnimFrame {
				mesh: f.first().cloned().unwrap_or_default(),
				texture: f.get(1).cloned().unwrap_or_default(),
			});
		}
		out.insert(lower(&name), frames);
	}
}

impl Track {
	/// Loads stage n (0-based, Raser.ini [MAPS]) from the data folder; an error message, or
	/// empty. league is 0..2.
	pub fn load(&mut self, dir: &str, stage: i32, league: i32) -> String {
		let mut raser = IniFile::default();
		let path = find_file_ci(dir, "Raser.ini");
		if path.is_empty() || !raser.load(&path) {
			return "cannot read Raser.ini".to_string();
		}
		let f = split_fields(&raser.get("MAPS", &stage.to_string()), ',');
		if f.len() < 15 {
			return format!("Raser.ini [MAPS] has no stage {stage}");
		}
		let info = &mut self.info;
		info.city = atoi(&f[0]) == 1;
		info.file = f[1].clone();
		info.road_texture = f[2].clone();
		info.grass_texture = f[3].clone();
		info.grass2_texture = f[4].clone();
		info.rail_texture = f[5].clone();
		info.sky_lo = f[6].clone();
		info.sky_hi = f[7].clone();
		info.name = f[8].clone();
		info.music = atoi(&f[9]);
		info.timer = atoi(&f[10]);
		for k in 0..3 {
			info.ambient[k] = atoi(&f[11 + k]);
		}
		info.mode = atoi(&f[14]);

		let err = self.road.load(dir, &self.info.file);
		if !err.is_empty() {
			return err;
		}

		self.animations.clear();
		read_animations(dir, &raser.get_or("3D Anims", "general", "gen_anim.ini"), &mut self.animations);
		read_animations(dir, &raser.get("3D Anims", &stage.to_string()), &mut self.animations);
		read_animations(dir, &raser.get("3D Anims", &format!("league{league}")), &mut self.animations);
		// Most of the stage's objects have a one-frame animation in etappe<n>.ini [objects]:
		// mesh path, texture path, name, type, animation, ...
		let mut stage_ini = IniFile::default();
		let stage_path = find_file_ci(dir, &format!("{}.ini", self.info.file));
		if !stage_path.is_empty() && stage_ini.load(&stage_path) {
			let base = |p: &str| -> String {
				match p.rfind(['\\', '/']) {
					None => p.to_string(),
					Some(s) => p[s + 1..].to_string(),
				}
			};
			let n = stage_ini.get_int("objects", "count", 0);
			for i in 0..n {
				let f = split_fields(&stage_ini.get("objects", &i.to_string()), ',');
				if f.len() > 4 && !self.animations.contains_key(&lower(&f[4])) {
					self.animations.insert(lower(&f[4]), vec![AnimFrame { mesh: base(&f[0]), texture: base(&f[1]) }]);
				}
			}
		}

		self.anim_types.clear();
		let mut at = IniFile::default();
		let at_path = find_file_ci(dir, "anmtypes.ini");
		if !at_path.is_empty() && at.load(&at_path) {
			let n = at.get_int("general", "NrAnims", 0);
			for i in 0..n {
				let sec = format!("type{i}");
				let mut t = AnimType::default();
				for a in split_fields(&at.get(&sec, "AnimNames"), ',') {
					t.names.push(lower(&a));
				}
				let m = at.get_int(&sec, "NrFrames", 0);
				for k in 0..m {
					let f = split_fields(&at.get(&sec, &format!("Frame{k}")), ',');
					if f.len() >= 2 {
						t.frames.push((atoi(&f[0]), 1.max(atoi(&f[1]))));
					}
				}
				self.anim_types.push(t);
			}
		}

		self.drive.clear();
		if let Some(dmp) = read_file_ci(dir, &format!("{}.dmp", self.info.file))
			&& dmp.len() >= 4
		{
			let i32_at = |p: usize| rd32(&dmp[p..]) as i32;
			let n = i32_at(0);
			let mut i = 0;
			while i < n && 4 + (i as usize + 1) * 36 <= dmp.len() {
				let p = 4 + i as usize * 36;
				let mut d = DriveNode { flags: i32_at(p), trigger: i32_at(p + 4), ..Default::default() };
				for k in 0..3 {
					d.pos[k] = rdf32(&dmp[p + 8 + 4 * k..]);
				}
				d.next = i32_at(p + 20);
				d.left = i32_at(p + 24);
				d.right = i32_at(p + 28);
				d.prev = i32_at(p + 32);
				self.drive.push(d);
				i += 1;
			}
		}

		self.objects.clear();
		if let Some(omp) = read_file_ci(dir, &format!("{}.omp", self.info.file))
			&& omp.len() >= 4
		{
			let i32_at = |p: usize| rd32(&omp[p..]) as i32;
			let n = i32_at(0);
			let mut i = 0;
			while i < n && 4 + (i as usize + 1) * 68 <= omp.len() {
				let p = 4 + i as usize * 68;
				let mut o = TrackObject { chunk: i32_at(p), r#type: i32_at(p + 4), ..Default::default() };
				for k in 0..3 {
					o.pos[k] = rdf32(&omp[p + 8 + 4 * k..]);
					o.rot[k] = rdf32(&omp[p + 20 + 4 * k..]);
				}
				let mut len = 0;
				while len < 32 && omp[p + 32 + len] != 0 {
					len += 1;
				}
				o.animation = latin1(&omp[p + 32..p + 32 + len]);
				o.flags = i32_at(p + 64);
				self.objects.push(o);
				i += 1;
			}
		}
		String::new()
	}

	/// The frames of an animation; None if it isn't defined.
	pub fn animation(&self, name: &str) -> Option<&Vec<AnimFrame>> {
		self.animations.get(&lower(name))
	}

	/// The frame sequence for an animation; None if it has none.
	pub fn anim_type(&self, name: &str) -> Option<&AnimType> {
		let key = lower(name);
		self.anim_types.iter().find(|t| t.names.iter().any(|n| *n == key))
	}

	/// The first chunk carrying a trigger (etappe<n>.ini [triggers]: 13 start position, 14
	/// finish position, 15 finish valid), or -1.
	pub fn find_trigger(&self, trigger: i32) -> i32 {
		for (i, c) in self.road.chunks.iter().enumerate() {
			if c.a == trigger || c.b == trigger {
				return i as i32;
			}
		}
		-1
	}

	/// The middle of a chunk's road surface.
	pub fn road_centre(&self, chunk: i32) -> [f32; 3] {
		let n = self.road.chunks.len() as i32;
		let c = &self.road.chunks[((chunk % n + n) % n) as usize];
		let mut sum = [0.0f32; 3];
		let mut k = 0;
		for q in &c.lists[0] {
			for v in &q.v {
				sum[0] += v.x;
				sum[1] += v.y;
				sum[2] += v.z;
				k += 1;
			}
		}
		let mut out = [0.0f32; 3];
		for i in 0..3 {
			out[i] = if k != 0 { sum[i] / k as f32 } else { c.pos[i] };
		}
		out
	}
}

/// Meshes from rcs, loaded once.
pub struct MeshCache {
	rcs: Rc<NamedArchive>,
	meshes: BTreeMap<String, Option<Rc<Mesh>>>,
}

impl MeshCache {
	pub fn new(rcs: Rc<NamedArchive>) -> Self {
		MeshCache { rcs, meshes: BTreeMap::new() }
	}

	/// None if the archive has no such model.
	pub fn get(&mut self, name: &str) -> Option<Rc<Mesh>> {
		let key = lower(name);
		if let Some(m) = self.meshes.get(&key) {
			return m.clone();
		}
		let mut m = None;
		if let Some(bytes) = self.rcs.read(&key) {
			let mut mesh = Mesh::default();
			if mesh.load(&bytes) {
				m = Some(Rc::new(mesh));
			}
		}
		self.meshes.insert(key, m.clone());
		m
	}
}

#[cfg(test)]
mod tests {
	use super::*;

	const DATA: &str = "/Users/xvilo/projects/A2Racer4-dump/disc/Data";

	#[test]
	fn loads_stage_0() {
		if !std::path::Path::new(DATA).exists() {
			return;
		}
		let mut t = Track::default();
		assert_eq!(t.load(DATA, 0, 0), "");
		assert_eq!(t.info.file.to_ascii_lowercase(), "etappe0");
		assert!(!t.road.chunks.is_empty());
		assert!(t.find_trigger(13) >= 0);
		assert_eq!(t.find_trigger(-12345), -1);
		assert!(!t.drive.is_empty());
		assert!(!t.objects.is_empty());
		assert!(!t.animations.is_empty());
		assert!(!t.anim_types.is_empty());
		for o in &t.objects {
			assert!(t.animation(&o.animation).is_some() || o.animation.is_empty() || o.r#type == 12);
		}
		let n = t.road.chunks.len() as i32;
		assert_eq!(t.road_centre(-1), t.road_centre(n - 1));
		for d in &t.drive {
			assert!(d.next < t.drive.len() as i32);
		}
	}

	#[test]
	fn missing_stage_is_an_error() {
		if !std::path::Path::new(DATA).exists() {
			return;
		}
		let mut t = Track::default();
		assert_eq!(t.load(DATA, 999, 0), "Raser.ini [MAPS] has no stage 999");
	}
}
