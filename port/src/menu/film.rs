//! The menu's films: the intro (Data/intro1.mpg, MPEG-1 with MP2 sound; the original
//! plays it with Windows' media player, TfrmIntro) and the winners' films after the Tour
//! (MenuData/CH<nn>.avi, Cinepak without sound; TfrmWinFinal's medWinner).

use std::cell::RefCell;
use std::sync::Arc;

use crate::audio::mixer::{Mixer, Sample};
use crate::menu::canvas::Canvas;
use crate::platform::sys::{KEY_NONE, SysInput, sys_poll, sys_present, sys_quit_requested, sys_sleep, sys_ticks};
use crate::res::image::{Image, rgb};
use crate::third_party::pl_mpeg::{Plm, frame_to_rgba};

fn le32(p: &[u8]) -> u32 {
	p[0] as u32 | (p[1] as u32) << 8 | (p[2] as u32) << 16 | (p[3] as u32) << 24
}
fn be16(p: &[u8]) -> u32 {
	(p[0] as u32) << 8 | p[1] as u32
}
fn be24(p: &[u8]) -> u32 {
	(p[0] as u32) << 16 | (p[1] as u32) << 8 | p[2] as u32
}
fn be32(p: &[u8]) -> u32 {
	(p[0] as u32) << 24 | (p[1] as u32) << 16 | (p[2] as u32) << 8 | p[3] as u32
}

fn rgba(r: i32, g: i32, b: i32) -> u32 {
	rgb(r.clamp(0, 255) as u8, g.clamp(0, 255) as u8, b.clamp(0, 255) as u8)
}

#[derive(Clone, Copy, Default)]
struct Codebook {
	y: [u8; 4],
	u: i8,
	v: i8,
}

#[derive(Clone, Copy)]
struct Strip {
	v4: [Codebook; 256],
	v1: [Codebook; 256],
}

impl Default for Strip {
	fn default() -> Self {
		Strip { v4: [Codebook::default(); 256], v1: [Codebook::default(); 256] }
	}
}

/// An AVI file of Cinepak frames, decoded one after another.
pub struct CinepakFilm {
	data: Vec<u8>,
	/// offset, size of each frame
	chunks: Vec<(usize, usize)>,
	strips: Vec<Strip>,
	picture: Vec<u32>,
	w: i32,
	h: i32,
	rate: f32,
	next: usize,
}

impl Default for CinepakFilm {
	fn default() -> Self {
		CinepakFilm {
			data: Vec::new(),
			chunks: Vec::new(),
			strips: Vec::new(),
			picture: Vec::new(),
			w: 0,
			h: 0,
			rate: 15.0,
			next: 0,
		}
	}
}

impl CinepakFilm {
	pub fn width(&self) -> i32 {
		self.w
	}
	pub fn height(&self) -> i32 {
		self.h
	}
	pub fn fps(&self) -> f32 {
		self.rate
	}
	pub fn frames(&self) -> usize {
		self.chunks.len()
	}

	/// RIFF: chunks of a four-letter id and a size, lists (RIFF, LIST) of a type and chunks;
	/// avih starts with the microseconds per frame, the video frames are the "00dc" (or "00db")
	/// chunks inside movi.
	pub fn open(&mut self, path: &str) -> bool {
		let Ok(data) = std::fs::read(path) else {
			return false;
		};
		self.data = data;
		let data = &self.data;
		if data.len() < 12 || &data[0..4] != b"RIFF" || &data[8..12] != b"AVI " {
			return false;
		}
		self.chunks.clear();
		let mut stack: Vec<(usize, usize)> = vec![(12, (8 + le32(&data[4..]) as usize).min(data.len()))];
		while let Some((mut at, end)) = stack.pop() {
			let mut lists: Vec<(usize, usize)> = Vec::new();
			while at + 8 <= end {
				let c = &data[at..];
				let mut size = le32(&c[4..]) as usize;
				if at + 8 + size > end {
					size = end - at - 8;
				}
				if &c[0..4] == b"LIST" && size >= 4 {
					lists.push((at + 12, at + 8 + size));
				} else if &c[0..4] == b"avih" && size >= 4 && le32(&c[8..]) > 0 {
					self.rate = 1e6f32 / le32(&c[8..]) as f32;
				} else if c[2] == b'd' && (c[3] == b'c' || c[3] == b'b') {
					self.chunks.push((at + 8, size));
				}
				at += 8 + size + (size & 1);
			}
			// In file order.
			for it in lists.iter().rev() {
				stack.push(*it);
			}
		}
		if self.chunks.is_empty() || self.chunks[0].1 < 10 {
			return false;
		}
		self.w = be16(&data[self.chunks[0].0 + 4..]) as i32;
		self.h = be16(&data[self.chunks[0].0 + 6..]) as i32;
		self.picture = vec![0xff000000u32; self.w as usize * self.h as usize];
		self.next = 0;
		self.w > 0 && self.h > 0
	}

