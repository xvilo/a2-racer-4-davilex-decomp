//! INI files, read and written the way Windows' GetPrivateProfileString and
//! WritePrivateProfileString do (dxdraw/Inifile.cpp wraps those): sections and keys match
//! without regard to case, values are trimmed, lines starting with ';' are comments. The
//! game keeps all its settings and the hand-over between menu and race in such files.

use std::fs;

use crate::res::archive::{equal_ci, latin1, latin1_bytes};

fn trim(s: &str) -> &str {
	s.trim_matches(|c: char| (c as u32) <= ' ' as u32)
}

#[derive(Clone, Default)]
struct Line {
	/// the line as read (or made)
	text: String,
	/// the section it is in
	section: String,
	/// empty unless the line is key=value
	key: String,
	value: String,
}

#[derive(Clone, Default)]
pub struct IniFile {
	lines: Vec<Line>,
}

/// strtol/strtod's view of a number at the start of s: the length of the leading number
/// (after white space), 0 if there is none.
fn leading_number(s: &str, float: bool) -> usize {
	let b = s.as_bytes();
	let mut i = 0;
	while i < b.len() && (b[i] == b' ' || (b'\t'..=b'\r').contains(&b[i])) {
		i += 1;
	}
	if i < b.len() && (b[i] == b'+' || b[i] == b'-') {
		i += 1;
	}
	let digits = i;
	while i < b.len() && b[i].is_ascii_digit() {
		i += 1;
	}
	let mut seen = i > digits;
	if float {
		if i < b.len() && b[i] == b'.' {
			let frac = i + 1;
			let mut j = frac;
			while j < b.len() && b[j].is_ascii_digit() {
				j += 1;
			}
			if j > frac || seen {
				seen = true;
				i = j;
			}
		}
		if seen && i < b.len() && (b[i] == b'e' || b[i] == b'E') {
			let mut j = i + 1;
			if j < b.len() && (b[j] == b'+' || b[j] == b'-') {
				j += 1;
			}
			let e = j;
			while j < b.len() && b[j].is_ascii_digit() {
				j += 1;
			}
			if j > e {
				i = j;
			}
		}
	}
	if seen { i } else { 0 }
}

/// C's atoi/strtol(s, 10): the leading integer, 0 if none (saturating like strtol on
/// overflow, then cut to int).
pub fn atoi(s: &str) -> i32 {
	strtol(s).unwrap_or(0)
}

/// strtol(s, &end, 10) when it reads a number.
pub fn strtol(s: &str) -> Option<i32> {
	let n = leading_number(s, false);
	if n == 0 {
		return None;
	}
	let t = s[..n].trim_start();
	let v = t.parse::<i64>().unwrap_or(if t.starts_with('-') { i64::MIN } else { i64::MAX });
	Some(v as i32)
}

/// C's atof/strtod: the leading number, 0 if none.
pub fn atof(s: &str) -> f64 {
	strtod(s).unwrap_or(0.0)
}

pub fn strtod(s: &str) -> Option<f64> {
	let n = leading_number(s, true);
	if n == 0 {
		return None;
	}
	s[..n].trim_start().parse::<f64>().ok()
}

impl IniFile {
	/// Reads the file; false if it cannot be opened (the object is then empty).
	pub fn load(&mut self, path: &str) -> bool {
		self.lines.clear();
		let Ok(data) = fs::read(path) else {
			return false;
		};
		let mut section = String::new();
		for raw in data.split_inclusive(|&c| c == b'\n') {
			let mut l = Line { text: latin1(raw), ..Default::default() };
			while l.text.ends_with('\n') || l.text.ends_with('\r') {
				l.text.pop();
			}
			let t = trim(&l.text);
			if t.starts_with('[') {
				let inner = &t[1..];
				section = trim(inner.find(']').map_or(inner, |end| &inner[..end])).to_string();
			} else if !t.is_empty() && !t.starts_with(';') {
				if let Some(eq) = t.find('=') {
					l.key = trim(&t[..eq]).to_string();
					let mut value = trim(&t[eq + 1..]);
					// GetPrivateProfileString drops one pair of quotes around a value.
					let vb = value.as_bytes();
					if vb.len() >= 2 && (vb[0] == b'"' || vb[0] == b'\'') && vb[vb.len() - 1] == vb[0] {
						value = &value[1..value.len() - 1];
					}
					l.value = value.to_string();
				}
			}
			l.section = section.clone();
			self.lines.push(l);
		}
		true
	}

