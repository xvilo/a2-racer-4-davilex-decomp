#include "game/race_rules.h"

#include <algorithm>

void RaceRules::begin(int chunk_count, int start_chunk, int finish_chunk, int lap_count, int car_chunk)
{
	chunks = std::max(chunk_count, 1);
	start = start_chunk;
	finish = finish_chunk < 0 ? start_chunk : finish_chunk;
	circuit = finish == start;
	laps = circuit ? std::max(lap_count, 1) : 1;
	last_chunk = car_chunk;
	int d = ((car_chunk - start) % chunks + chunks) % chunks;
	progress = (float)(d > chunks / 2 ? d - chunks : d);
	phase = COUNTDOWN;
	countdown = 3;
	time = 0;
	lap = 1;
	lap_start = 0;
	lap_times.clear();
	finished_at = 0;
}

void RaceRules::update(float dt, int car_chunk)
{
	/* Chunks moved since last time, the short way round the ring. */
	int d = ((car_chunk - last_chunk) % chunks + chunks) % chunks;
	if (d > chunks / 2)
		d -= chunks;
	last_chunk = car_chunk;
	progress += (float)d;
	switch (phase) {
	case COUNTDOWN:
		countdown -= dt;
		if (countdown <= 0) {
			phase = RACING;
			countdown = 0;
		}
		break;
	case RACING:
		time += dt;
		/* A lap ends on crossing the start line again. */
		while (circuit && progress >= (float)(lap * chunks) && phase == RACING) {
			lap_times.push_back(time - lap_start);
			lap_start = time;
			if (lap >= laps)
				phase = FINISHED;
			else
				lap++;
		}
		if (!circuit && progress >= (float)distance()) {
			lap_times.push_back(time);
			phase = FINISHED;
		}
		break;
	case FINISHED:
		finished_at += dt;
		break;
	}
}