	/// Decodes frames up to and including n (they build on each other) into the picture.
	pub fn seek(&mut self, n: usize, out: &mut Image) {
		let n = n.min(if self.chunks.is_empty() { 0 } else { self.chunks.len() - 1 });
		if n + 1 < self.next {
			self.next = 0;
			self.picture.fill(0xff000000u32);
		}
		let data = std::mem::take(&mut self.data);
		while self.next <= n && self.next < self.chunks.len() {
			let (at, size) = self.chunks[self.next];
			self.decode(&data[at..at + size]);
			self.next += 1;
		}
		self.data = data;
		out.width = self.w;
		out.height = self.h;
		out.pixels = self.picture.clone();
	}

	/// Cinepak (Radius / SuperMac): a frame of horizontal strips; each strip has two codebooks
	/// of 256 2x2 blocks (Y0..Y3 and a shared U, V), V4 for 4x4 blocks made of four 2x2 ones
	/// and V1 for 4x4 blocks of one 2x2 doubled, and then which entries each 4x4 block uses.
	/// Codebooks and the picture carry over from the frame before (and a strip's codebooks
	/// from the strip above unless the frame's flags say otherwise).
	fn decode(&mut self, d: &[u8]) {
		let size = d.len();
		if size < 10 {
			return;
		}
		let end = size;
		let flags = d[0] as i32;
		let count = be16(&d[8..]) as i32;
		let mut p = 10;
		if (self.strips.len() as i32) < count {
			self.strips.resize(count as usize, Strip::default());
		}
		let mut y0 = 0;
		let mut i = 0;
		while i < count && p + 12 <= end {
			let strip_size = be24(&d[p + 1..]);
			let height = be16(&d[p + 8..]) as i32;
			let strip_end = (p + strip_size.max(12) as usize).min(end);
			if i > 0 && flags & 1 == 0 {
				self.strips[i as usize] = self.strips[i as usize - 1];
			}
			self.strip(i as usize, &d[p + 12..strip_end], y0, (y0 + height).min(self.h));
			y0 += height;
			p = strip_end;
			i += 1;
		}
	}

	fn strip(&mut self, si: usize, d: &[u8], y1: i32, y2: i32) {
		let end = d.len();
		let mut p = 0;
		while p + 4 <= end {
			let id = d[p] as i32;
			let mut q = p + 4;
			let chunk_end = (p + be24(&d[p + 1..]).max(4) as usize).min(end);
			if (0x20..=0x27).contains(&id) {
				// A codebook: 0x20.. V4, 0x22.. V1; +1 only the flagged entries; +4 grey.
				let s = &mut self.strips[si];
				let cb = if id & 0x02 != 0 { &mut s.v1 } else { &mut s.v4 };
				let bytes = if id & 0x04 != 0 { 4 } else { 6 };
				let mut flag = 0u32;
				let mut mask = 0u32;
				for i in 0..256 {
					if id & 0x01 != 0 {
						mask >>= 1;
						if mask == 0 {
							if q + 4 > chunk_end {
								break;
							}
							flag = be32(&d[q..]);
							q += 4;
							mask = 0x80000000u32;
						}
					}
					if id & 0x01 == 0 || flag & mask != 0 {
						if q + bytes > chunk_end {
							break;
						}
						cb[i].y.copy_from_slice(&d[q..q + 4]);
						cb[i].u = if bytes == 6 { d[q + 4] as i8 } else { 0 };
						cb[i].v = if bytes == 6 { d[q + 5] as i8 } else { 0 };
						q += bytes;
					}
				}
			} else if (0x30..=0x32).contains(&id) {
				// The blocks: 0x30 every block V1 or V4 (by flag bits), 0x31 also skipping
				// unchanged ones, 0x32 every block V1.
				let mut flag = 0u32;
				let mut mask = 0u32;
				let mut y = y1;
				while y < y2 {
					let mut x = 0;
					while x < self.w {
						if id & 0x01 != 0 {
							mask >>= 1;
							if mask == 0 {
								if q + 4 > chunk_end {
									return;
								}
								flag = be32(&d[q..]);
								q += 4;
								mask = 0x80000000u32;
							}
						}
						if id & 0x01 != 0 && flag & mask == 0 {
							x += 4;
							continue;
						}
						if id & 0x02 == 0 {
							mask >>= 1;
							if mask == 0 {
								if q + 4 > chunk_end {
									return;
								}
								flag = be32(&d[q..]);
								q += 4;
								mask = 0x80000000u32;
							}
						}
						if id & 0x02 != 0 || flag & mask == 0 {
							if q + 1 > chunk_end {
								return;
							}
							let c = self.strips[si].v1[d[q] as usize];
							q += 1;
							for k in 0..4 {
								let bx = x + (k & 1) * 2;
								let by = y + (k >> 1) * 2;
								for j in 0..4 {
									self.put(bx + (j & 1), by + (j >> 1), &c, k);
								}
							}
						} else {
							if q + 4 > chunk_end {
								return;
							}
							for k in 0..4 {
								let c = self.strips[si].v4[d[q + k as usize] as usize];
								let bx = x + (k & 1) * 2;
								let by = y + (k >> 1) * 2;
								for j in 0..4 {
									self.put(bx + (j & 1), by + (j >> 1), &c, j);
								}
							}
							q += 4;
						}
						x += 4;
					}
					y += 4;
				}
				return;
			}
			p = chunk_end;
		}
	}