	/// Writes the file back (keeping comments and the order of everything).
	pub fn save(&self, path: &str) -> bool {
		let mut out = Vec::new();
		for l in &self.lines {
			out.extend_from_slice(&latin1_bytes(&l.text));
			out.extend_from_slice(b"\r\n");
		}
		fs::write(path, out).is_ok()
	}

	fn find(&self, section: &str, key: &str) -> Option<&Line> {
		self.lines.iter().find(|l| !l.key.is_empty() && equal_ci(&l.section, section) && equal_ci(&l.key, key))
	}

	pub fn get(&self, section: &str, key: &str) -> String {
		self.get_or(section, key, "")
	}

	pub fn get_or(&self, section: &str, key: &str, def: &str) -> String {
		self.find(section, key).map_or_else(|| def.to_string(), |l| l.value.clone())
	}

	/// GetPrivateProfileInt: the leading integer of the value, or def.
	pub fn get_int(&self, section: &str, key: &str, def: i32) -> i32 {
		self.find(section, key).and_then(|l| strtol(&l.value)).unwrap_or(def)
	}

	pub fn get_float(&self, section: &str, key: &str, def: f64) -> f64 {
		self.find(section, key).and_then(|l| strtod(&l.value)).unwrap_or(def)
	}

	pub fn has(&self, section: &str, key: &str) -> bool {
		self.find(section, key).is_some()
	}

	pub fn set(&mut self, section: &str, key: &str, value: &str) {
		for l in &mut self.lines {
			if !l.key.is_empty() && equal_ci(&l.section, section) && equal_ci(&l.key, key) {
				l.value = value.to_string();
				l.text = format!("{}={}", l.key, value);
				return;
			}
		}
		// A new key goes at the end of its section, or a new section at the end.
		let mut at = self.lines.len();
		let mut found = false;
		for (i, l) in self.lines.iter().enumerate() {
			if equal_ci(&l.section, section) {
				found = true;
				if !l.key.is_empty() || trim(&l.text).starts_with('[') {
					at = i + 1;
				}
			}
		}
		if !found {
			self.lines.push(Line { text: format!("[{section}]"), section: section.to_string(), ..Default::default() });
			at = self.lines.len();
		}
		self.lines.insert(
			at,
			Line {
				text: format!("{key}={value}"),
				section: section.to_string(),
				key: key.to_string(),
				value: value.to_string(),
			},
		);
	}

	pub fn set_int(&mut self, section: &str, key: &str, value: i32) {
		self.set(section, key, &value.to_string());
	}

	/// The keys of a section, in file order.
	pub fn keys(&self, section: &str) -> Vec<String> {
		self.lines
			.iter()
			.filter(|l| !l.key.is_empty() && equal_ci(&l.section, section))
			.map(|l| l.key.clone())
			.collect()
	}
}

/// "1,etappe0,e00_weg,..." split at commas, each part trimmed.
pub fn split_fields(value: &str, sep: char) -> Vec<String> {
	value.split(sep).map(|p| trim(p).to_string()).collect()
}

#[cfg(test)]
mod tests {
	use super::*;

	#[test]
	fn numbers_as_c_reads_them() {
		assert_eq!(strtol("  42abc"), Some(42));
		assert_eq!(strtol("-7"), Some(-7));
		assert_eq!(strtol("x1"), None);
		assert_eq!(strtod("1.5e2x"), Some(150.0));
		assert_eq!(strtod(".5"), Some(0.5));
		assert_eq!(strtod("5."), Some(5.0));
		assert_eq!(strtod("-"), None);
	}

	#[test]
	fn set_keeps_sections_together() {
		let mut ini = IniFile::default();
		ini.set("a", "x", "1");
		ini.set("b", "y", "2");
		ini.set("a", "z", "3");
		ini.set("A", "X", "4");
		assert_eq!(ini.keys("a"), vec!["x", "z"]);
		assert_eq!(ini.get_int("a", "x", 0), 4);
		assert_eq!(ini.get_or("b", "q", "d"), "d");
	}
}
