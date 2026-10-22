//! A player's save (DataPlayer.pas, TSaveGame): SaveGame<n>.RCR, a packed little-endian
//! record, the same bytes the original writes, so saves can move between the two:
//!   header    string[32] name (length byte + 32), i32 tour character (for the portrait)
//!   settings  i32 difficulty, resolution, fx/music/voices volume; 8 x u8 FXON, MUSICON,
//!             VOICESON, SHOWSTARTINFO, AlphaBlending, BilinearFiltering, WaitVbl,
//!             Mipmapping; i32 gamma, texture memory, driver, render focus
//!   controls  7 x i32 keys (up, down, left, right, turbo, handbrake, horn), i32 control
//!             type (0 keyboard, 1 joystick, 2 joypad, 3 wheel), joystick and wheel sensitivity
//!   tour      i32 character, track ([TOURRACE] list indices); per tour character
//!             i32 next undriven track, money, turbo amount, 5 x u8 upgrades
//!   quick     i32 character, track, u8 unlock popup shown
//!   then      i32 the track to drive

use std::fs;

use crate::res::archive::latin1_bytes;
use crate::xvga::inifile::IniFile;

#[derive(Default)]
struct Writer {
	out: Vec<u8>,
}

impl Writer {
	fn u8(&mut self, v: u8) {
		self.out.push(v);
	}
	fn i32(&mut self, v: i32) {
		for k in 0..4 {
			self.out.push((v as u32 >> (8 * k)) as u8);
		}
	}
}

struct Reader<'a> {
	inp: &'a [u8],
	at: usize,
	ok: bool,
}

impl<'a> Reader<'a> {
	fn new(inp: &'a [u8]) -> Self {
		Self { inp, at: 0, ok: true }
	}
	fn u8(&mut self) -> u8 {
		if self.at + 1 > self.inp.len() {
			self.ok = false;
			return 0;
		}
		self.at += 1;
		self.inp[self.at - 1]
	}
	fn i32(&mut self) -> i32 {
		if self.at + 4 > self.inp.len() {
			self.ok = false;
			return 0;
		}
		let b = &self.inp[self.at..];
		let v = b[0] as u32 | (b[1] as u32) << 8 | (b[2] as u32) << 16 | (b[3] as u32) << 24;
		self.at += 4;
		v as i32
	}
}

fn read_header(r: &mut Reader) -> (String, i32) {
	let len = (r.u8() as usize).min(32);
	let mut name = String::new();
	for k in 0..32 {
		let c = r.u8();
		if k < len {
			name.push(c as char);
		}
	}
	let portrait = r.i32();
	(name, portrait)
}

#[derive(Clone, Default, Debug, PartialEq)]
pub struct CharResult {
	pub next_track: i32,
	pub money: i32,
	pub turbo: i32,
	pub upgrades: [u8; 5],
}

#[derive(Clone, Debug, PartialEq)]
pub struct SaveGame {
	pub name: String,
	pub portrait_char: i32,

	pub difficulty: i32,
	pub resolution: i32,
	pub fx_volume: i32,
	pub music_volume: i32,
	pub voices_volume: i32,
	pub flags: [u8; 8],
	pub gamma: i32,
	pub texture_memory: i32,
	pub driver: i32,
	pub render_focus: i32,

	pub keys: [i32; 7],
	pub control_type: i32,
	pub joy_sensitivity: i32,
	pub wheel_sensitivity: i32,

	pub tour_char: i32,
	pub tour_track: i32,
	/// one per [TOURRACE] CHARIX entry
	pub chars: Vec<CharResult>,

	pub quick_char: i32,
	pub quick_track: i32,
	pub unlock_popup_shown: u8,
	pub track_to_drive: i32,
}

