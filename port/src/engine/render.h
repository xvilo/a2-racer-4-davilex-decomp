/* Drawing the race with OpenGL 1.x: the road's chunks, models with their textures, and
 * the camera. The game's world is left-handed (Direct3D: x right, y up, z forward); the
 * camera mirrors it in z for OpenGL, so everything else works in the game's coordinates. */
#pragma once

#include "engine/mesh.h"
#include "engine/road.h"

class TextureManager;

struct Renderer {
	TextureManager &textures;
	float eye[3] = {}; /* the camera, game coordinates */

	/* Binds a texture (0: none), with alpha testing for colour-keyed ones. */
	void bind(unsigned tex);
	/* tint: a colour for the whole model in place of its vertex colours. */
	void draw_mesh(const Mesh &m, unsigned tex, const float *tint = nullptr);
	/* A chunk's four lists with the stage's road, grass, second grass and rail textures. */
	void draw_chunk(const RoadChunk &c, const unsigned tex[4]);
};

void gl_perspective(float fov_y, float aspect, float znear, float zfar);
/* The view from eye towards target (game coordinates). */
void gl_look_at(const float eye[3], const float target[3]);
void gl_rotate(float deg, float x, float y, float z);
/* Multiplies the model view by a placement: the model's x, y, z axes become right, up and
 * forward, its origin pos (all in game coordinates). */
void gl_mult_world(const float right[3], const float up[3], const float forward[3], const float pos[3]);
