//! Delphi's binary form files (DFM, "TPF0"): a tree of components, each with its class,
//! its name and its published properties (numbers, strings, identifiers, sets, lists,
//! binary data). An inherited form holds only what differs from its parent; load_form
//! merges the chain.

use std::collections::BTreeMap;

use crate::menu::delphi::DelphiProgram;
use crate::res::archive::latin1;

#[derive(Clone, Default, Debug)]
pub struct DfmValue {
	pub kind: i32,
	pub i: i64,
	pub f: f64,
	/// string, identifier, or binary bytes
	pub s: String,
	/// set members
	pub set: Vec<String>,
	pub list: Vec<DfmValue>,
}

impl DfmValue {
	pub const NONE: i32 = 0;
	pub const INT: i32 = 1;
	pub const FLOAT: i32 = 2;
	pub const STRING: i32 = 3;
	pub const IDENT: i32 = 4;
	pub const BOOL: i32 = 5;
	pub const SET: i32 = 6;
	pub const LIST: i32 = 7;
	pub const BINARY: i32 = 8;
	pub const COLLECTION: i32 = 9;

	pub fn as_int(&self, def: i32) -> i32 {
		if self.kind == Self::INT {
			self.i as i32
		} else if self.kind == Self::FLOAT {
			self.f as i32
		} else {
			def
		}
	}
}

#[derive(Default, Debug)]
pub struct DfmObject {
	pub cls: String,
	pub name: String,
	pub inherited: bool,
	pub props: BTreeMap<String, DfmValue>,
	pub children: Vec<Box<DfmObject>>,
}

struct DfmError;

struct Reader<'a> {
	d: &'a [u8],
	p: usize,
}

impl Reader<'_> {
	fn u8(&mut self) -> Result<u8, DfmError> {
		if self.p >= self.d.len() {
			return Err(DfmError);
		}
		self.p += 1;
		Ok(self.d[self.p - 1])
	}
	fn peek(&self) -> u8 {
		if self.p < self.d.len() { self.d[self.p] } else { 0 }
	}
	fn take(&mut self, n: usize) -> Result<&[u8], DfmError> {
		if self.p + n > self.d.len() {
			return Err(DfmError);
		}
		self.p += n;
		Ok(&self.d[self.p - n..self.p])
	}
	fn sstr(&mut self) -> Result<String, DfmError> {
		let n = self.u8()? as usize;
		Ok(latin1(self.take(n)?))
	}
	fn i32(&mut self) -> Result<i32, DfmError> {
		let b = self.take(4)?;
		Ok((b[0] as u32 | (b[1] as u32) << 8 | (b[2] as u32) << 16 | (b[3] as u32) << 24) as i32)
	}
}

fn value(r: &mut Reader) -> Result<DfmValue, DfmError> {
	let mut v = DfmValue::default();
	let t = r.u8()?;
	match t {
		0 => {}
		// list
		1 => {
			v.kind = DfmValue::LIST;
			while r.peek() != 0 {
				v.list.push(value(r)?);
			}
			r.u8()?;
		}
		2 => {
			v.kind = DfmValue::INT;
			v.i = r.u8()? as i8 as i64;
		}
		3 => {
			v.kind = DfmValue::INT;
			let b = r.take(2)?;
			v.i = (b[0] as u16 | (b[1] as u16) << 8) as i16 as i64;
		}
		4 => {
			v.kind = DfmValue::INT;
			v.i = r.i32()? as i64;
		}
		// 80-bit extended
		5 => {
			let b = r.take(10)?;
			let mut mant: u64 = 0;
			for k in (0..8).rev() {
				mant = mant << 8 | b[k] as u64;
			}
			let exp = ((b[9] as i32) << 8 | b[8] as i32) & 0x7fff;
			let neg = b[9] & 0x80 != 0;
			v.kind = DfmValue::FLOAT;
			v.f = if mant == 0 {
				0.0
			} else {
				(if neg { -1.0 } else { 1.0 }) * mant as f64 / 9223372036854775808.0 * 2f64.powi(exp - 16383)
			};
		}
		// string, identifier
		6 | 7 => {
			v.kind = if t == 6 { DfmValue::STRING } else { DfmValue::IDENT };
			v.s = r.sstr()?;
		}
		8 | 9 => {
			v.kind = DfmValue::BOOL;
			v.i = (t == 9) as i64;
		}
		// binary
		10 => {
			v.kind = DfmValue::BINARY;
			let n = r.i32()? as usize;
			v.s = latin1(r.take(n)?);
		}
		// set
		11 => {
			v.kind = DfmValue::SET;
			let mut m = r.sstr()?;
			while !m.is_empty() {
				v.set.push(m);
				m = r.sstr()?;
			}
		}
		// long string
		12 => {
			v.kind = DfmValue::STRING;
			let n = r.i32()? as usize;
			v.s = latin1(r.take(n)?);
		}
		// nil
		13 => {}
		// collection: items of property lists
		14 => {
			v.kind = DfmValue::COLLECTION;
			while r.peek() != 0 {
				if r.peek() >= 2 && r.peek() <= 4 {
					value(r)?;
				}
				if r.u8()? != 1 {
					return Err(DfmError);
				}
				let mut item = DfmValue { kind: DfmValue::LIST, ..Default::default() };
				while r.peek() != 0 {
					let key = DfmValue { kind: DfmValue::IDENT, s: r.sstr()?, ..Default::default() };
					item.list.push(key);
					item.list.push(value(r)?);
				}
				r.u8()?;
				v.list.push(item);
			}
			r.u8()?;
		}
		// single
		15 => {
			v.kind = DfmValue::FLOAT;
			let b = r.take(4)?;
			v.f = f32::from_le_bytes([b[0], b[1], b[2], b[3]]) as f64;
		}
		// currency, date
		16 | 17 => {
			v.kind = DfmValue::FLOAT;
			let b = r.take(8)?;
			v.f = f64::from_le_bytes([b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7]]);
		}
		// wide string: kept as Latin-1
		18 => {
			v.kind = DfmValue::STRING;
			let n = r.i32()? as usize;
			let b = r.take(2 * n)?;
			for k in 0..n {
				v.s.push(if b[2 * k + 1] != 0 { '?' } else { b[2 * k] as char });
			}
		}
		// int64
		19 => {
			v.kind = DfmValue::INT;
			let b = r.take(8)?;
			let mut x: i64 = 0;
			for k in (0..8).rev() {
				x = x << 8 | b[k] as i64;
			}
			v.i = x;
		}
		// UTF-8
		20 => {
			v.kind = DfmValue::STRING;
			let n = r.i32()? as usize;
			v.s = latin1(r.take(n)?);
		}
		_ => return Err(DfmError),
	}
	Ok(v)
}

