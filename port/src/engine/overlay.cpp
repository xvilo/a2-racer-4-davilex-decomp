#include "engine/overlay.h"

#include <algorithm>
#include <cstdlib>

#include "engine/mesh.h"
#include "engine/render.h"
#include "engine/texture.h"
#include "game/track.h"
#include "platform/gl.h"
#include "res/archive.h"
#include "xvga/inifile.h"

static std::vector<float> numbers(const std::string &s)
{
	std::vector<float> out;
	for (const std::string &f : split_fields(s))
		out.push_back((float)atof(f.c_str()));
	return out;
}

bool Overlay::load(const std::string &dir, int car, const Track &track, MeshCache &meshes, TextureManager &textures)
{
	IniFile ini;
	std::string path = find_file_ci(dir, "overlay" + std::to_string(std::clamp(car, 0, 7)) + ".ini");
	if (path.empty())
		path = find_file_ci(dir, "overlay0.ini");
	if (path.empty() || !ini.load(path))
		return false;
	/* The composites' offsets. */
	std::map<std::string, std::pair<float, float>> offset;
	for (const std::string &k : ini.keys("COMPOSITES")) {
		std::string name = ini.get("COMPOSITES", k);
		std::vector<float> p = numbers(ini.get(name, "Position", "0,0"));
		offset[name] = { p.size() > 0 ? p[0] : 0, p.size() > 1 ? p[1] : 0 };
	}
	auto origin = [&](const std::string &sec, float &x, float &y) {
		std::vector<float> p = numbers(ini.get(sec, "Position", "0,0"));
		x = p.size() > 0 ? p[0] : 0;
		y = p.size() > 1 ? p[1] : 0;
		auto o = offset.find(ini.get(sec, "Parent"));
		if (o != offset.end()) {
			x += o->second.first;
			y += o->second.second;
		}
	};
	for (const std::string &k : ini.keys("ELEMENTS")) {
		std::string name = ini.get("ELEMENTS", k);
		Element e;
		origin(name, e.x, e.y);
		if (ini.has(name, "RGBA")) {
			std::vector<float> c = numbers(ini.get(name, "RGBA"));
			for (size_t i = 0; i < 4 && i < c.size(); i++)
				e.rgba[i] = c[i] / 255;
			e.tinted = true;
		}
		if (const std::vector<AnimFrame> *f = track.animation(ini.get(name, "Anim"))) {
			if (!f->empty()) {
				e.mesh = meshes.get((*f)[0].mesh);
				e.tex = textures.get((*f)[0].texture);
			}
			for (const AnimFrame &af : *f)
				e.frames.push_back({ meshes.get(af.mesh), textures.get(af.texture) });
		}
		elements[name] = e;
	}
	for (const std::string &k : ini.keys("STRINGS")) {
		std::string name = ini.get("STRINGS", k);
		Text t;
		origin(name, t.x, t.y);
		std::vector<float> sc = numbers(ini.get(name, "Scale", "1"));
		t.scale = sc.empty() || sc[0] <= 0 ? 1 : sc[0];
		std::vector<float> c = numbers(ini.get(name, "RGBA", "255,255,255,255"));
		for (size_t i = 0; i < 4 && i < c.size(); i++)
			t.rgba[i] = c[i] / 255;
		t.centre = equal_ci(ini.get(name, "Alignment"), "center");
		t.fixed = equal_ci(ini.get(name, "Type"), "FIXED");
		t.text = ini.get(name, "Text");
		strings[name] = t;
	}
	/* FONT1: characters, words and (in FONT1_ASCII) codes. */
	static const std::map<std::string, int> words = { { "SPACE", ' ' }, { "MINUS", '-' }, { "SLASH", '/' },
		{ "DIV", ':' } };
	auto glyph = [&](int code, const std::string &value) {
		std::vector<std::string> f = split_fields(value);
		if (f.size() < 5)
			return;
		Glyph g;
		g.tex = textures.get(f[0]);
		int x = atoi(f[1].c_str()), y = atoi(f[2].c_str());
		g.w = atoi(f[3].c_str());
		g.h = atoi(f[4].c_str());
		/* The overlay textures are 256x256. */
		g.u0 = x / 256.0f;
		g.v0 = y / 256.0f;
		g.u1 = (x + g.w) / 256.0f;
		g.v1 = (y + g.h) / 256.0f;
		glyphs[code] = g;
	};
	for (const std::string &k : ini.keys("FONT1")) {
		auto w = words.find(k);
		if (w != words.end())
			glyph(w->second, ini.get("FONT1", k));
		else if (k.size() == 1)
			glyph((unsigned char)k[0], ini.get("FONT1", k));
	}
	for (const std::string &k : ini.keys("FONT1_ASCII"))
		glyph(atoi(k.c_str()), ini.get("FONT1_ASCII", k));
	for (char c = '0'; c <= '9'; c++) {
		auto g = glyphs.find(c);
		if (g != glyphs.end())
			digit_width = std::max(digit_width, g->second.w);
	}
	return !glyphs.empty();
}