impl Default for SaveGame {
	fn default() -> Self {
		Self {
			name: String::new(),
			portrait_char: 0,
			difficulty: 1,
			resolution: 3,
			fx_volume: 50,
			music_volume: 50,
			voices_volume: 100,
			flags: [1, 1, 1, 1, 1, 1, 0, 0],
			gamma: 0,
			texture_memory: 2,
			driver: 0,
			render_focus: 1,
			keys: [38, 40, 37, 39, 17, 18, 32],
			control_type: 0,
			joy_sensitivity: 50,
			wheel_sensitivity: 50,
			tour_char: 0,
			tour_track: 0,
			chars: Vec::new(),
			quick_char: 0,
			quick_track: 0,
			unlock_popup_shown: 0,
			track_to_drive: 0,
		}
	}
}

impl SaveGame {
	/// TfrmNewPlayer's txtName.MaxLength
	pub const NAME_LENGTH: i32 = 12;

	pub const FX_ON: usize = 0;
	pub const MUSIC_ON: usize = 1;
	pub const VOICES_ON: usize = 2;
	pub const SHOW_START_INFO: usize = 3;
	pub const ALPHA_BLENDING: usize = 4;
	pub const BILINEAR: usize = 5;
	pub const WAIT_VBL: usize = 6;
	pub const MIPMAPPING: usize = 7;

	/// A new player: static.ini [DEFAULTSETTINGS], [TOURRACE]/[QUICKRACE] DEFAULTCHAR.
	pub fn defaults(&mut self, ini: &IniFile, tour_chars: i32) {
		*self = SaveGame::default();
		let s = "DEFAULTSETTINGS";
		self.difficulty = ini.get_int(s, "DIFFICULTY", self.difficulty);
		self.resolution = ini.get_int(s, "RESOLUTION", self.resolution);
		self.fx_volume = ini.get_int(s, "FXVOLUME", self.fx_volume);
		self.music_volume = ini.get_int(s, "MUSICVOLUME", self.music_volume);
		self.voices_volume = ini.get_int(s, "VOICESVOLUME", self.voices_volume);
		const FLAG_KEYS: [&str; 8] = [
			"FXON",
			"MUSICON",
			"VOICESON",
			"SHOWSTARTINFO",
			"AlphaBlending",
			"BiliniarFiltering",
			"WaitVbl",
			"MIPMAPPING",
		];
		for k in 0..8 {
			self.flags[k] = ini.get_int(s, FLAG_KEYS[k], self.flags[k] as i32) as u8;
		}
		self.gamma = ini.get_int(s, "Gamma", self.gamma);
		self.render_focus = ini.get_int(s, "RenderFocus", self.render_focus);
		self.driver = ini.get_int(s, "DriverIndex", self.driver);
		const KEY_KEYS: [&str; 7] = ["UP", "DOWN", "LEFT", "RIGHT", "EXTRA1", "EXTRA2", "EXTRA3"];
		for k in 0..7 {
			self.keys[k] = ini.get_int(s, KEY_KEYS[k], self.keys[k]);
		}
		self.control_type = ini.get_int(s, "CONTROLTYPE", self.control_type);
		self.joy_sensitivity = ini.get_int(s, "JOYSENSITIVITY", self.joy_sensitivity);
		self.wheel_sensitivity = ini.get_int(s, "WHEELSENSITIVITY", self.wheel_sensitivity);
		self.chars = vec![CharResult::default(); tour_chars.max(0) as usize];
	}

	pub fn load(&mut self, path: &str, tour_chars: i32) -> bool {
		let Ok(data) = fs::read(path) else {
			return false;
		};
		let mut r = Reader::new(&data);
		(self.name, self.portrait_char) = read_header(&mut r);
		self.difficulty = r.i32();
		self.resolution = r.i32();
		self.fx_volume = r.i32();
		self.music_volume = r.i32();
		self.voices_volume = r.i32();
		for f in &mut self.flags {
			*f = r.u8();
		}
		self.gamma = r.i32();
		self.texture_memory = r.i32();
		self.driver = r.i32();
		self.render_focus = r.i32();
		for k in &mut self.keys {
			*k = r.i32();
		}
		self.control_type = r.i32();
		self.joy_sensitivity = r.i32();
		self.wheel_sensitivity = r.i32();
		self.tour_char = r.i32();
		self.tour_track = r.i32();
		self.chars = vec![CharResult::default(); tour_chars.max(0) as usize];
		for c in &mut self.chars {
			c.next_track = r.i32();
			c.money = r.i32();
			c.turbo = r.i32();
			for u in &mut c.upgrades {
				*u = r.u8();
			}
		}
		self.quick_char = r.i32();
		self.quick_track = r.i32();
		self.unlock_popup_shown = r.u8();
		self.track_to_drive = r.i32();
		r.ok
	}

