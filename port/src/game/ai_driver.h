/* A computer driver (ai_racer.cpp, ai_path.cpp in the original): follows the lanes of the
 * stage's drive map, looking ahead as far as its speed carries it, braking for the bends
 * it sees coming, and backing out when it is stuck. Its skill (opponent.ini: NOVICE,
 * NORMAL, SKILLED) sets how close to its car's top speed it drives. */
#pragma once

#include "game/car.h"

struct Track;
class CollisionWorld;

struct AiDriver {
	float skill = 0.9f;   /* fraction of the top speed it aims for */
	int node = -1;        /* the drive map node it is heading for */
	float stuck = 0, reverse = 0;

	/* What to do this frame. */
	CarInput drive(const Track &track, const Car &car, float dt);
	/* Picks the lane node nearest to the car that runs its way. */
	void find_lane(const Track &track, const Car &car);
};

/* opponent.ini skill words to a speed fraction. */
float skill_factor(const char *word);
