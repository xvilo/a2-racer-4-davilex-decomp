/* A stage (Gm_ini.cpp load_track_info, anm_main.cpp, tob_main.cpp): its line in Raser.ini
 * [MAPS], its road, the animation definitions (each a list of frames, a model with its
 * texture) and the objects placed along the road.
 *
 *   Raser.ini [MAPS] n=  0 highway / 1 city, file name (etappe<n>), road, grass, second
 *                        grass and guard-rail textures, low/high resolution sky pictures,
 *                        the name shown in the menu, music index, timer, ambient light R,
 *                        G, B, track mode (0 normal, 1 chase)
 *   <anim>.ini           [config] n=<animation>; [<animation>] n=<model>.d3d,<texture>
 *                        (gen_anim.ini always, e<nn>_anim.ini per stage, L<n>_anim.ini per
 *                        league; Raser.ini [3D Anims])
 *   etappe<n>.omp        int32 count; then 68-byte records { int32 chunk, type; float
 *                        x, y, z; float rotation x, y, z (degrees); char animation[32];
 *                        int32 flags }
 */
#pragma once

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "engine/mesh.h"
#include "engine/road.h"

class NamedArchive;

struct StageInfo {
	bool city = false;
	std::string file, road_texture, grass_texture, grass2_texture, rail_texture;
	std::string sky_lo, sky_hi, name;
	int music = 0, timer = 10000;
	int ambient[3] = { 128, 128, 128 };
	int mode = 0; /* 0 normal, 1 chase */
};

struct AnimFrame {
	std::string mesh, texture;
};

struct TrackObject {
	int chunk = 0, type = 0;
	float pos[3] = {}, rot[3] = {};
	std::string animation;
	int flags = 0;
};

struct Track {
	StageInfo info;
	Road road;
	/* Animation name (lower case) -> frames. */
	std::map<std::string, std::vector<AnimFrame>> animations;
	std::vector<TrackObject> objects;

	/* Loads stage n (0-based, Raser.ini [MAPS]) from the data folder; an error message, or
	 * empty. league is 0..2. */
	std::string load(const std::string &dir, int stage, int league);
	/* The frames of an animation; null if it isn't defined. */
	const std::vector<AnimFrame> *animation(const std::string &name) const;
};

/* Meshes from rcs, loaded once. */
class MeshCache {
public:
	explicit MeshCache(const NamedArchive &rcs) : rcs(rcs) {}
	/* Null if the archive has no such model. */
	const Mesh *get(const std::string &name);

private:
	const NamedArchive &rcs;
	std::map<std::string, std::unique_ptr<Mesh>> meshes;
};
