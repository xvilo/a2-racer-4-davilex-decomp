/* The race's effects (Par_Main.cpp, gfx_wolk.cpp, gfx_bwlk.cpp, gfx_skid.cpp): sparks
 * and flying bits from knocks, smoke from a wrecked car and from sliding tyres, and the
 * tyres' skid marks. Positions are game units (decimetres), speeds game units/s. Each
 * can be turned off as game.ini [GFX OPTIONS] particles, clouds, skidmarks say. */
#pragma once

#include <vector>

struct Mesh;
struct Renderer;

class Effects {
public:
	bool particles = true, clouds = true, skidmarks = true, fade_skidmarks = true;
	unsigned sfx_tex = 0;     /* s_sfx.pcx: sparks, tyre smoke, skid marks, bits */
	unsigned smoke_tex = 0;   /* L1RACER3.PCX: a wrecked car's smoke */
	std::vector<const Mesh *> bits; /* Par_Damage: P_DMG0..7 */

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

	/* The scenery's particles (Par_Leafs, Par_Birds, Par_Mail, Par_Trash, Par_Paper,
	 * Par_Dirtpieces; the systems of types 2-6 and 8-11): small meshes of s_sfx.pcx (the
	 * animations par_Leaf, par_Bird, par_mail, par_trash, par_paper, par_dirt,
	 * par_dirtpieces, par_water, par_waterdrops). */
	enum Scenery { LEAVES, BIRDS, MAIL, TRASH, PAPER, MUD, MUD_BITS, WATER, WATER_DROPS, SCENERY_KINDS };
	std::vector<const Mesh *> scenery_meshes[SCENERY_KINDS];
	/* A burst at p (on the ground), carried off along dir (horizontal, unit length). speed:
	 * the car's, m/s, which stretches the sprays. dt: the frame time, which makes the
	 * original's bursts smaller (none from 0.13 s); the sprays thrown each frame (MUD,
	 * MUD_BITS, WATER, WATER_DROPS) come at the rate the original had at 30 frames/s. */
	void scenery(Scenery kind, const float p[3], const float dir[3], float speed, float dt);

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
	struct Piece {
		Scenery kind;
		float p[3], v[3], carry[3], rot[3], scale[3], age, life, ground, flap;
		int frame;
		bool flap_down, settled;
	};
	std::vector<Piece> pieces;
	float owed[SCENERY_KINDS] = {}; /* the sprays' fractions of a piece */
	unsigned rnd = 12345;
	float random(float lo, float hi);
};
