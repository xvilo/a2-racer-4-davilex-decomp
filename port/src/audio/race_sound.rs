//! The race's sounds (snd_main.cpp, car_snd.cpp, csndeng.cpp):
//!
//!   sound.ini [SndTypes] n=  name, file, ..., volume (%), ..., group; the game refers to
//!                            samples by name (cmrpm -> cmrpmm.wav)
//!   car_snd.ini [Car<n>]     a car's engine: GearA (the engine at speed), Stat (idling),
//!                            Start, SwitchGear, MinRpm/MaxRpm
//!   Raser.ini [MUSIC]        the tunes; a stage's line in [MAPS] picks one; [SOUND] the
//!                            music and effects volumes (%)
//!
//! The original mixes per-gear cylinder samples by rpm; the port plays the idle and the
//! running samples, crossfaded and pitched by the rpm.

use std::collections::BTreeMap;
use std::rc::Rc;
use std::sync::Arc;

use crate::audio::mixer::{Mixer, Sample, decode_wav};
use crate::game::car::Car;
use crate::res::archive::{NamedArchive, find_file_ci};
use crate::xvga::inifile::{IniFile, atof, atoi, split_fields};

pub struct RaceSound {
	rcs: Option<Rc<NamedArchive>>,
	/// name -> file, volume
	types: BTreeMap<String, (String, f32)>,
	cache: BTreeMap<String, Option<Arc<Sample>>>,
	music_names: BTreeMap<i32, String>,
	rpm_name: String,
	idle_name: String,
	/// car_snd.ini Start (the engine starting) and SwitchGear (a gear change).
	pub start_name: String,
	pub gear_name: String,
	min_rpm: f32,
	max_rpm: f32,
	music_volume: f32,
	sfx_volume: f32,
	idle_voice: i32,
	rpm_voice: i32,
	music_voice: i32,
	on: bool,
}

impl Default for RaceSound {
	fn default() -> Self {
		RaceSound {
			rcs: None,
			types: BTreeMap::new(),
			cache: BTreeMap::new(),
			music_names: BTreeMap::new(),
			rpm_name: String::new(),
			idle_name: String::new(),
			start_name: String::new(),
			gear_name: String::new(),
			min_rpm: 800.0,
			max_rpm: 5800.0,
			music_volume: 0.9,
			sfx_volume: 0.9,
			idle_voice: 0,
			rpm_voice: 0,
			music_voice: 0,
			on: false,
		}
	}
}

fn lower(s: &str) -> String {
	s.chars().map(|c| c.to_ascii_lowercase()).collect()
}

fn clamp(v: f32, lo: f32, hi: f32) -> f32 {
	if v < lo {
		lo
	} else if hi < v {
		hi
	} else {
		v
	}
}

impl RaceSound {
	pub fn load(&mut self, dir: &str, archive: &Rc<NamedArchive>, car_sound: i32) -> bool {
		self.rcs = Some(archive.clone());
		let mut snd = IniFile::default();
		let mut car = IniFile::default();
		let mut raser = IniFile::default();
		let p = find_file_ci(dir, "sound.ini");
		if !p.is_empty() && snd.load(&p) {
			for k in snd.keys("SndTypes") {
				let f = split_fields(&snd.get("SndTypes", &k), ',');
				if f.len() >= 4 {
					self.types.insert(lower(&f[0]), (f[1].clone(), atof(&f[3]) as f32 / 100.0));
				}
			}
		}
		let p = find_file_ci(dir, "car_snd.ini");
		if !p.is_empty() && car.load(&p) {
			let sec = format!("Car{}", car_sound);
			self.rpm_name = car.get_or(&sec, "GearA", "cmrpm");
			self.idle_name = car.get_or(&sec, "Stat", "cmstat");
			self.start_name = car.get_or(&sec, "Start", "");
			self.gear_name = car.get_or(&sec, "SwitchGear", "SWITCH_GEAR");
			self.min_rpm = car.get_int(&sec, "MinRpm", 800) as f32;
			self.max_rpm = car.get_int(&sec, "MaxRpm", 5800) as f32;
		}
		let p = find_file_ci(dir, "Raser.ini");
		if !p.is_empty() && raser.load(&p) {
			self.music_volume = raser.get_int("SOUND", "MUSICVOLUME", 90) as f32 / 100.0;
			self.sfx_volume = raser.get_int("SOUND", "SFXVOLUME", 90) as f32 / 100.0;
			self.on = raser.get_int("SOUND", "ON", 1) != 0;
			for k in raser.keys("MUSIC") {
				if k.chars().next().is_some_and(|c| c.is_ascii_digit()) {
					self.music_names.insert(atoi(&k), raser.get("MUSIC", &k));
				}
			}
		}
		// Testing: A2_SOUND=0 keeps quiet.
		if let Ok(e) = std::env::var("A2_SOUND") {
			self.on = self.on && !e.starts_with('0');
		}
		if !self.on || !Mixer::get().open() {
			return false;
		}
		for n in [self.rpm_name.clone(), self.idle_name.clone()] {
			if self.sample(&n).is_none() {
				eprintln!("sound: no sample {}", n);
			}
		}
		true
	}

