//! The race's texts (language.ini: [SETTINGS] LANGUAGE 0 Dutch, 1 English, 2 German; the
//! sections NEDERLANDS, ENGELS, DUITS, numbered strings). The Dutch release says Dutch.

use crate::res::archive::find_file_ci;
use crate::xvga::inifile::IniFile;

#[derive(Clone, Default)]
pub struct Language {
	pub text: Vec<String>,
}

impl Language {
	pub fn load(&mut self, dir: &str) {
		self.text.clear();
		let mut ini = IniFile::default();
		let path = find_file_ci(dir, "language.ini");
		if path.is_empty() || !ini.load(&path) {
			return;
		}
		const SECTIONS: [&str; 3] = ["NEDERLANDS", "ENGELS", "DUITS"];
		let lang = ini.get_int("SETTINGS", "LANGUAGE", 0);
		let sec = SECTIONS[if (0..3).contains(&lang) { lang as usize } else { 0 }];
		let count = ini.get_int("SETTINGS", "TEXT_COUNT", 0);
		for i in 0..count {
			self.text.push(ini.get(sec, &i.to_string()));
		}
	}

	/// String n, or fallback when it is missing.
	pub fn get(&self, n: i32, fallback: &str) -> String {
		if n >= 0 && n < self.text.len() as i32 && !self.text[n as usize].is_empty() {
			return self.text[n as usize].clone();
		}
		fallback.to_string()
	}
}

// Numbers of the strings the race uses.
/// GEFINISHT
pub const TXT_FINISHED: i32 = 17;
/// POSITIE: %d
pub const TXT_POSITION: i32 = 18;
/// PAUZE
pub const TXT_PAUSE_HEADER: i32 = 24;
pub const TXT_PAUSE_1: i32 = 25;
pub const TXT_PAUSE_2: i32 = 26;
/// EINDE
pub const TXT_QUIT_HEADER: i32 = 27;
pub const TXT_QUIT_1: i32 = 28;
/// ... (J/N)
pub const TXT_QUIT_2: i32 = 29;
/// NIEUW RACE RECORD
pub const TXT_NEW_RACE_RECORD: i32 = 30;
/// NIEUW RONDE RECORD
pub const TXT_NEW_LAP_RECORD: i32 = 31;
/// RACE TIJD
pub const TXT_RACE_TIME: i32 = 33;
pub const TXT_LAP_INFO: i32 = 34;
pub const TXT_TIME: i32 = 35;
pub const TXT_RECORD: i32 = 36;
pub const TXT_LAST: i32 = 37;
pub const TXT_POS: i32 = 38;
/// RONDE
pub const TXT_LAP: i32 = 39;
/// TOTAL LOSS
pub const TXT_TOTAL_LOSS: i32 = 40;
/// TIJD IS OM
pub const TXT_TIME_UP: i32 = 41;
/// GEARRESTEERD
pub const TXT_ARRESTED: i32 = 42;
pub const TXT_RACE_OVER: i32 = 43;
/// EXTRA TIJD
pub const TXT_EXTRA_TIME: i32 = 44;
/// LAATSTE RONDE
pub const TXT_LAST_LAP: i32 = 45;
/// INVINCIBLE
pub const TXT_INVINCIBLE: i32 = 46;
/// EERSTE WAARSCHUWING
pub const TXT_WARNING_1: i32 = 49;
/// LAATSTE WAARSCHUWING
pub const TXT_WARNING_2: i32 = 50;
/// FLITS BONUS  +100 EURO
pub const TXT_RADAR_BONUS: i32 = 51;
pub const TXT_SPEED: i32 = 54;
/// FLITS BOETE  -50 EURO
pub const TXT_FLASH_FINE: i32 = 67;
/// DRUK ENTER/RETURN VOOR RESET
pub const TXT_RESET: i32 = 68;

#[cfg(test)]
mod tests {
	use super::*;

	const DATA: &str = "/Users/xvilo/projects/A2Racer4-dump/disc/Data";

	#[test]
	fn loads_the_dutch_texts() {
		if !std::path::Path::new(DATA).exists() {
			return;
		}
		let mut l = Language::default();
		l.load(DATA);
		assert!(l.text.len() > TXT_RESET as usize);
		assert_eq!(l.get(TXT_FINISHED, "x"), "GEFINISHT");
		assert_eq!(l.get(-1, "fallback"), "fallback");
		assert_eq!(l.get(100000, "fallback"), "fallback");
	}
}