	pub fn save(&self, path: &str) -> bool {
		let mut w = Writer::default();
		let n: Vec<u8> = latin1_bytes(&self.name).into_iter().take(Self::NAME_LENGTH as usize).collect();
		w.u8(n.len() as u8);
		for k in 0..32 {
			w.u8(if k < n.len() { n[k] } else { 0 });
		}
		w.i32(self.tour_char);
		w.i32(self.difficulty);
		w.i32(self.resolution);
		w.i32(self.fx_volume);
		w.i32(self.music_volume);
		w.i32(self.voices_volume);
		for &f in &self.flags {
			w.u8(f);
		}
		w.i32(self.gamma);
		w.i32(self.texture_memory);
		w.i32(self.driver);
		w.i32(self.render_focus);
		for &k in &self.keys {
			w.i32(k);
		}
		w.i32(self.control_type);
		w.i32(self.joy_sensitivity);
		w.i32(self.wheel_sensitivity);
		w.i32(self.tour_char);
		w.i32(self.tour_track);
		for c in &self.chars {
			w.i32(c.next_track);
			w.i32(c.money);
			w.i32(c.turbo);
			for &u in &c.upgrades {
				w.u8(u);
			}
		}
		w.i32(self.quick_char);
		w.i32(self.quick_track);
		w.u8(self.unlock_popup_shown);
		w.i32(self.track_to_drive);
		fs::write(path, &w.out).is_ok()
	}

	/// Only the header (name and portrait), as the player list reads it.
	pub fn peek(path: &str) -> Option<(String, i32)> {
		let data = fs::read(path).ok()?;
		let mut r = Reader::new(&data);
		let header = read_header(&mut r);
		if r.ok { Some(header) } else { None }
	}
}

/// The players' saves in a folder: SaveGame<n>.RCR, n = 0..9.
#[derive(Clone, Default)]
pub struct Players {
	pub dir: String,
}

impl Players {
	pub fn path(&self, n: i32) -> String {
		let mut d = self.dir.clone();
		if !d.is_empty() && !d.ends_with('/') && !d.ends_with('\\') {
			d.push('/');
		}
		format!("{d}SaveGame{n}.RCR")
	}

	pub fn exists(&self, n: i32) -> bool {
		fs::File::open(self.path(n)).is_ok()
	}

	/// The lowest free number, or -1 when all ten are taken.
	pub fn free_slot(&self) -> i32 {
		(0..10).find(|&n| !self.exists(n)).unwrap_or(-1)
	}

	pub fn list(&self) -> Vec<i32> {
		(0..10).filter(|&n| self.exists(n)).collect()
	}
}

#[cfg(test)]
mod tests {
	use super::*;

	fn scratch_dir(tag: &str) -> String {
		let dir = std::env::temp_dir().join(format!("a2r4-savegame-{tag}-{}", std::process::id()));
		fs::create_dir_all(&dir).unwrap();
		dir.to_string_lossy().into_owned()
	}

	fn sample() -> SaveGame {
		let mut s = SaveGame {
			name: "Zoë Racer".to_string(),
			portrait_char: 3,
			difficulty: 2,
			resolution: 4,
			fx_volume: 61,
			music_volume: 72,
			voices_volume: 83,
			flags: [1, 0, 1, 0, 1, 0, 1, 1],
			gamma: -5,
			texture_memory: 3,
			driver: 1,
			render_focus: 0,
			keys: [87, 83, 65, 68, 16, 17, 72],
			control_type: 2,
			joy_sensitivity: 40,
			wheel_sensitivity: 70,
			tour_char: 3,
			tour_track: 5,
			chars: Vec::new(),
			quick_char: 4,
			quick_track: 9,
			unlock_popup_shown: 1,
			track_to_drive: 6,
		};
		for k in 0..5 {
			s.chars.push(CharResult {
				next_track: k,
				money: 1000 * k - 1,
				turbo: 10 + k,
				upgrades: [k as u8, 1, 2, 3, 4],
			});
		}
		s
	}