	fn sample(&mut self, name: &str) -> Option<Arc<Sample>> {
		let key = lower(name);
		if let Some(c) = self.cache.get(&key) {
			return c.clone();
		}
		let mut s = None;
		let t = self.types.get(&key);
		let is_file = key.chars().count() > 4 && key.ends_with(".wav");
		let file = match t {
			Some(t) => t.0.clone(),
			None if is_file => key.clone(),
			None => format!("{}.wav", name),
		};
		if let Some(bytes) = self.rcs.as_ref().and_then(|r| r.read(&file)) {
			s = decode_wav(&bytes);
		}
		self.cache.insert(key, s.clone());
		s
	}

	/// The player's volumes (0..1), in place of Raser.ini's; negative keeps those.
	pub fn volumes(&mut self, music: f32, sfx: f32) {
		if music >= 0.0 {
			self.music_volume = music;
		}
		if sfx >= 0.0 {
			self.sfx_volume = sfx;
		}
	}

	pub fn start_music(&mut self, music: i32) {
		if !self.on {
			return;
		}
		let Some(m) = self.music_names.get(&music).cloned() else {
			return;
		};
		let v = self.types.get(&lower(&m)).map_or(1.0, |t| t.1);
		let s = self.sample(&m);
		self.music_voice = Mixer::get().play(s, v * self.music_volume * 0.6, true, 1.0, 0.0);
	}

	/// A sample by its sound.ini name, played once.
	pub fn effect(&mut self, name: &str, volume: f32) {
		if !self.on {
			return;
		}
		let v = self.types.get(&lower(name)).map_or(1.0, |t| t.1);
		let s = self.sample(name);
		Mixer::get().play(s, v * volume * self.sfx_volume, false, 1.0, 0.0);
	}

	/// A looping sample (e.g. a siren; or a file, "cow.wav"); its voice, for set() and
	/// stop_voice().
	pub fn r#loop(&mut self, name: &str) -> i32 {
		if !self.on {
			return 0;
		}
		let s = self.sample(name);
		Mixer::get().play(s, 0.0, true, 1.0, 0.0)
	}

	/// ... and its pitch (1: as recorded).
	pub fn set_pitch(&self, voice: i32, volume: f32, pitch: f32) {
		Mixer::get().set(voice, volume * self.sfx_volume * 0.7, pitch, 0.0);
	}

	pub fn set(&self, voice: i32, volume: f32) {
		Mixer::get().set(voice, volume * self.sfx_volume * 0.7, 1.0, 0.0);
	}

	pub fn stop_voice(&self, voice: i32) {
		Mixer::get().stop(voice);
	}

	/// The player's engine, every frame.
	pub fn engine(&mut self, car: &Car, throttle: f32) {
		if !self.on {
			return;
		}
		let mx = Mixer::get();
		if self.idle_voice == 0 {
			let s = self.sample(&self.idle_name.clone());
			self.idle_voice = mx.play(s, 0.0, true, 1.0, 0.0);
		}
		if self.rpm_voice == 0 {
			let s = self.sample(&self.rpm_name.clone());
			self.rpm_voice = mx.play(s, 0.0, true, 1.0, 0.0);
		}
		// 0 at idle, 1 at the top of the rev range.
		let f = clamp((car.rpm - self.min_rpm) / (self.max_rpm - self.min_rpm), 0.0, 1.0);
		let run = clamp(car.speed_kmh() / 25.0, 0.0, 1.0);
		let load = 0.7 + 0.3 * throttle;
		mx.set(self.idle_voice, (1.0 - run) * 0.5 * self.sfx_volume, 0.9 + 0.3 * f, 0.0);
		mx.set(self.rpm_voice, run * load * 0.55 * self.sfx_volume, 0.6 + 0.9 * f, 0.0);
	}

	pub fn stop(&mut self) {
		Mixer::get().stop_all();
		self.idle_voice = 0;
		self.rpm_voice = 0;
		self.music_voice = 0;
	}
}

#[cfg(test)]
mod tests {
	use super::*;

	const DATA: &str = "/Users/xvilo/projects/A2Racer4-dump/disc/Data";

	#[test]
	fn reads_the_sound_tables() {
		if !std::path::Path::new(DATA).is_dir() {
			return;
		}
		let mut rcs = NamedArchive::default();
		assert!(rcs.open(DATA, "rcs"));
		let mut s = RaceSound::default();
		s.load(DATA, &Rc::new(rcs), 0);
		assert_eq!(s.rpm_name.to_ascii_lowercase(), "cmrpm");
		assert!(!s.types.is_empty());
		assert!(!s.music_names.is_empty());
		assert!(s.min_rpm < s.max_rpm);
		assert!(s.sample(&s.rpm_name.clone()).is_some());
		assert!(s.sample("no_such_sample").is_none());
		assert!(s.cache.contains_key("no_such_sample"));
	}
}
