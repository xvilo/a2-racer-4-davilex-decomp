//! The communicator (Ovl_Communicator.cpp, communi.ini): the panel at the bottom left where
//! the characters talk, each message with its portrait, title, up to four lines of text
//! and a voice.
//!
//!   [GENERAL]     initwaittime: seconds before the first message; chars_per_line
//!   [SAMPLES]     n = the voices' samples (<name>.wav)
//!   [CATEGORIES]  n = the events the game posts ("~knock_out" posts a random message of
//!                 that category)
//!   [SYSTEM]      n = name, sample, event: copalert (event 1: the red lamp), goleft,
//!                 goright, gofork, gozigzag (events 2-5: the direction arrows), newmessage
//!                 (event 6: the beep before a message)
//!   [PLAYERS]     the characters; each has a section [<NAME>]: priority, title,
//!                 ovl_photo (the portrait element), and n = id, [categories], priority
//!                 (0 highest; 100 and over: a tip, cut short by anything else), sample,
//!                 event, show time (s), life time (s: how long it may wait), text ('@' is
//!                 a comma, '#' a new line)
//!
//! Up to ten messages wait, the most important first; a message posted again only gets
//! its life time renewed.

use crate::audio::race_sound::RaceSound;
use crate::res::archive::find_file_ci;
use crate::xvga::inifile::{IniFile, atof, atoi, split_fields};

fn trim(s: &str) -> String {
	s.trim_matches(|c| c == ' ' || c == '\t').to_string()
}

fn upper(s: &str) -> String {
	s.to_ascii_uppercase()
}

#[derive(Clone)]
struct Message {
	id: String,
	who: i32,
	categories: Vec<i32>,
	priority: i32,
	sample: i32,
	event: i32,
	show: f32,
	life: f32,
	text: String,
}

impl Default for Message {
	fn default() -> Self {
		Message {
			id: String::new(),
			who: 0,
			categories: Vec::new(),
			priority: 0,
			sample: -1,
			event: 0,
			show: 10.0,
			life: 10.0,
			text: String::new(),
		}
	}
}

#[derive(Clone)]
struct Character {
	name: String,
	title: String,
	photo: String,
	priority: i32,
}

impl Default for Character {
	fn default() -> Self {
		Character { name: String::new(), title: String::new(), photo: String::new(), priority: 4 }
	}
}

#[derive(Clone, Copy)]
struct Waiting {
	msg: i32,
	until: f32,
	owner: i32,
}

#[derive(Clone)]
struct System {
	name: String,
	sample: i32,
	event: i32,
}

pub struct Communicator {
	/// 0 on screen .. 1 moved away
	pub slide: f32,
	pub photo: String,
	pub title: String,
	pub lines: Vec<String>,
	pub owner: i32,
	/// The red lamp's blinking (cop alert, 0..100) and its state now.
	pub alert: i32,
	pub alert_lit: bool,
	/// A direction arrow (2 left, 3 right, 4 both, 5 zigzag; 0 none) and until when.
	pub arrow: i32,
	pub arrow_until: f32,

	samples: Vec<String>,
	categories: Vec<String>,
	systems: Vec<System>,
	chars: Vec<Character>,
	messages: Vec<Message>,
	queue: Vec<Waiting>,
	init_wait: f32,
	per_line: i32,
	current: i32,
	current_until: f32,
	voiced: bool,
	alert_tick: f32,
	alert_blink: f32,
	alert_voice: i32,
	rnd: u32,
	pending_system: Vec<(String, f32)>,
}

impl Default for Communicator {
	fn default() -> Self {
		Communicator {
			slide: 1.0,
			photo: String::new(),
			title: String::new(),
			lines: Vec::new(),
			owner: -1,
			alert: 0,
			alert_lit: false,
			arrow: 0,
			arrow_until: 0.0,
			samples: Vec::new(),
			categories: Vec::new(),
			systems: Vec::new(),
			chars: Vec::new(),
			messages: Vec::new(),
			queue: Vec::new(),
			init_wait: 5.0,
			per_line: 20,
			current: -1,
			current_until: 0.0,
			voiced: false,
			alert_tick: 0.0,
			alert_blink: 0.0,
			alert_voice: 0,
			rnd: 4321,
			pending_system: Vec::new(),
		}
	}
}

