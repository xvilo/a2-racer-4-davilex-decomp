/* The stage's paths (pth_main.cpp, pth_ptrf.cpp, pth_trfc.cpp; etappe<n>.pth): things
 * that move along a fixed course when the player comes by.
 *
 *   int32 version (-1), int32 count; then per path { int32 start chunk, end chunk, type,
 *   flags, time (ms to run it), n; n points { float unused, x, y, z } }
 *
 * The course is a Catmull-Rom spline through the points (0x464950: Hermite, tangents
 * half the neighbours' difference). Types (etappe<n>.ini [pathtypes]): 3 boat (e00_rond),
 * 4 train (C_TREIN, sound TRAIN), 5 helicopter (C_HELI, rotor C_LBLADE), 6 random
 * traffic, 7 plane (a_VLIEGT, sound PLANE), 13-18 police cars pulling out (PCOP: the
 * Dutch PATH_POLITIE car, GPCOP: the German PATH_POLIZEI; DEADEND they drive off and are
 * gone, STOPEND they stop across the road at the end, WAYPOINT they go after the player). */
#pragma once

#include <string>
#include <vector>

struct PathPoint {
	float x, y, z;
};

struct Path {
	int start = 0, end = 0, type = 0, flags = 0;
	float time = 1; /* s */
	std::vector<PathPoint> points;

	enum { BOAT = 3, TRAIN = 4, HELICOPTER = 5, RANDOM_TRAFFIC = 6, PLANE = 7, PCOP_DEADEND = 13,
		PCOP_STOPEND = 14, PCOP_WAYPOINT = 15, GPCOP_DEADEND = 16, GPCOP_STOPEND = 17, GPCOP_WAYPOINT = 18 };
	bool police() const { return type >= PCOP_DEADEND && type <= GPCOP_WAYPOINT; }
	/* Where along it at f (0..1), and the heading there (radians, like a car's yaw). */
	void at(float f, float out[3], float &yaw) const;
};

/* Reads etappe<n>.pth; empty if there is none. */
std::vector<Path> load_paths(const std::string &dir, const std::string &stage_file);
