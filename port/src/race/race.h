/* The race (spel.dat): a stage, the player's car and the field, traffic and police. */
#pragma once

#include <string>
#include <vector>

class NamedArchive;

struct RaceOptions {
	int stage = 0;
	int league = 0;
	int car = 0;     /* entry in CAR_CFG.INI [league<n>] */
	int motor = 0, gearbox = 0, tyres = 0, abs = 0; /* the garage's upgrades (0 or 1) */
	int difficulty = -1; /* 0 easy, 1 normal, 2 hard; -1: game.ini [OPTIONS] Difficulty */
	int laps = 0;         /* 0: game.ini [OPTIONS] Nrlaps */
	float time_limit = 0;
	/* The player's settings (the menu writes them to game.ini and Raser.ini in the
	 * original): keys up, down, left, right as virtual-key codes (0: game.ini's), and
	 * the music and effects volumes 0..1 (negative: Raser.ini's). */
	int keys[5] = {}; /* ... and the turbo (EXTRA1) */
	float music_volume = -1, sfx_volume = -1;
	/* game.ini [PLAYER] MONEY and TURBO_AMOUNT (0..100): what the player brings. */
	int money = 0;
	float turbo = 0; /* seconds; a chase must be finished in time (0: none) */
	/* Testing: drive by itself along the drive map (also with A2_AUTOPILOT=1). */
	bool autopilot = false;
};

/* How the race went, for the menu: the field in finishing order. Racers still on the road
 * when the player finished get a time from their pace so far. */
struct RaceResult {
	bool finished = false, arrested = false, time_up = false, total_loss = false, quit = false;
	struct Entry {
		int car = 0;      /* CAR_CFG.INI racer, also the character's number */
		float time = 0;   /* seconds */
		bool player = false;
	};
	std::vector<Entry> order;
	std::vector<float> lap_times;
	int position = 0;     /* the player's, 1.. */
	int money = 0;        /* after pick-ups and fines */
	float turbo = 0;      /* what is left in the tank */
};

int race_main(const std::string &data_dir, const NamedArchive &rcs, const RaceOptions &opt, RaceResult *result = nullptr);
