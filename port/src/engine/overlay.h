/* The race's overlay (the HUD in the 3D-card modes; Overlay.cpp, Hud_IniFiller.cpp,
 * Hud_Manager.cpp), laid out by overlay<car>.ini on a 640x480 screen:
 *
 *   [COMPOSITES]  groups (Speedometer, Communicator, ...) with a Position offset
 *   [ELEMENTS]    flat models: Anim = an animation in gen_anim.ini (e.g. the speedometer
 *                 body ovl5spd1.d3d with overlay.pcx), Position = x, y of the model's
 *                 origin; the model's y axis points up the screen
 *   [STRINGS]     texts: Position, RGBA (the font's colour is multiplied by it), Scale,
 *                 Alignment (left/center), Type (FIXED: every character as wide as the
 *                 widest digit), Text (the default)
 *   [FONT1]       characters as rectangles of a texture: <name>=texture,x,y,w,h, where
 *                 <name> is the character, a word (SPACE, MINUS, SLASH, DIV) or, in
 *                 [FONT1_ASCII], a character code
 *
 * The speedometer needle turns 160 degrees for 0..200 km/h (Ovl_Dashboard.cpp). */
#pragma once

#include <map>
#include <string>
#include <vector>

class MeshCache;
struct Renderer;
class TextureManager;
struct Mesh;
struct Track;

class Overlay {
public:
	/* Reads overlay<car>.ini; the models come from the track's animations. */
	bool load(const std::string &dir, int car, const Track &track, MeshCache &meshes, TextureManager &textures);
	/* Sets up the 640x480 projection; call before drawing. */
	void begin() const;
	/* Draws an element, turned by angle degrees (clockwise) around its origin, scaled by
	 * zoom (the start digits grow in), and by stretch across (a bar filling up). */
	void element(Renderer &r, const std::string &name, float angle = 0, float zoom = 1, float stretch = 1) const;
	/* Draws a string element with the given text (empty: its default text). */
	void string(const std::string &name, const std::string &text) const;
	void text(float x, float y, const std::string &text, float scale, const float rgba[4], bool centre,
		bool fixed) const;
	bool has_element(const std::string &name) const { return elements.count(name) != 0; }
	/* Where an element (or a string) sits; false if there is none. */
	bool origin(const std::string &name, float &x, float &y) const;

private:
	struct Glyph {
		unsigned tex = 0;
		float u0, v0, u1, v1;
		int w = 0, h = 0;
	};
	struct Element {
		float x = 0, y = 0;
		const Mesh *mesh = nullptr;
		unsigned tex = 0;
		bool tinted = false;
		float rgba[4] = { 1, 1, 1, 1 };
	};
	struct Text {
		float x = 0, y = 0, scale = 1;
		float rgba[4] = { 1, 1, 1, 1 };
		bool centre = false, fixed = false;
		std::string text;
	};
	std::map<int, Glyph> glyphs;
	std::map<std::string, Element> elements;
	std::map<std::string, Text> strings;
	int digit_width = 0;
};