void Overlay::begin() const
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, 640, 480, 0, -100, 100);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glDisable(GL_DEPTH_TEST);
	glDisable(GL_FOG);
}

bool Overlay::origin(const std::string &name, float &x, float &y) const
{
	if (auto e = elements.find(name); e != elements.end()) {
		x = e->second.x, y = e->second.y;
		return true;
	}
	if (auto t = strings.find(name); t != strings.end()) {
		x = t->second.x, y = t->second.y;
		return true;
	}
	return false;
}

void Overlay::element(Renderer &r, const std::string &name, float angle, float zoom, float stretch, size_t frame) const
{
	auto it = elements.find(name);
	if (it == elements.end() || !it->second.mesh)
		return;
	const Element &e = it->second;
	const Mesh *mesh = e.mesh;
	unsigned tex = e.tex;
	if (frame > 0 && frame < e.frames.size() && e.frames[frame].first)
		mesh = e.frames[frame].first, tex = e.frames[frame].second;
	glPushMatrix();
	glTranslatef(e.x, e.y, 0);
	/* The models' y axis points up the screen. */
	glScalef(zoom * stretch, -zoom, zoom);
	if (angle != 0)
		gl_rotate(-angle, 0, 0, 1);
	/* The direction arrows and the turn-around sign are signs modelled lying down (x, z):
	 * stood up, z runs down the screen. */
	if (name.compare(0, 14, "OVL_DIRECTION_") == 0 || name == "OVL_TURNAROUND_FRAME")
		gl_rotate(90, 1, 0, 0);
	glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
	/* The dashboard is see-through (its vertices' alpha), the glass over it more so; the
	 * lamps' glows are alpha maps (black where clear), added on. */
	glEnable(GL_BLEND);
	if (name.size() > 5 && name.compare(name.size() - 5, 5, "_GLOW") == 0)
		glBlendFunc(GL_ONE, GL_ONE);
	else
		glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	r.draw_mesh(*mesh, tex, e.tinted ? e.rgba : nullptr);
	glDisable(GL_BLEND);
	glPopMatrix();
}

void Overlay::text(float x, float y, const std::string &s, float scale, const float rgba[4], bool centre,
	bool fixed) const
{
	auto advance = [&](unsigned char c) {
		auto g = glyphs.find(c);
		int w = g == glyphs.end() ? digit_width / 2 : g->second.w;
		if (fixed && c >= '0' && c <= '9')
			w = digit_width;
		return (w + 1) * scale;
	};
	if (centre) {
		float w = 0;
		for (unsigned char c : s)
			w += advance(c);
		x -= w / 2;
	}
	glEnable(GL_TEXTURE_2D);
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.5f);
	glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
	glColor4f(rgba[0], rgba[1], rgba[2], rgba[3]);
	for (unsigned char c : s) {
		auto it = glyphs.find(c);
		if (it == glyphs.end()) {
			it = glyphs.find(toupper(c));
		}
		if (it != glyphs.end() && it->second.tex) {
			const Glyph &g = it->second;
			float ox = fixed && c >= '0' && c <= '9' ? (digit_width - g.w) * scale / 2 : 0;
			glBindTexture(GL_TEXTURE_2D, g.tex);
			glBegin(GL_QUADS);
			glTexCoord2f(g.u0, g.v0);
			glVertex2f(x + ox, y);
			glTexCoord2f(g.u1, g.v0);
			glVertex2f(x + ox + g.w * scale, y);
			glTexCoord2f(g.u1, g.v1);
			glVertex2f(x + ox + g.w * scale, y + g.h * scale);
			glTexCoord2f(g.u0, g.v1);
			glVertex2f(x + ox, y + g.h * scale);
			glEnd();
		}
		x += advance(c);
	}
	glDisable(GL_ALPHA_TEST);
	glColor4f(1, 1, 1, 1);
}

void Overlay::string(const std::string &name, const std::string &s) const
{
	auto it = strings.find(name);
	if (it == strings.end())
		return;
	const Text &t = it->second;
	text(t.x, t.y, s.empty() ? t.text : s, t.scale, t.rgba, t.centre, t.fixed);
}
