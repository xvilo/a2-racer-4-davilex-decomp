/* A computer driver (ai_racer.cpp, ai_path.cpp in the original): follows the lanes of the
 * stage's drive map, looking ahead as far as its speed carries it, braking for the bends
 * it sees coming, steering round obstacles, and backing out when it is stuck. Its skill (opponent.ini: NOVICE,
 * NORMAL, SKILLED) sets how close to its car's top speed it drives. */
#pragma once

#include <vector>

#include "game/car.h"
#include "game/police.h"

struct Track;
class CollisionWorld;

/* Something solid by or on the road (ai_ShortTermVision.cpp, AI_OAInfo.cpp in the
 * original): a box seen from above, centre x, z, turned by yaw (radians, like a car's),
 * half extents across (hx) and along (hz) it. */
struct AiObstacle {
	float x, z, yaw, hx, hz;
};

struct AiDriver {
	float skill = 0.9f;   /* fraction of the top speed it aims for */
	int node = -1;        /* the drive map node it is heading for */
	float stuck = 0, reverse = 0;
	float patrol_speed = 30; /* km/h, a chasing cop's when far ahead of its target */
	/* For a racer: which drive map nodes' lanes run the race's way. Lost, it takes one of
	 * those (and turns round to it), not whatever lane it happens to face. */
	const std::vector<char> *race_lanes = nullptr;
	/* What it steers round: whatever stands in its way to the point it aims at. */
	const std::vector<AiObstacle> *obstacles = nullptr;

	/* What to do this frame. */
	CarInput drive(const Track &track, const Car &car, float dt);
	/* A police car after its target, doing its tactic's step (police.h): far off it
	 * follows the lanes flat out; near, it rams the target, keeps level with it on one
	 * side, or gets ahead of it and maybe brakes across its way. */
	CarInput chase(const Track &track, const Car &car, const Car &target, float dt,
		CopAction action = CopAction::INTO, int side = 1);
	/* Picks the lane node nearest to the car that runs its way. */
	void find_lane(const Track &track, const Car &car);
	/* Moves the point aimed at past the nearest obstacle in the way; false if none is.
	 * close: it is near. */
	bool avoid(const Car &car, float aim[2], bool &close) const;
};

/* opponent.ini skill words to a speed fraction. */
float skill_factor(const char *word);
