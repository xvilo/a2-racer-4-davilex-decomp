/* The race (spel.dat). For now: the player's car on a stage, with the chase camera. */
#pragma once

#include <string>

class NamedArchive;

struct RaceOptions {
	int stage = 0;
	int league = 0;
	int car = 0;     /* entry in CAR_CFG.INI [league<n>] */
	int motor = 0, gearbox = 0;
	/* Testing: drive by itself (throttle, steering along the road). */
	bool autopilot = false;
};

int race_main(const std::string &data_dir, const NamedArchive &rcs, const RaceOptions &opt);
