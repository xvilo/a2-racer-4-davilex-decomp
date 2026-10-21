/* The race's course: the countdown, the laps (game.ini [OPTIONS] Nrlaps; a stage whose
 * finish chunk is elsewhere than its start is driven once, start to finish), the times and
 * the finish (Gm_clock.cpp, Tr_finis.cpp). Progress is counted in chunks along the road,
 * from the start line. */
#pragma once

#include <vector>

struct RaceRules {
	/* ARRESTED: stopped by the police (GEARRESTEERD), the race is over. */
	enum Phase { COUNTDOWN, RACING, FINISHED, ARRESTED, TIME_UP, TOTAL_LOSS };
	Phase phase = COUNTDOWN;
	float countdown = 3;      /* seconds until the start */
	float time = 0;           /* race time, seconds */
	int laps = 2;
	int chunks = 0;           /* chunks in the stage */
	int start = 0, finish = 0;
	bool circuit = true;
	float progress = 0;       /* chunks driven from the start line (negative before it) */
	int lap = 1;              /* the lap being driven, 1.. */
	float lap_start = 0;
	std::vector<float> lap_times;
	float finished_at = 0;    /* time since finishing */

	void begin(int chunk_count, int start_chunk, int finish_chunk, int lap_count, int car_chunk);
	/* Advances the clock and follows the car's chunk. */
	void update(float dt, int car_chunk);
	/* The race distance in chunks. */
	int distance() const { return circuit ? laps * chunks : ((finish - start) % chunks + chunks) % chunks; }

private:
	int last_chunk = 0;
};