fn object(r: &mut Reader) -> Result<Box<DfmObject>, DfmError> {
	let mut o = Box::<DfmObject>::default();
	if r.peek() & 0xf0 == 0xf0 {
		let flags = r.u8()? & 0x0f;
		o.inherited = flags & 1 != 0;
		if flags & 2 != 0 {
			// position in the parent
			value(r)?;
		}
	}
	o.cls = r.sstr()?;
	o.name = r.sstr()?;
	while r.peek() != 0 {
		let key = r.sstr()?;
		let v = value(r)?;
		o.props.insert(key, v);
	}
	r.u8()?;
	while r.peek() != 0 {
		o.children.push(object(r)?);
	}
	r.u8()?;
	Ok(o)
}

/// Puts what child (an inherited form) changes into base.
fn merge(base: &mut DfmObject, child: DfmObject) {
	base.cls = child.cls;
	base.name = child.name;
	for (k, v) in child.props {
		base.props.insert(k, v);
	}
	for c in child.children {
		let found = c.inherited && base.name != c.name && base.find(&c.name).is_some();
		if found {
			let b = base.find(&c.name).unwrap();
			merge(b, *c);
		} else {
			base.children.push(c);
		}
	}
}

impl DfmObject {
	pub fn prop(&self, key: &str) -> Option<&DfmValue> {
		self.props.get(key)
	}

	pub fn get_int(&self, key: &str, def: i32) -> i32 {
		self.prop(key).map_or(def, |v| v.as_int(def))
	}

	pub fn get_str(&self, key: &str, def: &str) -> String {
		match self.prop(key) {
			Some(v) if v.kind == DfmValue::STRING || v.kind == DfmValue::IDENT => v.s.clone(),
			_ => def.to_string(),
		}
	}

	pub fn get_bool(&self, key: &str, def: bool) -> bool {
		match self.prop(key) {
			Some(v) if v.kind == DfmValue::BOOL => v.i != 0,
			_ => def,
		}
	}

	pub fn find(&mut self, n: &str) -> Option<&mut DfmObject> {
		if self.name == n {
			return Some(self);
		}
		for c in &mut self.children {
			if let Some(f) = c.find(n) {
				return Some(f);
			}
		}
		None
	}

	/// Every component in the tree, depth first (this one first).
	pub fn walk<'a>(&'a self, out: &mut Vec<&'a DfmObject>) {
		out.push(self);
		for c in &self.children {
			c.walk(out);
		}
	}
}

/// Parses one DFM resource; None if it isn't one.
pub fn parse_dfm(data: &[u8]) -> Option<Box<DfmObject>> {
	if data.len() < 4 || &data[..4] != b"TPF0" {
		return None;
	}
	let mut r = Reader { d: data, p: 4 };
	object(&mut r).ok()
}

/// The form of a class (e.g. "TfrmMainScreen") with its inherited parts merged in from its
/// ancestors' forms; None if the program has no form for it.
pub fn load_form(prog: &DelphiProgram, cls: &str) -> Option<Box<DfmObject>> {
	let form = parse_dfm(&prog.rcdata(cls))?;
	if !form.inherited {
		return Some(form);
	}
	// An inherited form: the parent class's form first, this one over it.
	let parent = prog.parent(cls);
	let mut base = None;
	let mut p = parent;
	while !p.is_empty() && base.is_none() {
		base = load_form(prog, &p);
		p = prog.parent(&p);
	}
	let Some(mut base) = base else {
		return Some(form);
	};
	merge(&mut base, *form);
	Some(base)
}

#[cfg(test)]
mod tests {
	use super::*;
	use crate::menu::delphi::test_program;

	#[test]
	fn menu_exe_forms_parse() {
		let Some(prog) = test_program() else {
			return;
		};
		let mut main = load_form(&prog, "TfrmMainScreen").expect("main screen");
		assert_eq!(main.cls, "TfrmMainScreen");
		let mut all = Vec::new();
		main.walk(&mut all);
		assert!(all.len() > 5);
		assert!(all.iter().any(|o| o.cls == "TGDIButton"));
		assert!(main.find("btnClose").is_some());

		let mut data = load_form(&prog, "TData").expect("data module");
		let font = data.find("MenuFont1").expect("menu font");
		let v = font.props.values().find(|v| v.kind == DfmValue::BINARY).expect("font bytes");
		assert!(v.s.chars().count() > 4);
	}
}
