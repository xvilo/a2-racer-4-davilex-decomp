//! The menu's help file (MenuData/Menu.hlp), read for its topics' titles and text: the
//! original hands the Help button's questions to WinHelp (Application.HelpContext with
//! the ids of Agent.ini [<form>BalloonItems]), the port shows the text itself.
//!
//! A WinHelp 3.1/4 file: a header (magic 0x00035F3F, the directory's place), a B+ tree
//! directory of internal files; |SYSTEM (version, whether |TOPIC is LZ77-packed and in 2K
//! or 4K blocks), |TOPIC (blocks of a 12-byte header and topic links: a topic header
//! whose text is the title, then paragraphs whose text pieces are 0-separated) and
//! |CTXOMAP (the [MAP] ids, each with a topic offset: block << 15 + characters into it).

use std::collections::BTreeMap;
use std::fs;

use crate::res::archive::latin1;

fn rd32(d: &[u8], at: usize) -> i32 {
	if at >= d.len() || d.len() - at < 4 {
		return 0;
	}
	(d[at] as u32 | (d[at + 1] as u32) << 8 | (d[at + 2] as u32) << 16 | (d[at + 3] as u32) << 24) as i32
}

fn rd16(d: &[u8], at: usize) -> i32 {
	if at >= d.len() || d.len() - at < 2 {
		return 0;
	}
	d[at] as i32 | (d[at + 1] as i32) << 8
}

/// WinHelp's LZ77: a flag byte for eight items, each a byte as it is or (bit set) a
/// 16-bit word: length (top 4 bits) + 3, distance back (low 12) + 1.
fn lz77(p: &[u8]) -> Vec<u8> {
	let n = p.len();
	let mut out = Vec::new();
	let mut i = 0;
	while i < n {
		let flags = p[i] as i32;
		i += 1;
		let mut b = 0;
		while b < 8 && i < n {
			if flags & (1 << b) != 0 {
				if i + 2 > n {
					return out;
				}
				let w = p[i] as usize | (p[i + 1] as usize) << 8;
				i += 2;
				let len = (w >> 12) + 3;
				let back = (w & 0xfff) + 1;
				for _ in 0..len {
					out.push(if back <= out.len() { out[out.len() - back] } else { 0 });
				}
			} else {
				out.push(p[i]);
				i += 1;
			}
			b += 1;
		}
	}
	out
}

struct Topic {
	/// block << 15 + characters before it in the block
	offset: i32,
	title: String,
	text: String,
}

#[derive(Default)]
pub struct WinHelp {
	topics: Vec<Topic>,
	/// id -> topic offset
	contexts: BTreeMap<i32, i32>,
}

