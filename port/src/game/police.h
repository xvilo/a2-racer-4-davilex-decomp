/* How the police go about it (ai_cops.cpp, Car_cops.cpp, ev_cops.cpp):
 *
 *   cops.ini    [Cop Types] the kinds (COP2, COP3, SUPERCOP: CAR_CFG.INI [traffic] names);
 *               [Cop Tactics] n = action, seconds, action, seconds, ...: BESIDE (alongside
 *               the target), INTO (ramming it), FRONT (getting ahead and staying there),
 *               MEGAPHONE (alongside, calling out), HANDBRAKE (ahead, braking hard across
 *               its way); [Track <n> Tactics] Default/Cop2/Cop3/Supercop = the tactics
 *               each kind may pick there
 *   intel.ini   [GENERAL] StopSpeed (km/h: a target this slow with a cop beside is
 *               caught), ChaseTimeEasy/Hard (s), GiveUpDist (chunks behind),
 *               CopsPerPlayerEasy/Hard, CopsPerRacer
 *
 * The player is let off with a warning twice ("EERSTE", "LAATSTE WAARSCHUWING"), and
 * arrested the third time; a computer racer at once. */
#pragma once

#include <map>
#include <string>
#include <vector>

enum class CopAction { BESIDE, INTO, FRONT, MEGAPHONE, HANDBRAKE };

struct CopTactic {
	std::vector<std::pair<CopAction, float>> steps;
};

struct PoliceRules {
	std::vector<CopTactic> tactics;
	std::map<std::string, std::vector<int>> track_tactics; /* kind (lower case) -> tactics */
	float stop_speed = 7, chase_time = 120;
	int give_up_chunks = 20, cops_per_player = 4, cops_per_racer = 1;

	void load(const std::string &dir, int stage, int difficulty);
	/* The tactics a kind of cop (its CAR_CFG.INI name) may use on this stage. */
	const std::vector<int> &for_kind(const std::string &kind) const;
};

/* A chasing cop's place in its tactic. */
struct CopPlan {
	int tactic = -1;
	size_t step = 0;
	float left = 0;
	int side = 1; /* which side of the target it goes, -1 left, 1 right */
	bool step_started = false;

	/* Picks a tactic at random from the list. */
	void begin(const PoliceRules &rules, const std::vector<int> &choice, unsigned &rnd);
	/* The action now; moves on as the steps run out (a new tactic after the last). */
	CopAction action(const PoliceRules &rules, const std::vector<int> &choice, float dt, unsigned &rnd);
};