impl Communicator {
	pub fn load(&mut self, dir: &str) -> bool {
		let mut ini = IniFile::default();
		let path = find_file_ci(dir, "communi.ini");
		if path.is_empty() || !ini.load(&path) {
			return false;
		}
		self.init_wait = ini.get_int("GENERAL", "initwaittime", 5) as f32;
		self.per_line = 8.max(ini.get_int("GENERAL", "chars_per_line", 20));
		let mut i = 0;
		while ini.has("SAMPLES", &i.to_string()) {
			self.samples.push(ini.get("SAMPLES", &i.to_string()));
			i += 1;
		}
		let mut i = 0;
		while ini.has("CATEGORIES", &i.to_string()) {
			self.categories.push(upper(&ini.get("CATEGORIES", &i.to_string())));
			i += 1;
		}
		let mut i = 0;
		while ini.has("SYSTEM", &i.to_string()) {
			let f = split_fields(&ini.get("SYSTEM", &i.to_string()), ',');
			if f.len() >= 3 {
				self.systems.push(System { name: upper(&f[0]), sample: atoi(&f[1]), event: atoi(&f[2]) });
			}
			i += 1;
		}
		let mut i = 0;
		while ini.has("PLAYERS", &i.to_string()) {
			let f = split_fields(&ini.get("PLAYERS", &i.to_string()), ',');
			i += 1;
			if f.is_empty() {
				continue;
			}
			let mut c = Character { name: upper(&f[0]), ..Default::default() };
			c.title = ini.get(&c.name, "title");
			c.photo = ini.get(&c.name, "ovl_photo");
			c.priority = ini.get_int(&c.name, "priority", 4);
			let who = self.chars.len() as i32;
			self.chars.push(c.clone());
			let mut k = 0;
			while ini.has(&c.name, &k.to_string()) {
				let line = ini.get(&c.name, &k.to_string());
				k += 1;
				// id, [a,b], priority, sample, event, show, life, text: the text may hold
				// anything after the seventh comma outside the brackets.
				let (Some(lb), Some(rb)) = (line.find('['), line.find(']')) else { continue };
				if rb < lb {
					continue;
				}
				let mut m = Message { who, ..Default::default() };
				m.id = upper(&trim(&line[..line.find(',').unwrap_or(line.len())]));
				for cat in split_fields(&line[lb + 1..rb], ',') {
					if !cat.is_empty() {
						m.categories.push(atoi(&cat));
					}
				}
				let rest = split_fields(&line[rb + 1..], ',');
				// rest[0] is empty (the comma after the brackets).
				if rest.len() < 7 {
					continue;
				}
				m.priority = atoi(&rest[1]);
				m.sample = atoi(&rest[2]);
				m.event = atoi(&rest[3]);
				m.show = atof(&rest[4]) as f32;
				m.life = atof(&rest[5]) as f32;
				for (t, r) in rest.iter().enumerate().skip(6) {
					if t > 6 {
						m.text.push(',');
					}
					m.text += r;
				}
				m.text = trim(&m.text);
				self.messages.push(m);
			}
		}
		!self.messages.is_empty()
	}

	fn wrap(&self, text: &str) -> Vec<String> {
		let mut out: Vec<String> = Vec::new();
		let mut word = String::new();
		let mut line = String::new();
		let per_line = self.per_line;
		fn flush_line(out: &mut Vec<String>, line: &mut String) {
			if !line.is_empty() {
				out.push(line.clone());
			}
			line.clear();
		}
		let add_word = |out: &mut Vec<String>, line: &mut String, word: &mut String| {
			if word.is_empty() {
				return;
			}
			if !line.is_empty() && (line.chars().count() + 1 + word.chars().count()) as i32 > per_line {
				flush_line(out, line);
			}
			if !line.is_empty() {
				line.push(' ');
			}
			line.push_str(word);
			word.clear();
		};
		for mut c in text.chars() {
			if c == '@' {
				c = ',';
			}
			if c == '#' {
				add_word(&mut out, &mut line, &mut word);
				flush_line(&mut out, &mut line);
			} else if c == ' ' {
				add_word(&mut out, &mut line, &mut word);
			} else {
				word.push(c);
			}
		}
		add_word(&mut out, &mut line, &mut word);
		flush_line(&mut out, &mut line);
		out.truncate(4);
		out
	}

	fn enqueue(&mut self, msg: i32, now: f32, who: i32) {
		let m = &self.messages[msg as usize];
		for w in &mut self.queue {
			if w.msg == msg && w.owner == who {
				w.until = now + m.life;
				return;
			}
		}
		if self.queue.len() >= 10 {
			return;
		}
		let more_important = |w: &Waiting| {
			let o = &self.messages[w.msg as usize];
			if o.priority != m.priority {
				return o.priority < m.priority;
			}
			self.chars[o.who as usize].priority <= self.chars[m.who as usize].priority
		};
		let at = self.queue.iter().position(|w| !more_important(w)).unwrap_or(self.queue.len());
		let until = now + m.life;
		self.queue.insert(at, Waiting { msg, until, owner: who });
	}

	/// "~category" or a message's id; owner: the racer it is about (its car's damage shows
	/// on the panel), or -1. now: the race clock, s.
	pub fn post(&mut self, name: &str, who: i32, now: f32) {
		if self.messages.is_empty() || name.is_empty() {
			return;
		}
		if let Some(cat) = name.strip_prefix('~') {
			let cat = upper(cat);
			let Some(ci) = self.categories.iter().position(|c| *c == cat) else { return };
			let ci = ci as i32;
			let mut pick: Vec<i32> = Vec::new();
			for (i, m) in self.messages.iter().enumerate() {
				if m.categories.contains(&ci) {
					pick.push(i as i32);
				}
			}
			if pick.is_empty() {
				return;
			}
			self.rnd = self.rnd.wrapping_mul(1103515245).wrapping_add(12345);
			self.enqueue(pick[(self.rnd >> 16) as usize % pick.len()], now, who);
			return;
		}
		let id = upper(name);
		if let Some(sys) = id.strip_prefix("SYSTEM_") {
			self.pending_system.push((sys.to_string(), now));
			return;
		}
		if let Some(i) = self.messages.iter().position(|m| m.id == id) {
			self.enqueue(i as i32, now, who);
		}
	}

