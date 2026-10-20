/* The models (.d3d in rcs), as dx3d/Mesh.cpp reads them:
 *
 *   int32 a                     a < 0: the version (-1: vertices carry a colour), and the
 *                               vertex count follows; otherwise a is the vertex count
 *                               (version 0)
 *   int32 triangle count
 *   vertices                    version -1: 49 bytes { float x, y, z, nx, ny, nz, u, v,
 *                               r, g, b, a (0..1); u8 unused }; version 0: 33 bytes (no
 *                               colour)
 *   triangles                   9 bytes { u16 a, b, c; u8 unused[3] }
 *
 * The texture is not in the file: the animation definitions pair each model with one. */
#pragma once

#include <cstdint>
#include <string>
#include <vector>

struct MeshVertex {
	float x, y, z;
	float nx, ny, nz;
	float u, v;
	uint32_t colour; /* RGBA bytes in memory; white for version 0 */
};

struct Mesh {
	std::vector<MeshVertex> vertices;
	std::vector<uint16_t> indices; /* three per triangle */
	float min[3] = {}, max[3] = {}; /* bounding box */

	/* Reads a .d3d file's bytes; false if they don't hold a model. */
	bool load(const std::vector<uint8_t> &data);
};