impl WinHelp {
	pub fn load(&mut self, path: &str) -> bool {
		let Ok(d) = fs::read(path) else {
			return false;
		};
		if d.len() < 16 || rd32(&d, 0) != 0x00035F3F {
			return false;
		}

		// The directory: a B+ tree after a 9-byte file header and its 38-byte header.
		let mut files: BTreeMap<String, usize> = BTreeMap::new();
		{
			let dir = rd32(&d, 4) as usize;
			let bt = dir.wrapping_add(9);
			let page_size = rd16(&d, bt.wrapping_add(4));
			let root = rd16(&d, bt.wrapping_add(26));
			let levels = rd16(&d, bt.wrapping_add(32));
			let pages = bt.wrapping_add(38);
			let mut page = root;
			for _ in 1..levels {
				page = rd16(&d, pages.wrapping_add((page as usize).wrapping_mul(page_size as usize)).wrapping_add(4))
					as i16 as i32;
			}
			let mut guard = 0;
			while page >= 0 && page != 0xffff && guard < 10000 {
				let p = pages.wrapping_add(page as usize * page_size as usize);
				let count = rd16(&d, p.wrapping_add(2));
				let next = rd16(&d, p.wrapping_add(6)) as i16 as i32;
				let mut q = p.wrapping_add(8);
				let mut i = 0;
				while i < count && q < d.len() {
					let mut e = q;
					while e < d.len() && d[e] != 0 {
						e += 1;
					}
					let name = latin1(&d[q..e]);
					files.insert(name, rd32(&d, e + 1) as usize);
					q = e + 5;
					i += 1;
				}
				page = next;
				guard += 1;
			}
		}
		let file = |name: &str| -> Option<Vec<u8>> {
			let &at0 = files.get(name)?;
			if at0.wrapping_add(9) > d.len() || at0 > d.len() {
				return None;
			}
			let used = rd32(&d, at0 + 4) as usize;
			let at = at0 + 9;
			Some(d[at..at.saturating_add(used).min(d.len())].to_vec())
		};
		let (Some(sys), Some(top)) = (file("|SYSTEM"), file("|TOPIC")) else {
			return false;
		};
		let minor = rd16(&sys, 2);
		let flags = rd16(&sys, 10);
		let packed = minor > 16 && (flags & 4) != 0;
		let block: usize = if minor <= 16 {
			2048
		} else if flags & 8 != 0 {
			2048
		} else {
			4096
		};
		let block_data: usize = if packed { 16384 } else { block - 12 };

		// The blocks' data one after another; a topic position is block << 14 + its place in
		// the block counted from the block's start (header included).
		let mut stream: Vec<u8> = Vec::new();
		let mut b = 0;
		while b + 12 <= top.len() {
			let end = (b + block).min(top.len());
			let mut part = if packed { lz77(&top[b + 12..end]) } else { top[b + 12..end].to_vec() };
			part.resize(block_data, 0);
			stream.extend_from_slice(&part);
			b += block;
		}
		let spos = |tp: i32| -> i64 { ((tp >> 14) as i64).wrapping_mul(block_data as i64) + (tp & 0x3fff) as i64 - 12 };
		let mut pos = spos(rd32(&top, 4));
		let mut cur_block = -1;
		let mut chars = 0;
		let mut guard = 0;
		while pos >= 0 && pos as usize + 21 <= stream.len() && guard < 100000 {
			let p = pos as usize;
			let size = rd32(&stream, p);
			let len2 = rd32(&stream, p + 4);
			let next = rd32(&stream, p + 12);
			let len1 = rd32(&stream, p + 16);
			let ty = stream[p + 20];
			if size <= 0 || len1 < 21 || p + size as usize > stream.len() {
				break;
			}
			let blk = (p / block_data) as i32;
			if blk != cur_block {
				cur_block = blk;
				chars = 0;
			}
			// The text: 0-separated pieces (phrase compression isn't used by this file).
			let mut text = String::new();
			for i in p + len1 as usize..p + size as usize {
				if stream[i] != 0 {
					text.push(stream[i] as char);
				}
			}
			if ty == 2 {
				self.topics.push(Topic { offset: (blk << 15) + chars, title: text, text: String::new() });
			} else if (ty == 0x20 || ty == 0x23 || ty == 1) && !self.topics.is_empty() {
				while text.starts_with(' ') {
					text.remove(0);
				}
				let last = self.topics.last_mut().unwrap();
				// The first paragraph repeats the title.
				if !text.is_empty() && !(last.text.is_empty() && text == last.title) {
					if !last.text.is_empty() {
						last.text.push('\n');
					}
					last.text += &text;
				}
				chars += len2;
			}
			if next <= 0 || spos(next) == pos {
				break;
			}
			pos = spos(next);
			guard += 1;
		}
		if let Some(map) = file("|CTXOMAP") {
			let count = rd16(&map, 0);
			for i in 0..count as usize {
				self.contexts.insert(rd32(&map, 2 + 8 * i), rd32(&map, 6 + 8 * i));
			}
		}
		!self.topics.is_empty()
	}

	/// The topic for a context id (title, text); None if there is none.
	pub fn topic(&self, id: i32) -> Option<(String, String)> {
		let &c = self.contexts.get(&id)?;
		// The topic at or before the offset; at a block's very start, the block's first.
		let mut best: Option<&Topic> = None;
		for t in &self.topics {
			if t.offset <= c {
				best = Some(t);
			}
		}
		let mut best = best?;
		if c - best.offset > 4096 {
			for t in &self.topics {
				if t.offset > best.offset {
					best = t;
					break;
				}
			}
		}
		Some((best.title.clone(), best.text.clone()))
	}
}

#[cfg(test)]
mod tests {
	use super::*;

	#[test]
	fn menu_hlp_topics() {
		let path =
			crate::res::archive::find_file_ci("/Users/xvilo/projects/A2Racer4-dump/disc/Data", "MenuData/Menu.hlp");
		if path.is_empty() {
			return;
		}
		let mut help = WinHelp::default();
		assert!(help.load(&path));
		let (title, text) = help.topic(1).expect("topic 1");
		assert!(!title.is_empty());
		assert!(!text.is_empty());
		assert!(help.topic(-12345).is_none());
	}
}
