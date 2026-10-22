//! Files on the disc and Davilex's resource archives (the xvga library's .IND/.IMG pairs).
//!
//!   named   (Data/rcs, Data/MenuData/MenuRcs)
//!           IND: u16 count, then count x 24-byte entries
//!                { char name[16]; u32 unused; u32 offset into IMG }
//!           An entry runs to the next entry's offset (or the end of the IMG).
//!   sprites (Data/RC)
//!           IND: u16 count, then count x u32 offset into IMG
//!           IMG: { u16 width, height, center_x, center_y; u8 pixels[w*h] } per sprite
//!
//! The game's text is Windows-1252. The port keeps it in Rust strings one char per byte
//! (char U+00xx for byte 0xxx), so that it goes back to the same bytes; `latin1` and
//! `latin1_bytes` convert.

use std::fs;
use std::io::{Read, Seek, SeekFrom};
use std::path::PathBuf;

pub fn rd16(p: &[u8]) -> u16 {
	u16::from_le_bytes([p[0], p[1]])
}

pub fn rd32(p: &[u8]) -> u32 {
	u32::from_le_bytes([p[0], p[1], p[2], p[3]])
}

pub fn rdf32(p: &[u8]) -> f32 {
	f32::from_le_bytes([p[0], p[1], p[2], p[3]])
}

/// Bytes of the game's text as a string, one char per byte.
pub fn latin1(b: &[u8]) -> String {
	b.iter().map(|&c| c as char).collect()
}

/// The bytes a `latin1` string came from (chars above U+00FF become '?').
pub fn latin1_bytes(s: &str) -> Vec<u8> {
	s.chars().map(|c| if (c as u32) < 0x100 { c as u32 as u8 } else { b'?' }).collect()
}

/// ASCII case-insensitive equality.
pub fn equal_ci(a: &str, b: &str) -> bool {
	a.eq_ignore_ascii_case(b)
}

/// The path of rel ("MenuData/MenuRcs.IND") under dir, matching each name without regard to
/// case (the disc's names are mixed case, and copies may differ); empty if missing.
pub fn find_file_ci(dir: &str, rel: &str) -> String {
	let mut path = PathBuf::from(dir);
	for part in rel.split(['/', '\\']) {
		if part.is_empty() {
			continue;
		}
		if path.join(part).exists() {
			path.push(part);
			continue;
		}
		let found = fs::read_dir(&path).ok().and_then(|entries| {
			entries.flatten().find(|e| equal_ci(&e.file_name().to_string_lossy(), part)).map(|e| e.path())
		});
		match found {
			Some(p) => path = p,
			None => return String::new(),
		}
	}
	path.to_string_lossy().into_owned()
}

/// A whole file found with find_file_ci; None if missing or unreadable.
pub fn read_file_ci(dir: &str, rel: &str) -> Option<Vec<u8>> {
	let path = find_file_ci(dir, rel);
	if path.is_empty() {
		return None;
	}
	fs::read(path).ok()
}

/// Tests: the game's files (the CD's root), from A2_TEST_DATA or `A2Racer4-dump/disc` next to
/// the repository; tests that need them skip when they are missing.
#[cfg(test)]
pub fn test_disc() -> String {
	std::env::var("A2_TEST_DATA")
		.unwrap_or_else(|_| concat!(env!("CARGO_MANIFEST_DIR"), "/../../A2Racer4-dump/disc").to_string())
}

#[cfg(test)]
pub fn test_data() -> String {
	test_disc() + "/Data"
}

struct Entry {
	name: String,
	offset: u32,
	size: u32,
}

#[derive(Default)]
pub struct NamedArchive {
	entries: Vec<Entry>,
	img_path: String,
}

impl NamedArchive {
	/// Reads <dir>/<name>.IND and keeps <name>.IMG open for reading entries.
	pub fn open(&mut self, dir: &str, name: &str) -> bool {
		self.img_path = find_file_ci(dir, &format!("{name}.IMG"));
		if self.img_path.is_empty() {
			return false;
		}
		let Some(ind) = read_file_ci(dir, &format!("{name}.IND")) else {
			return false;
		};
		if ind.len() < 2 {
			return false;
		}
		let img_size = fs::metadata(&self.img_path).map(|m| m.len() as u32).unwrap_or(0);
		let n = rd16(&ind) as usize;
		if ind.len() < 2 + n * 24 {
			return false;
		}
		self.entries.clear();
		for i in 0..n {
			let e = &ind[2 + i * 24..2 + i * 24 + 24];
			let len = e[..16].iter().position(|&c| c == 0).unwrap_or(16);
			self.entries.push(Entry { name: latin1(&e[..len]), offset: rd32(&e[20..]), size: 0 });
		}
		// Each entry runs to the next higher offset.
		let offsets: Vec<u32> = self.entries.iter().map(|e| e.offset).collect();
		for e in &mut self.entries {
			let mut end = img_size;
			for &o in &offsets {
				if o > e.offset && o < end {
					end = o;
				}
			}
			e.size = end.saturating_sub(e.offset);
		}
		true
	}

	fn find(&self, file: &str) -> Option<&Entry> {
		self.entries.iter().find(|e| equal_ci(&e.name, file))
	}

	pub fn has(&self, file: &str) -> bool {
		self.find(file).is_some()
	}

	/// The file's bytes; None if the archive has no such file (names ignore case).
	pub fn read(&self, file: &str) -> Option<Vec<u8>> {
		let e = self.find(file)?;
		let mut f = fs::File::open(&self.img_path).ok()?;
		let mut out = vec![0; e.size as usize];
		f.seek(SeekFrom::Start(e.offset as u64)).ok()?;
		f.read_exact(&mut out).ok()?;
		Some(out)
	}
}

#[derive(Default, Clone)]
pub struct Sprite {
	pub width: i32,
	pub height: i32,
	pub center_x: i32,
	pub center_y: i32,
	/// 8-bit palette indices
	pub pixels: Vec<u8>,
}

pub fn load_sprites(dir: &str, name: &str) -> Option<Vec<Sprite>> {
	let ind = read_file_ci(dir, &format!("{name}.IND"))?;
	let img = read_file_ci(dir, &format!("{name}.IMG"))?;
	if ind.len() < 2 {
		return None;
	}
	let n = rd16(&ind) as usize;
	let mut out = Vec::new();
	let mut i = 0;
	while i < n && 2 + i * 4 + 4 <= ind.len() {
		let off = rd32(&ind[2 + i * 4..]) as usize;
		let mut s = Sprite::default();
		if off + 8 <= img.len() {
			s.width = rd16(&img[off..]) as i32;
			s.height = rd16(&img[off + 2..]) as i32;
			s.center_x = rd16(&img[off + 4..]) as i32;
			s.center_y = rd16(&img[off + 6..]) as i32;
			let px = s.width as usize * s.height as usize;
			if off + 8 + px <= img.len() {
				s.pixels = img[off + 8..off + 8 + px].to_vec();
			}
		}
		out.push(s);
		i += 1;
	}
	Some(out)
}
