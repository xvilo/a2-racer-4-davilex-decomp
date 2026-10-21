/* The menu's films: the intro (Data/intro1.mpg, MPEG-1 with MP2 sound; the original
 * plays it with Windows' media player, TfrmIntro) and the winners' films after the Tour
 * (MenuData/CH<nn>.avi, Cinepak without sound; TfrmWinFinal's medWinner). */
#pragma once

#include <cstdint>
#include <memory>
#include <string>
#include <vector>

struct Image;
struct Canvas;

/* An AVI file of Cinepak frames, decoded one after another. */
class CinepakFilm {
public:
	bool open(const std::string &path);
	int width() const { return w; }
	int height() const { return h; }
	float fps() const { return rate; }
	size_t frames() const { return chunks.size(); }
	/* Decodes frames up to and including n (they build on each other) into the picture. */
	void seek(size_t n, Image &out);

private:
	struct Codebook {
		uint8_t y[4];
		int8_t u, v;
	};
	struct Strip {
		Codebook v4[256], v1[256];
	};
	std::vector<uint8_t> data;
	std::vector<std::pair<size_t, size_t>> chunks; /* offset, size of each frame */
	std::vector<Strip> strips;
	std::vector<uint32_t> picture;
	int w = 0, h = 0;
	float rate = 15;
	size_t next = 0;

	void decode(const uint8_t *p, size_t size);
	void strip(Strip &s, const uint8_t *p, const uint8_t *end, int y1, int y2);
	void put(int x, int y, const Codebook &c, int k);
};

/* Plays an MPEG-1 film over the whole screen, with its sound, until it ends or a key or
 * click skips it. False if it can't be played. */
bool play_mpeg(const std::string &path, Canvas &cv);
