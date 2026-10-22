//! How the police go about it (ai_cops.cpp, Car_cops.cpp, ev_cops.cpp):
//!
//!   cops.ini    [Cop Types] the kinds (COP2, COP3, SUPERCOP: CAR_CFG.INI [traffic] names);
//!               [Cop Tactics] n = action, seconds, action, seconds, ...: BESIDE (alongside
//!               the target), INTO (ramming it), FRONT (getting ahead and staying there),
//!               MEGAPHONE (alongside, calling out), HANDBRAKE (ahead, braking hard across
//!               its way); [Track <n> Tactics] Default/Cop2/Cop3/Supercop = the tactics
//!               each kind may pick there
//!   intel.ini   [GENERAL] StopSpeed (km/h: a target this slow with a cop beside is
//!               caught), ChaseTimeEasy/Hard (s), GiveUpDist (chunks behind),
//!               CopsPerPlayerEasy/Hard, CopsPerRacer
//!
//! The player is let off with a warning twice ("EERSTE", "LAATSTE WAARSCHUWING"), and
//! arrested the third time; a computer racer at once.

use std::collections::BTreeMap;

use crate::res::archive::find_file_ci;
use crate::xvga::inifile::{IniFile, atof, atoi, split_fields};

#[allow(non_camel_case_types, clippy::upper_case_acronyms)]
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum CopAction {
	BESIDE,
	INTO,
	FRONT,
	MEGAPHONE,
	HANDBRAKE,
}

#[derive(Clone, Debug, Default)]
pub struct CopTactic {
	pub steps: Vec<(CopAction, f32)>,
}

#[derive(Clone)]
pub struct PoliceRules {
	pub tactics: Vec<CopTactic>,
	/// kind (lower case) -> tactics
	pub track_tactics: BTreeMap<String, Vec<i32>>,
	pub stop_speed: f32,
	pub chase_time: f32,
	pub give_up_chunks: i32,
	pub cops_per_player: i32,
	pub cops_per_racer: i32,
}

impl Default for PoliceRules {
	fn default() -> Self {
		PoliceRules {
			tactics: Vec::new(),
			track_tactics: BTreeMap::new(),
			stop_speed: 7.0,
			chase_time: 120.0,
			give_up_chunks: 20,
			cops_per_player: 4,
			cops_per_racer: 1,
		}
	}
}

fn lower(s: &str) -> String {
	s.to_ascii_lowercase()
}

fn action_named(name: &str) -> Option<CopAction> {
	match name {
		"BESIDE" => Some(CopAction::BESIDE),
		"INTO" => Some(CopAction::INTO),
		"FRONT" => Some(CopAction::FRONT),
		"MEGAPHONE" => Some(CopAction::MEGAPHONE),
		"HANDBRAKE" => Some(CopAction::HANDBRAKE),
		_ => None,
	}
}

impl PoliceRules {
	pub fn load(&mut self, dir: &str, stage: i32, difficulty: i32) {
		let mut cops = IniFile::default();
		let mut intel = IniFile::default();
		let mut p = find_file_ci(dir, "cops.ini");
		if !p.is_empty() && cops.load(&p) {
			let n = cops.get_int("Cop Tactics", "Count", 0);
			for i in 0..n {
				let f = split_fields(&cops.get("Cop Tactics", &i.to_string()), ',');
				let mut t = CopTactic::default();
				let mut k = 0;
				while k + 1 < f.len() {
					if let Some(a) = action_named(&f[k]) {
						t.steps.push((a, f32::max(0.5, atof(&f[k + 1]) as f32)));
					}
					k += 2;
				}
				self.tactics.push(t);
			}
			let sec = format!("Track {stage} Tactics");
			for k in cops.keys(&sec) {
				let mut list = Vec::new();
				for v in split_fields(&cops.get(&sec, &k), ',') {
					let t = atoi(&v);
					if t >= 0 && t < self.tactics.len() as i32 && !self.tactics[t as usize].steps.is_empty() {
						list.push(t);
					}
				}
				self.track_tactics.insert(lower(&k), list);
			}
		}
		p = find_file_ci(dir, "intel.ini");
		if !p.is_empty() && intel.load(&p) {
			let hard = difficulty >= 2;
			self.stop_speed = intel.get_int("GENERAL", "StopSpeed", 7) as f32;
			self.chase_time =
				intel.get_int("GENERAL", if hard { "ChaseTimeHard" } else { "ChaseTimeEasy" }, 120) as f32;
			self.give_up_chunks = intel.get_int("GENERAL", "GiveUpDist", 20);
			self.cops_per_player =
				intel.get_int("GENERAL", if hard { "CopsPerPlayerHard" } else { "CopsPerPlayerEasy" }, 4);
			self.cops_per_racer = intel.get_int("GENERAL", "CopsPerRacer", 1);
		}
	}