	fn event(&mut self, ev: i32, now: f32, sound: &mut RaceSound) {
		if ev == 1 {
			self.alert = (self.alert + 10).min(100);
			if self.alert_voice == 0 {
				self.alert_voice = sound.r#loop("copalert.wav");
			}
		} else if (2..=5).contains(&ev) {
			// 0x489b70: the arrow for 6 s.
			self.arrow = ev;
			self.arrow_until = now + 6.0;
		}
	}

	fn system(&mut self, name: &str, now: f32, sound: &mut RaceSound) {
		let hits: Vec<(i32, i32)> =
			self.systems.iter().filter(|s| s.name == name).map(|s| (s.sample, s.event)).collect();
		for (sample, event) in hits {
			if sample >= 0 && (sample as usize) < self.samples.len() && event != 1 {
				sound.effect(&format!("{}.wav", self.samples[sample as usize]), 1.0);
			}
			self.event(event, now, sound);
		}
	}

	/// What the panel shows.
	pub fn showing(&self) -> bool {
		self.current >= 0
	}

	pub fn update(&mut self, now: f32, dt: f32, sound: &mut RaceSound) {
		let pending = std::mem::take(&mut self.pending_system);
		for (name, at) in &pending {
			self.system(name, *at, sound);
		}
		if self.arrow != 0 && now >= self.arrow_until {
			self.arrow = 0;
		}
		// 0x489d30: the cop alert lamp blinks every 0.5 s, weakening by 7 a frame (at some 30
		// frames a second), its sample looping meanwhile.
		if self.alert > 0 {
			self.alert_tick += dt * 30.0;
			while self.alert_tick >= 1.0 && self.alert > 0 {
				self.alert -= 7;
				self.alert_tick -= 1.0;
			}
			self.alert_blink += dt;
			if self.alert_blink >= 0.5 {
				self.alert_blink = 0.0;
				self.alert_lit = !self.alert_lit;
			}
			if self.alert_voice != 0 {
				sound.set(self.alert_voice, 1.0);
			}
		}
		if self.alert <= 0 {
			self.alert = 0;
			self.alert_lit = false;
			if self.alert_voice != 0 {
				sound.stop_voice(self.alert_voice);
				self.alert_voice = 0;
			}
		}
		self.queue.retain(|w| !(w.until < now));
		// A tip gives way to anything more important.
		if self.current >= 0
			&& self.messages[self.current as usize].priority >= 100
			&& !self.queue.is_empty()
			&& self.messages[self.queue[0].msg as usize].priority < 100
		{
			self.current_until = now;
		}
		if now >= self.init_wait && (self.current < 0 || now >= self.current_until) {
			if self.queue.is_empty() {
				self.current = -1;
				self.owner = -1;
			} else {
				let w = self.queue.remove(0);
				self.current = w.msg;
				self.owner = w.owner;
				let m = &self.messages[self.current as usize];
				let c = &self.chars[m.who as usize];
				self.photo = c.photo.clone();
				self.title = c.title.clone();
				let show = m.show;
				let quiet = c.name == "HONNEY" || c.name == "SHADOW";
				self.lines = self.wrap(&m.text);
				self.current_until = now + show;
				self.voiced = false;
				// The racers' own talk shows their car's health; Honey's and Shadow's not.
				if quiet {
					self.owner = -1;
				}
			}
		}
		// Moved away while silent, back in for a message (moveaway).
		self.slide = (self.slide + (if self.current >= 0 { -dt } else { dt }) * 4.0).clamp(0.0, 1.0);
		if self.current >= 0 && self.slide <= 0.0 && !self.voiced {
			let (event, sample) = {
				let m = &self.messages[self.current as usize];
				(m.event, m.sample)
			};
			if event == 0 {
				self.system("NEWMESSAGE", now, sound);
			} else {
				self.event(event, now, sound);
			}
			if sample >= 0 && (sample as usize) < self.samples.len() {
				sound.effect(&format!("{}.wav", self.samples[sample as usize]), 1.0);
			}
			self.voiced = true;
		}
	}
}

#[cfg(test)]
mod tests {
	use super::*;

	const DATA: &str = "/Users/xvilo/projects/A2Racer4-dump/disc/Data";

	#[test]
	fn loads_communi_ini() {
		if !std::path::Path::new(DATA).exists() {
			return;
		}
		let mut c = Communicator::default();
		assert!(c.load(DATA));
		assert!(!c.chars.is_empty() && !c.categories.is_empty());
		for m in &c.messages {
			assert!(c.wrap(&m.text).len() <= 4);
		}
	}
}
