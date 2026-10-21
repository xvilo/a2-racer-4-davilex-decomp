/* The race's effects (Par_Main.cpp, gfx_wolk.cpp, gfx_bwlk.cpp, gfx_skid.cpp): sparks
 * and flying bits from knocks, smoke from a wrecked car and from sliding tyres, and the
 * tyres' skid marks. Positions are game units (decimetres), speeds game units/s. Each
 * can be turned off as game.ini [GFX OPTIONS] particles, clouds, skidmarks say. */
#pragma once

#include <cstddef>
#include <map>
#include <vector>

struct Mesh;
struct Renderer;

class Effects {
public:
	bool particles = true, clouds = true, skidmarks = true, fade_skidmarks = true;
	unsigned sfx_tex = 0;     /* s_sfx.pcx: sparks, tyre smoke, skid marks, bits */
	unsigned smoke_tex = 0;   /* L1RACER3.PCX: a wrecked car's smoke */
	std::vector<const Mesh *> bits; /* Par_Damage: P_DMG0..7 */
	/* The scenery's bursts, by the track object's type: 19 rubbish (par_trash), 20 mail
	 * (par_mail), 22 paper (par_paper), 23 pigeons (par_bird), 24 leaves (par_leaf), 26
	 * water drops (par_waterdrops), 27 clods of mud (par_dirtpieces). */
	std::map<int, std::vector<const Mesh *>> scenery_meshes;
	std::map<int, unsigned> scenery_tex;

	/* Type 1: five pairs of sparks at p, thrown out to the sides. */
	void sparks(const float p[3]);
	/* Type 7: pieces of car from a knock of the given impulse, flying out along dir
	 * (a horizontal heading, radians), bouncing on the ground at ground_y. */
	void car_bits(const float p[3], float dir, float impulse, float ground_y);
	/* A puff of smoke: a wrecked car's (gfx_bwlk) or a sliding tyre's (gfx_wolk); vel is
	 * the car's, m/s. */
	void smoke(const float p[3], const float vel[3], bool damage);
	/* A wheel's skid mark: extended while level (0..10) is over 3, started anew after it
	 * was below 4. id picks the mark (two per car). */
	void skid(int id, const float p[3], const float across[3], int level, float time);

	/* A car through a scenery object of that type at p, on the ground at ground_y; vel the
	 * car's (m/s). */
	void scenery(int type, const float p[3], const float vel[3], float ground_y);

	void update(float dt, float time);
	/* cam_right / cam_up: the view's axes, for the smoke facing the camera. */
	void draw(Renderer &r, const float cam_right[3], const float cam_up[3], float time) const;

private:
	struct Spark {
		float p[3], v[3], age, life;
	};
	struct Bit {
		float p[3], v[3], rot[3], spin, age, life, ground;
		const Mesh *mesh;
	};
	struct Thing {
		float p[3], v[3], rot[3], spin[3], age, life, ground, gravity, bounce;
		bool rests, flaps;
		int type;
		size_t mesh;
	};
	std::vector<Thing> things;
	struct Puff {
		float p[3], v[3], age, life, size, grow;
		bool damage;
	};
	struct Mark {
		int id = -1;
		bool open = false;
		float born = 0;
		int alpha = 200;
		std::vector<float> left, right; /* x, y, z each */
	};
	std::vector<Spark> spark_list;
	std::vector<Bit> bit_list;
	std::vector<Puff> puffs;
	std::vector<Mark> marks;
	unsigned rnd = 12345;
	float random(float lo, float hi);
};
