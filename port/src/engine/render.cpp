#include "engine/render.h"

#include <cmath>

#include "engine/texture.h"
#include "platform/gl.h"

static const float PI = 3.14159265f;

void Renderer::bind(unsigned tex)
{
	if (tex) {
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, tex);
	}
	else {
		glDisable(GL_TEXTURE_2D);
	}
	if (tex && textures.transparent(tex)) {
		glEnable(GL_ALPHA_TEST);
		glAlphaFunc(GL_GREATER, 0.5f);
	}
	else {
		glDisable(GL_ALPHA_TEST);
	}
}

void Renderer::draw_mesh(const Mesh &m, unsigned tex)
{
	if (m.indices.empty())
		return;
	bind(tex);
	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_TEXTURE_COORD_ARRAY);
	glEnableClientState(GL_COLOR_ARRAY);
	const MeshVertex *v = m.vertices.data();
	glVertexPointer(3, GL_FLOAT, sizeof(MeshVertex), &v->x);
	glTexCoordPointer(2, GL_FLOAT, sizeof(MeshVertex), &v->u);
	glColorPointer(4, GL_UNSIGNED_BYTE, sizeof(MeshVertex), &v->colour);
	glDrawElements(GL_TRIANGLES, (GLsizei)m.indices.size(), GL_UNSIGNED_SHORT, m.indices.data());
	glDisableClientState(GL_COLOR_ARRAY);
	glDisableClientState(GL_TEXTURE_COORD_ARRAY);
	glDisableClientState(GL_VERTEX_ARRAY);
}

void Renderer::draw_chunk(const RoadChunk &c, const unsigned tex[4])
{
	for (int l = 0; l < 4; l++) {
		if (c.lists[l].empty())
			continue;
		bind(tex[l]);
		glBegin(GL_TRIANGLES);
		for (const RoadQuad &q : c.lists[l]) {
			for (int t : q.tri) {
				const RoadVertex &v = q.v[t];
				const uint8_t *col = (const uint8_t *)&v.colour;
				glColor4ub(col[0], col[1], col[2], 255);
				glTexCoord2f(v.u, v.v);
				glVertex3f(v.x, v.y, v.z);
			}
		}
		glEnd();
	}
}


void gl_perspective(float fov_y, float aspect, float znear, float zfar)
{
	float f = 1.0f / tanf(fov_y / 2);
	float m[16] = { f / aspect, 0, 0, 0, 0, f, 0, 0, 0, 0, (zfar + znear) / (znear - zfar), -1, 0, 0,
		2 * zfar * znear / (znear - zfar), 0 };
	glMatrixMode(GL_PROJECTION);
	glLoadMatrixf(m);
}

/* The view from eye towards target, in the game's left-handed coordinates (y up): the
 * world is mirrored in z for OpenGL. */
void gl_look_at(const float eye[3], const float target[3])
{
	float f[3] = { target[0] - eye[0], target[1] - eye[1], -(target[2] - eye[2]) };
	float n = sqrtf(f[0] * f[0] + f[1] * f[1] + f[2] * f[2]);
	for (float &x : f)
		x /= n > 0 ? n : 1;
	float up[3] = { 0, 1, 0 };
	float s[3] = { f[1] * up[2] - f[2] * up[1], f[2] * up[0] - f[0] * up[2], f[0] * up[1] - f[1] * up[0] };
	n = sqrtf(s[0] * s[0] + s[1] * s[1] + s[2] * s[2]);
	for (float &x : s)
		x /= n > 0 ? n : 1;
	float u[3] = { s[1] * f[2] - s[2] * f[1], s[2] * f[0] - s[0] * f[2], s[0] * f[1] - s[1] * f[0] };
	float m[16] = { s[0], u[0], -f[0], 0, s[1], u[1], -f[1], 0, s[2], u[2], -f[2], 0, 0, 0, 0, 1 };
	glMatrixMode(GL_MODELVIEW);
	glLoadMatrixf(m);
	const float mirror[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 1 };
	float t[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, -eye[0], -eye[1], eye[2], 1 };
	glMultMatrixf(t);
	glMultMatrixf(mirror);
}

void gl_rotate(float deg, float x, float y, float z)
{
	float a = deg * PI / 180, c = cosf(a), s = sinf(a), t = 1 - c;
	float m[16] = { t * x * x + c, t * x * y + s * z, t * x * z - s * y, 0, t * x * y - s * z, t * y * y + c,
		t * y * z + s * x, 0, t * x * z + s * y, t * y * z - s * x, t * z * z + c, 0, 0, 0, 0, 1 };
	glMultMatrixf(m);
}

void gl_mult_world(const float right[3], const float up[3], const float forward[3], const float pos[3])
{
	const float m[16] = { right[0], right[1], right[2], 0, up[0], up[1], up[2], 0, forward[0], forward[1], forward[2], 0,
		pos[0], pos[1], pos[2], 1 };
	glMultMatrixf(m);
}
