/* Miss Honeybunny (MenuData/Hunny.acs): the original shows her with Microsoft Agent
 * (DaviAgent.pas: Show plays Showing, Hide plays Hiding, the Agent server idles her in
 * between); the port reads the character file and plays her itself.
 *
 * An ACS file: u32 0xABCDABC3, then locators (u32 offset, size) of the character, its
 * animations, images and sounds. Strings are u32 length, UTF-16 and a terminating 0.
 *   character   u16 version x2, locator of its texts, GUID, u16 width, height, u8 the
 *               transparent colour, u32 flags (0x20 voice info follows, 0x200 balloon
 *               info), u32 animation set version, the voice and balloon info, the
 *               palette (u32 count, BGRX), ...
 *   animations  u32 count; per one its name, locator: name, u8 transition, return
 *               animation, u16 frames; per frame u16 images (u32 index, i16 x, y),
 *               u16 sound, u16 duration (1/100 s), i16 exit frame, u8 branches (u16
 *               frame, u16 per cent), u8 overlays (mouths: none here)
 *   images      u32 count; per one a locator and a checksum: u8, u16 width, height,
 *               u8 compressed, u32 size and the bytes: 8-bit indices, bottom-up rows of
 *               4-byte multiples, packed with Agent's LZ77 (bits LSB first: 0 and 8 bits
 *               a byte as is; 1 and an offset of 6, 9, 12 or 20 bits, then a length) */
#pragma once

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "res/image.h"

class AgentCharacter {
public:
	struct Frame {
		std::vector<int> images; /* the first on top */
		std::vector<std::pair<int, int>> offsets;
		int duration_ms = 100;
		int exit = -1;
		std::vector<std::pair<int, int>> branches; /* frame, per cent */
	};
	struct Animation {
		std::vector<Frame> frames;
	};

	bool load(const std::string &path);
	int width = 0, height = 0;
	std::vector<std::shared_ptr<Image>> images;
	std::map<std::string, Animation> animations; /* upper-case names */
};

/* Playing her: Show and Hide, idling while she is up (the Agent server's IdlingLevel1
 * after a few seconds, the later levels the longer she waits). */
class AgentPlayer {
public:
	const AgentCharacter *character = nullptr;
	int x = 0, y = 0;

	void show(int at_x, int at_y);
	void hide();
	bool visible() const { return state != HIDDEN; }
	void update(float dt);
	/* The picture now (null when hidden), to draw at (x, y). */
	const Image *frame() const;

private:
	enum { HIDDEN, SHOWING, IDLE, HIDING } state = HIDDEN;
	const AgentCharacter::Animation *playing = nullptr;
	size_t at = 0;
	float left = 0, idle_wait = 0, shown_for = 0;
	int rest_image = -1;
	unsigned rnd = 12345;

	void play(const char *name);
	unsigned random();
};