	/// The tactics a kind of cop (its CAR_CFG.INI name) may use on this stage.
	pub fn for_kind(&self, kind: &str) -> &[i32] {
		self.track_tactics.get(&lower(kind)).or_else(|| self.track_tactics.get("default")).map_or(&[], |v| v.as_slice())
	}
}

/// A chasing cop's place in its tactic.
#[derive(Clone, Debug)]
pub struct CopPlan {
	pub tactic: i32,
	pub step: usize,
	pub left: f32,
	/// which side of the target it goes, -1 left, 1 right
	pub side: i32,
	pub step_started: bool,
}

impl Default for CopPlan {
	fn default() -> Self {
		CopPlan { tactic: -1, step: 0, left: 0.0, side: 1, step_started: false }
	}
}

impl CopPlan {
	/// Picks a tactic at random from the list.
	pub fn begin(&mut self, rules: &PoliceRules, choice: &[i32], rnd: &mut u32) {
		*rnd = rnd.wrapping_mul(1103515245).wrapping_add(12345);
		self.tactic = if choice.is_empty() { -1 } else { choice[(*rnd >> 16) as usize % choice.len()] };
		self.step = 0;
		self.left = if self.tactic >= 0 { rules.tactics[self.tactic as usize].steps[0].1 } else { 0.0 };
		self.side = if (*rnd >> 20) & 1 != 0 { 1 } else { -1 };
		self.step_started = false;
	}

	/// The action now; moves on as the steps run out (a new tactic after the last).
	pub fn action(&mut self, rules: &PoliceRules, choice: &[i32], dt: f32, rnd: &mut u32) -> CopAction {
		if self.tactic < 0 {
			return CopAction::INTO;
		}
		self.left -= dt;
		if self.left <= 0.0 {
			let t = &rules.tactics[self.tactic as usize];
			self.step += 1;
			if self.step >= t.steps.len() {
				self.begin(rules, choice, rnd);
			} else {
				self.left = t.steps[self.step].1;
				self.step_started = false;
			}
			if self.tactic < 0 {
				return CopAction::INTO;
			}
		}
		rules.tactics[self.tactic as usize].steps[self.step].0
	}
}

#[cfg(test)]
mod tests {
	use super::*;

	#[test]
	fn loads_the_tactics() {
		if !std::path::Path::new(&crate::res::archive::test_data()).exists() {
			return;
		}
		let mut rules = PoliceRules::default();
		rules.load(&crate::res::archive::test_data(), 0, 1);
		assert!(!rules.tactics.is_empty());
		let choice = rules.for_kind("COP2").to_vec();
		for &t in &choice {
			assert!(!rules.tactics[t as usize].steps.is_empty());
		}
		let mut plan = CopPlan::default();
		let mut rnd = 1u32;
		plan.begin(&rules, &choice, &mut rnd);
		assert_eq!(rnd, 1103527590);
		if !choice.is_empty() {
			assert!(choice.contains(&plan.tactic));
			for _ in 0..1000 {
				plan.action(&rules, &choice, 0.1, &mut rnd);
			}
		}
	}

	#[test]
	fn no_tactic_rams() {
		let rules = PoliceRules::default();
		let mut plan = CopPlan::default();
		let mut rnd = 0u32;
		plan.begin(&rules, rules.for_kind("x"), &mut rnd);
		assert_eq!(plan.tactic, -1);
		assert_eq!(plan.action(&rules, &[], 1.0, &mut rnd), CopAction::INTO);
	}
}