	/// The record laid out by hand, as DataPlayer.pas's TSaveGame packs it.
	fn expected_bytes(s: &SaveGame) -> Vec<u8> {
		let mut b = Vec::new();
		let i32le = |b: &mut Vec<u8>, v: i32| b.extend_from_slice(&v.to_le_bytes());
		let name = latin1_bytes(&s.name);
		b.push(name.len() as u8);
		let mut field = [0u8; 32];
		field[..name.len()].copy_from_slice(&name);
		b.extend_from_slice(&field);
		i32le(&mut b, s.tour_char);
		for v in [s.difficulty, s.resolution, s.fx_volume, s.music_volume, s.voices_volume] {
			i32le(&mut b, v);
		}
		b.extend_from_slice(&s.flags);
		for v in [s.gamma, s.texture_memory, s.driver, s.render_focus] {
			i32le(&mut b, v);
		}
		for v in s.keys {
			i32le(&mut b, v);
		}
		for v in [s.control_type, s.joy_sensitivity, s.wheel_sensitivity, s.tour_char, s.tour_track] {
			i32le(&mut b, v);
		}
		for c in &s.chars {
			for v in [c.next_track, c.money, c.turbo] {
				i32le(&mut b, v);
			}
			b.extend_from_slice(&c.upgrades);
		}
		i32le(&mut b, s.quick_char);
		i32le(&mut b, s.quick_track);
		b.push(s.unlock_popup_shown);
		i32le(&mut b, s.track_to_drive);
		b
	}

	#[test]
	fn save_round_trip_is_byte_exact() {
		let dir = scratch_dir("rt");
		let players = Players { dir: dir.clone() };
		let s = sample();
		assert!(s.save(&players.path(0)));
		let bytes = fs::read(players.path(0)).unwrap();
		assert_eq!(bytes.len(), 1 + 32 + 4 + 5 * 4 + 8 + 4 * 4 + 7 * 4 + 5 * 4 + 5 * (3 * 4 + 5) + 4 + 4 + 1 + 4);
		assert_eq!(bytes, expected_bytes(&s));
		assert_eq!(bytes[1..10], [b'Z', b'o', 0xeb, b' ', b'R', b'a', b'c', b'e', b'r']);

		let mut back = SaveGame::default();
		assert!(back.load(&players.path(0), 5));
		// The header's i32 is the tour character, read back as the portrait.
		let mut want = s.clone();
		want.portrait_char = s.tour_char;
		assert_eq!(back, want);
		assert!(back.save(&players.path(1)));
		assert_eq!(fs::read(players.path(1)).unwrap(), bytes);

		assert_eq!(SaveGame::peek(&players.path(0)), Some(("Zoë Racer".to_string(), 3)));
		assert_eq!(players.list(), vec![0, 1]);
		assert_eq!(players.free_slot(), 2);
		assert!(!SaveGame::default().load(&players.path(7), 5));

		let mut short = SaveGame::default();
		fs::write(players.path(2), &bytes[..bytes.len() - 1]).unwrap();
		assert!(!short.load(&players.path(2), 5));
		fs::remove_dir_all(dir).unwrap();
	}

	#[test]
	fn long_names_are_cut() {
		let dir = scratch_dir("long");
		let path = format!("{dir}/SaveGame0.RCR");
		let s = SaveGame { name: "ABCDEFGHIJKLMNOP".to_string(), ..Default::default() };
		assert!(s.save(&path));
		assert_eq!(SaveGame::peek(&path).unwrap().0, "ABCDEFGHIJKL");
		fs::remove_dir_all(dir).unwrap();
	}
}