	fn put(&mut self, x: i32, y: i32, c: &Codebook, k: i32) {
		if x >= self.w || y >= self.h {
			return;
		}
		let yy = c.y[k as usize] as i32;
		let u = c.u as i32;
		let v = c.v as i32;
		self.picture[y as usize * self.w as usize + x as usize] = rgba(yy + v * 2, yy - u / 2 - v, yy + u * 2);
	}
}

/// Plays an MPEG-1 film over the whole screen, with its sound, until it ends or a key or
/// click skips it. False if it can't be played. The canvas is borrowed only to draw each
/// frame, so that a screenshot taken while polling can read it.
pub fn play_mpeg(path: &str, cv: &RefCell<Canvas>) -> bool {
	// The sound first, all of it (the mixer plays whole samples), mixed to mono.
	let Some(mut sound) = Plm::create_with_filename(path) else {
		return false;
	};
	sound.set_video_enabled(false);
	let mut sample = Sample { rate: sound.get_samplerate(), ..Default::default() };
	while let Some(s) = sound.decode_audio() {
		for i in 0..s.count as usize {
			sample.data.push((s.interleaved[2 * i] + s.interleaved[2 * i + 1]) * 0.5);
		}
	}
	drop(sound);

	let Some(mut film) = Plm::create_with_filename(path) else {
		return false;
	};
	film.set_audio_enabled(false);
	let fw = film.get_width();
	let fh = film.get_height();
	if fw <= 0 || fh <= 0 {
		return false;
	}
	let mut frame = vec![0u8; fw as usize * fh as usize * 4];
	let mx = Mixer::get();
	let voice = if sample.data.is_empty() { 0 } else { mx.play(Some(Arc::new(sample)), 1.0, false, 1.0, 0.0) };
	let start = sys_ticks();
	let mut inp = SysInput::default();
	let mut shown = false;
	while !sys_quit_requested() {
		sys_poll(&mut inp);
		if inp.key != KEY_NONE || inp.mouse_clicked {
			break;
		}
		let now = sys_ticks().wrapping_sub(start) as f64 / 1000.0;
		let mut fresh = false;
		while film.get_time() < now {
			let Some(f) = film.decode_video() else {
				break;
			};
			frame_to_rgba(&f, &mut frame, fw * 4);
			fresh = true;
		}
		if film.has_ended() {
			break;
		}
		if fresh || !shown {
			let mut guard = cv.borrow_mut();
			let cv = &mut *guard;
			// Scaled to the width, the middle of the screen.
			let dh = fh * cv.w / fw;
			let top = (cv.h - dh) / 2;
			cv.clear(0xff000000u32);
			for y in 0..dh {
				let sy = y * fh / dh;
				let cy = top + y;
				if cy < 0 || cy >= cv.h {
					continue;
				}
				let row = &frame[sy as usize * fw as usize * 4..];
				for x in 0..cv.w {
					let at = (x * fw / cv.w) as usize * 4;
					let px = u32::from_ne_bytes([row[at], row[at + 1], row[at + 2], row[at + 3]]);
					cv.px[cy as usize * cv.w as usize + x as usize] = px | 0xff000000u32;
				}
			}
			sys_present(&cv.px);
			shown = true;
		}
		sys_sleep(5);
	}
	if voice != 0 {
		mx.stop(voice);
	}
	true
}

#[cfg(test)]
mod tests {
	use super::*;
	use crate::res::archive::{find_file_ci, test_data};

	#[test]
	fn winner_film_decodes() {
		let path = find_file_ci(&test_data(), "MenuData/CH00.avi");
		if path.is_empty() {
			return;
		}
		let mut film = CinepakFilm::default();
		assert!(film.open(&path));
		assert!(film.width() > 0 && film.height() > 0 && film.frames() > 1);
		assert!(film.fps() > 0.0);
		let last = film.frames() - 1;
		let mut a = Image::default();
		for n in 0..=last {
			film.seek(n, &mut a);
		}
		assert_eq!(a.pixels.len(), film.width() as usize * film.height() as usize);
		assert!(a.pixels.iter().any(|&p| p != a.pixels[0]));
		let mut b = Image::default();
		film.seek(0, &mut b);
		film.seek(last, &mut b);
		assert!(a.pixels == b.pixels);
	}
}
