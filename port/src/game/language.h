/* The race's texts (language.ini: [SETTINGS] LANGUAGE 0 Dutch, 1 English, 2 German; the
 * sections NEDERLANDS, ENGELS, DUITS, numbered strings). The Dutch release says Dutch. */
#pragma once

#include <string>
#include <vector>

struct Language {
	std::vector<std::string> text;

	void load(const std::string &dir);
	/* String n, or fallback when it is missing. */
	std::string get(int n, const char *fallback) const;
};

/* Numbers of the strings the race uses. */
enum {
	TXT_FINISHED = 17,   /* GEFINISHT */
	TXT_POSITION = 18,   /* POSITIE: %d */
	TXT_PAUSE_HEADER = 24, /* PAUZE */
	TXT_PAUSE_1 = 25,
	TXT_PAUSE_2 = 26,
	TXT_QUIT_HEADER = 27,  /* EINDE */
	TXT_QUIT_1 = 28,
	TXT_QUIT_2 = 29,       /* ... (J/N) */
	TXT_RACE_TIME = 33,  /* RACE TIJD */
	TXT_LAP_INFO = 34,
	TXT_TIME = 35,
	TXT_RECORD = 36,
	TXT_LAST = 37,
	TXT_POS = 38,
	TXT_LAP = 39,        /* RONDE */
	TXT_TOTAL_LOSS = 40, /* TOTAL LOSS */
	TXT_TIME_UP = 41,    /* TIJD IS OM */
	TXT_ARRESTED = 42,   /* GEARRESTEERD */
	TXT_RACE_OVER = 43,
	TXT_LAST_LAP = 45,   /* LAATSTE RONDE */
	TXT_WARNING_1 = 49,  /* EERSTE WAARSCHUWING */
	TXT_WARNING_2 = 50,  /* LAATSTE WAARSCHUWING */
	TXT_RADAR_BONUS = 51, /* FLITS BONUS  +100 EURO */
	TXT_SPEED = 54,
	TXT_FLASH_FINE = 67, /* FLITS BOETE  -50 EURO */
	TXT_RESET = 68,      /* DRUK ENTER/RETURN VOOR RESET */
};
