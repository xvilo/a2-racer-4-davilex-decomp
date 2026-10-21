/* The stage's loose objects (tob_main.cpp): the original makes them Ipion bodies
 * (FUN_004a79d0: mass, friction, elasticity) that the cars knock about. The port gives each
 * a circle on the ground that slides, spins, bounces and tips over.
 *
 *   type  2 pilon               10 kg, friction 1.0, elasticity 0.6, sound PION_HIT_CAR
 *        10 police blockade   2000 kg, 1.4, 0.2
 *        18 lamp post         2000 kg, 0.9, 0, hinged at its foot: it only falls over
 *        19 rubbish bin       2000 kg, 0.9, 0.2
 *        20 mailbox            500 kg, 0.9, 0.2
 *        21 light obstacle     400 kg, 0.9, 0.2
 *        22 paper               10 kg, 0.9, 0.2, sound PION_HIT_CAR
 *        29 scripted          bonus.dso OnInit_<animation>: InitPhysics(mass, friction,
 *                             elasticity, unmovable); without it, no physics
 */
#pragma once

#include <map>
#include <string>
#include <vector>

class CollisionWorld;
class MeshCache;
class TextureManager;
struct Car;
struct Mesh;
struct Renderer;
struct Track;
struct TrackObject;

struct LooseObject {
	const TrackObject *obj = nullptr;
	const Mesh *mesh = nullptr;
	unsigned tex = 0;
	float mass = 100, friction = 1, elasticity = 0.2f;
	bool hinged = false;
	const char *sound = nullptr;
	float radius = 5, height = 0; /* game units */
	float pos[3] = {};
	float vel[3] = {};       /* m/s */
	float yaw = 0, spin = 0; /* degrees, degrees/s, on top of its own rotation */
	float tilt = 0, tilt_rate = 0, tilt_axis[2] = { 1, 0 }; /* degrees about a level axis */
	bool moving = false;
	bool burst = false; /* its particles came out since it was last at rest */
	int chunk = 0;
};

class LooseObjects {
public:
	std::vector<LooseObject> list;

	void build(const Track &track, MeshCache &meshes, TextureManager &textures, const std::string &data_dir);
	bool loose(const TrackObject *o) const { return index.count(o) != 0; }
	/* Pushes a car and the objects it touches apart, sharing out the speed they met at. The
	 * hardest knock's speed (m/s, 0 if none) and object. */
	float hit(Car &car, LooseObject *&which);
	void update(float dt, const CollisionWorld &world);
	/* The ones within `range` chunks of chunk (of n). */
	void draw(Renderer &r, int chunk, int n, int range) const;

private:
	std::map<const TrackObject *, size_t> index;
};
