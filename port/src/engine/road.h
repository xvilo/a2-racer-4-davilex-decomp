/* The road and its surroundings (engine Rd_main.cpp, Rd_chunk.cpp): a stage is a ring of
 * chunks, each with up to four lists of quads drawn with the stage's four textures (road,
 * grass, second grass, guard rail; Raser.ini [MAPS]).
 *
 *   etappe<n>.rmp   int32 version (-1), int32 (a size hint), int32 chunk count; then per
 *                   chunk four lists, each { int32 count; quad[count] }, a quad being 4 x
 *                   { float x, y, z, u, v; u8 r, g, b, unused } and 6 x int32 vertex indices
 *                   (its two triangles)
 *   etappe<n>.pmp   int32 chunk count; then per chunk { float x, y, z; int32 a, b; three
 *                   lists { int32 count (at most 12); int32 values[count] } }
 */
#pragma once

#include <cstdint>
#include <string>
#include <vector>

struct RoadVertex {
	float x, y, z, u, v;
	uint32_t colour; /* RGBA bytes in memory */
};

struct RoadQuad {
	RoadVertex v[4];
	int tri[6];
};

struct RoadChunk {
	float pos[3] = {};
	int a = 0, b = 0; /* trigger numbers (etappe<n>.ini [triggers]) */
	std::vector<int> links[3];
	std::vector<RoadQuad> lists[4];
};

struct Road {
	std::vector<RoadChunk> chunks;

	/* Reads etappe<n>.rmp and .pmp from the data folder; an error message, or empty. */
	std::string load(const std::string &dir, const std::string &name);
};
