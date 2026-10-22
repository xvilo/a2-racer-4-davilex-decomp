//! What the port takes from the menu program itself (Data/MenuData/Menu.exe, a Delphi
//! program): its forms, stored as binary DFM resources (RCDATA, named after their class:
//! TFRMMAINSCREEN), and its classes' ancestry, from the class tables (VMTs) Delphi keeps
//! for every class, since an inherited form's DFM only holds what differs from its
//! parent's. The program is read, never run.

use std::collections::BTreeMap;
use std::fs;

use crate::res::archive::latin1;

fn rd32(p: &[u8]) -> u32 {
	p[0] as u32 | (p[1] as u32) << 8 | (p[2] as u32) << 16 | (p[3] as u32) << 24
}

fn rd16(p: &[u8]) -> u16 {
	(p[0] as u16) | (p[1] as u16) << 8
}

fn upper(s: &str) -> String {
	s.chars().map(|c| c.to_ascii_uppercase()).collect()
}

#[derive(Clone, Copy)]
struct Section {
	va: u32,
	size: u32,
	raw: u32,
	raw_size: u32,
}

#[derive(Default)]
pub struct DelphiProgram {
	d: Vec<u8>,
	sections: Vec<Section>,
	base: u32,
	/// upper-case name -> bytes
	resources: BTreeMap<String, Vec<u8>>,
	parents: BTreeMap<String, String>,
}

impl DelphiProgram {
	fn off(&self, va: u32) -> i64 {
		for s in &self.sections {
			if va >= s.va && va < s.va.wrapping_add(s.size) && va - s.va < s.raw_size {
				return s.raw.wrapping_add(va - s.va) as i64;
			}
		}
		-1
	}

	fn u32(&self, va: u32) -> u32 {
		let o = self.off(va);
		if o < 0 || o as usize + 4 > self.d.len() { 0 } else { rd32(&self.d[o as usize..]) }
	}

	fn sstr(&self, va: u32) -> String {
		let o = self.off(va);
		if o < 0 || o as usize >= self.d.len() {
			return String::new();
		}
		let o = o as usize;
		let n = self.d[o] as usize;
		if o + 1 + n > self.d.len() {
			return String::new();
		}
		latin1(&self.d[o + 1..o + 1 + n])
	}

	fn dir_entries(&self, dir: u32) -> Vec<(u32, u32)> {
		let o = self.off(dir);
		if o < 0 {
			return Vec::new();
		}
		let o = o as usize;
		let named = rd16(&self.d[o + 12..]) as u32;
		let ids = rd16(&self.d[o + 14..]) as u32;
		(0..named + ids)
			.map(|k| (self.u32(dir.wrapping_add(16 + k * 8)), self.u32(dir.wrapping_add(20 + k * 8))))
			.collect()
	}

	fn name_of(&self, root: u32, name: u32) -> String {
		if name & 0x80000000 == 0 {
			return name.to_string();
		}
		let o = self.off(root.wrapping_add(name & 0x7fffffff));
		let mut s = String::new();
		if o < 0 {
			return s;
		}
		let o = o as usize;
		let len = rd16(&self.d[o..]) as usize;
		for k in 0..len {
			s.push(self.d[o + 2 + 2 * k] as char);
		}
		s
	}

