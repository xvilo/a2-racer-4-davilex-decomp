//! Reading the game straight from its CD image: a raw .bin (2352-byte sectors, Mode 1 or
//! Mode 2 XA) or an .iso (2048-byte sectors). The disc's Data folder is unpacked once into
//! a folder, which then serves as the data folder.

use std::fs::{self, File};
use std::io::{Read, Seek, SeekFrom};
use std::path::Path;

use crate::res::archive::{equal_ci, find_file_ci, rd32};

const SECTOR: usize = 2048;
const SYNC_PATTERN: [u8; 12] = [0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0];

struct Disc {
	f: File,
	/// 2352-byte sectors
	raw: bool,
	/// Joliet (UCS-2 names, case kept) when the disc has it, else ISO 9660 ("NAME;1").
	joliet: bool,
}

impl Disc {
	/// The 2048 user bytes of a sector.
	fn read_sector(&mut self, lba: u32, out: &mut [u8; SECTOR]) -> bool {
		if !self.raw {
			return self.f.seek(SeekFrom::Start(lba as u64 * SECTOR as u64)).is_ok() && self.f.read_exact(out).is_ok();
		}
		let mut s = [0u8; 2352];
		if self.f.seek(SeekFrom::Start(lba as u64 * 2352)).is_err() || self.f.read_exact(&mut s).is_err() {
			return false;
		}
		if s[..12] != SYNC_PATTERN {
			out.fill(0);
			return true;
		}
		// Mode 1: data after the 16-byte header; Mode 2 XA form 1: after the subheader too.
		let at = if s[15] == 1 { 16 } else { 24 };
		out.copy_from_slice(&s[at..at + SECTOR]);
		true
	}

	fn read_extent(&mut self, mut lba: u32, size: u32) -> Option<Vec<u8>> {
		let mut out = vec![0; size as usize];
		let mut sector = [0u8; SECTOR];
		let mut done = 0usize;
		while done < size as usize {
			if !self.read_sector(lba, &mut sector) {
				return None;
			}
			let n = (size as usize - done).min(SECTOR);
			out[done..done + n].copy_from_slice(&sector[..n]);
			done += SECTOR;
			lba += 1;
		}
		Some(out)
	}
}

fn record_name(r: &[u8], joliet: bool) -> String {
	let n = r[32] as usize;
	let mut name = String::new();
	if joliet {
		// UCS-2 big endian; the game's names are plain ASCII.
		let mut i = 0;
		while i + 1 < n {
			let c = (r[33 + i] as u32) << 8 | r[34 + i] as u32;
			name.push(if c < 0x100 { char::from(c as u8) } else { '_' });
			i += 2;
		}
	} else {
		name = r[33..33 + n].iter().map(|&c| c as char).collect();
	}
	if let Some(semi) = name.find(';') {
		name.truncate(semi);
	}
	if name.ends_with('.') {
		name.pop();
	}
	name
}

/// Copies the directory at lba (size bytes) into out, recursively.
fn unpack_dir(d: &mut Disc, lba: u32, size: u32, out: &Path, files: &mut i32) -> String {
	let Some(dir) = d.read_extent(lba, size) else {
		return "cannot read the disc's directories".into();
	};
	let _ = fs::create_dir_all(out);
	let mut i = 0usize;
	while i < size as usize {
		let len = dir[i] as usize;
		if len == 0 {
			i = (i / SECTOR + 1) * SECTOR; // records don't cross sectors
			continue;
		}
		let r = &dir[i..];
		i += len;
		if r[32] == 0 || (r[32] == 1 && r[33] <= 1) {
			continue; // "." and ".."
		}
		let name = record_name(r, d.joliet);
		if r[25] & 2 != 0 {
			let err = unpack_dir(d, rd32(&r[2..]), rd32(&r[10..]), &out.join(&name), files);
			if !err.is_empty() {
				return err;
			}
			continue;
		}
		let path = out.join(&name);
		let ok = match d.read_extent(rd32(&r[2..]), rd32(&r[10..])) {
			Some(data) => fs::write(&path, data).is_ok(),
			None => false,
		};
		if !ok {
			let _ = fs::remove_file(&path);
			return format!("cannot unpack {name} into {}", out.display());
		}
		*files += 1;
	}
	String::new()
}

fn ends_with_ci(s: &str, suffix: &str) -> bool {
	s.len() >= suffix.len()
		&& s.is_char_boundary(s.len() - suffix.len())
		&& equal_ci(&s[s.len() - suffix.len()..], suffix)
}

/// Whether the path names a CD image (by its extension).
pub fn is_disc_image(path: &str) -> bool {
	ends_with_ci(path, ".bin") || ends_with_ci(path, ".iso") || ends_with_ci(path, ".img")
}

/// Unpacks the image's Data folder into out_dir (created if needed); an error message, or
/// empty on success. Does nothing when out_dir already holds the game.
pub fn disc_image_unpack(image: &str, out_dir: &str) -> String {
	if !find_file_ci(out_dir, "spel.dat").is_empty() {
		return String::new();
	}
	let Ok(mut f) = File::open(image) else {
		return format!("cannot open {image}");
	};
	let mut head = [0u8; 12];
	let raw = f.read_exact(&mut head).is_ok() && head == SYNC_PATTERN;
	let mut d = Disc { f, raw, joliet: false };
	// The volume descriptors from sector 16: the primary one (1), a Joliet one (2, with the
	// UCS-2 escape sequence), up to the terminator (255).
	let mut vd = [0u8; SECTOR];
	let mut root = [0u8; 34];
	let mut found = false;
	for s in 16..32 {
		if !d.read_sector(s, &mut vd) || vd[0] == 255 {
			break;
		}
		if &vd[1..6] != b"CD001" {
			break;
		}
		let joliet = vd[0] == 2 && vd[88] == b'%' && vd[89] == b'/' && b"@CE".contains(&vd[90]);
		if vd[0] == 1 || joliet {
			if !found || joliet {
				root.copy_from_slice(&vd[156..190]);
				d.joliet = joliet;
			}
			found = true;
		}
	}
	if !found {
		return format!("{image}: not an ISO 9660 CD image");
	}
	// The game's files are all under Data.
	let Some(dir) = d.read_extent(rd32(&root[2..]), rd32(&root[10..])) else {
		return format!("cannot read {image}");
	};
	let mut i = 0usize;
	while i < dir.len() {
		let len = dir[i] as usize;
		if len == 0 {
			i = (i / SECTOR + 1) * SECTOR;
			continue;
		}
		let r = &dir[i..];
		i += len;
		if r[25] & 2 != 0 && equal_ci(&record_name(r, d.joliet), "data") {
			eprintln!("unpacking {image} into {out_dir} (once)");
			let mut files = 0;
			let err = unpack_dir(&mut d, rd32(&r[2..]), rd32(&r[10..]), Path::new(out_dir), &mut files);
			if err.is_empty() {
				eprintln!("unpacked {files} files");
			}
			return err;
		}
	}
	format!("{image}: no Data folder (is this the A2 Racer 4 CD?)")
}
