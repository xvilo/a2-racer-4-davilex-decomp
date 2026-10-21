/* What the cars drive on and bump into, built from the road. The original hands the road's
 * polygons to the Ipion physics library (Rd_chunk.cpp: one physical object per chunk,
 * "ChunkMaterial"); the port keeps its own simple version: the road's level triangles (up
 * to ~40 degrees) are the ground, steeper ones (guard rails, kerbs, walls, embankments,
 * bridge sides) are walls. */
#pragma once

#include <vector>

#include "engine/road.h"

struct GroundHit {
	float y = 0;
	float normal[3] = { 0, 1, 0 };
	int list = 0; /* the road list the triangle came from: 0 road, 1 grass, 2 second grass */
};

class CollisionWorld {
public:
	void build(const Road &road);
	/* The chunk nearest to (x, z), searching outwards from hint along the ring. */
	int nearest_chunk(float x, float z, int hint) const;
	/* The highest ground at (x, z) no higher than y_max, in the chunks around chunk; false if
	 * there is none (off the edge of the world). */
	bool ground(float x, float z, float y_max, int chunk, GroundHit &hit) const;
	/* Pushes a circle (centre x, z; radius r; vertical extent y0..y1) out of the walls around
	 * chunk. Returns whether it touched one; n receives the summed push direction (x, z). */
	bool push_out(float &x, float &z, float r, float y0, float y1, int chunk, float n[2]) const;
	int chunk_count() const { return (int)chunks.size(); }

private:
	struct Tri {
		float a[3], b[3], c[3];
		float normal[3];
		int list;
	};
	/* An upright triangle, seen from the side: its base edge in the ground plane, and its
	 * three corners as (distance along that edge, height), so the wall's height can be
	 * found at any point along it (a ramp's side is low at one end, high at the other). */
	struct Wall {
		float x0, z0, x1, z1;
		float s[3], y[3];
		float ymin, ymax;
		/* The side the face shows (horizontal unit vector): walls only block from there,
		 * like the back of a ramp's lip, which the car drives over, not into. Two-sided
		 * things (guard rails) are modelled with a face on each side. */
		float nx, nz;
		/* The wall's bottom and top at distance t (0..1) along the base edge. */
		bool extent(float t, float &bottom, float &top) const;
	};
	struct Chunk {
		float pos[3];
		std::vector<Tri> ground;
		std::vector<Wall> walls;
	};
	std::vector<Chunk> chunks;
};