	pub fn load(&mut self, path: &str) -> bool {
		let Ok(d) = fs::read(path) else {
			return false;
		};
		self.d = d;
		let d = &self.d;
		if d.len() < 0x40 || d[0] != b'M' || d[1] != b'Z' {
			return false;
		}
		let pe = rd32(&d[0x3c..]) as usize;
		if pe + 0x18 + 0x60 + 0x80 > d.len() || &d[pe..pe + 4] != b"PE\0\0" {
			return false;
		}
		let opt = pe + 24;
		let count = rd16(&d[pe + 6..]) as usize;
		let opt_size = rd16(&d[pe + 20..]) as usize;
		self.base = rd32(&d[opt + 28..]);
		let res_rva = rd32(&d[opt + 96 + 2 * 8..]);
		for i in 0..count {
			let s = opt + opt_size + i * 40;
			if s + 40 > self.d.len() {
				break;
			}
			let d = &self.d;
			let mut sec = Section {
				va: self.base.wrapping_add(rd32(&d[s + 12..])),
				size: rd32(&d[s + 8..]),
				raw: rd32(&d[s + 20..]),
				raw_size: rd32(&d[s + 16..]),
			};
			if sec.size < sec.raw_size {
				sec.size = sec.raw_size;
			}
			self.sections.push(sec);
		}
		// Resources: type RT_RCDATA (10) -> name -> language -> data.
		if res_rva != 0 {
			let root = self.base.wrapping_add(res_rva);
			for (ty, ptr) in self.dir_entries(root) {
				if ty != 10 || ptr & 0x80000000 == 0 {
					continue;
				}
				for (name, p2) in self.dir_entries(root.wrapping_add(ptr & 0x7fffffff)) {
					let nm = upper(&self.name_of(root, name));
					if p2 & 0x80000000 == 0 {
						continue;
					}
					for (_, p3) in self.dir_entries(root.wrapping_add(p2 & 0x7fffffff)) {
						if p3 & 0x80000000 != 0 {
							continue;
						}
						let rva = self.u32(root.wrapping_add(p3));
						let size = self.u32(root.wrapping_add(p3).wrapping_add(4));
						let o = self.off(self.base.wrapping_add(rva));
						if o >= 0 && o as usize + size as usize <= self.d.len() {
							let bytes = self.d[o as usize..o as usize + size as usize].to_vec();
							self.resources.insert(nm.clone(), bytes);
						}
					}
				}
			}
		}
		// Class tables: a CODE dword equal to its own address plus 76 is a VMT's self pointer
		// (Delphi 3..7); the name and the parent's VMT sit at fixed places below the VMT.
		for si in 0..self.sections.len() {
			let s = self.sections[si];
			let mut k: u32 = 0;
			while k + 80 < s.raw_size {
				let at = s.raw as usize + k as usize;
				if at + 4 > self.d.len() {
					break;
				}
				let v = rd32(&self.d[at..]);
				if v != s.va.wrapping_add(k).wrapping_add(76) {
					k += 4;
					continue;
				}
				let name = self.sstr(self.u32(v.wrapping_sub(44)));
				let first = name.chars().next().unwrap_or('\0');
				if name.is_empty() || !(first.is_ascii_alphabetic() || first == '_') {
					k += 4;
					continue;
				}
				let pp = self.u32(v.wrapping_sub(36));
				let par = if pp != 0 { self.sstr(self.u32(self.u32(pp).wrapping_sub(44))) } else { String::new() };
				self.parents.insert(upper(&name), par);
				k += 4;
			}
		}
		!self.resources.is_empty()
	}

	/// An RCDATA resource by name (case-insensitive); empty if missing.
	pub fn rcdata(&self, name: &str) -> Vec<u8> {
		self.resources.get(&upper(name)).cloned().unwrap_or_default()
	}

	/// A class's parent class name; empty if unknown.
	pub fn parent(&self, cls: &str) -> String {
		self.parents.get(&upper(cls)).cloned().unwrap_or_default()
	}
}

#[cfg(test)]
pub(crate) fn test_program() -> Option<DelphiProgram> {
	let path = crate::res::archive::find_file_ci("/Users/xvilo/projects/A2Racer4-dump/disc/Data", "MenuData/Menu.exe");
	if path.is_empty() {
		return None;
	}
	let mut prog = DelphiProgram::default();
	assert!(prog.load(&path));
	Some(prog)
}

#[cfg(test)]
mod tests {
	use super::*;

	#[test]
	fn menu_exe_forms_and_classes() {
		let Some(prog) = test_program() else {
			return;
		};
		let dfm = prog.rcdata("TfrmMainScreen");
		assert!(dfm.starts_with(b"TPF0"));
		assert!(!prog.parent("TfrmMainScreen").is_empty());
		assert!(prog.rcdata("NoSuchForm").is_empty());
	}
}
