/* The communicator (Ovl_Communicator.cpp, communi.ini): the panel at the bottom left where
 * the characters talk, each message with its portrait, title, up to four lines of text
 * and a voice.
 *
 *   [GENERAL]     initwaittime: seconds before the first message; chars_per_line
 *   [SAMPLES]     n = the voices' samples (<name>.wav)
 *   [CATEGORIES]  n = the events the game posts ("~knock_out" posts a random message of
 *                 that category)
 *   [SYSTEM]      n = name, sample, event: copalert (event 1: the red lamp), goleft,
 *                 goright, gofork, gozigzag (events 2-5: the direction arrows), newmessage
 *                 (event 6: the beep before a message)
 *   [PLAYERS]     the characters; each has a section [<NAME>]: priority, title,
 *                 ovl_photo (the portrait element), and n = id, [categories], priority
 *                 (0 highest; 100 and over: a tip, cut short by anything else), sample,
 *                 event, show time (s), life time (s: how long it may wait), text ('@' is
 *                 a comma, '#' a new line)
 *
 * Up to ten messages wait, the most important first; a message posted again only gets
 * its life time renewed. */
#pragma once

#include <string>
#include <vector>

class RaceSound;

class Communicator {
public:
	bool load(const std::string &dir);
	/* "~category" or a message's id; owner: the racer it is about (its car's damage shows
	 * on the panel), or -1. now: the race clock, s. */
	void post(const std::string &name, int owner, float now);
	void update(float now, float dt, RaceSound &sound);

	/* What the panel shows. */
	bool showing() const { return current >= 0; }
	float slide = 1; /* 0 on screen .. 1 moved away */
	std::string photo, title;
	std::vector<std::string> lines;
	int owner = -1;
	/* The red lamp's blinking (cop alert, 0..100) and its state now. */
	int alert = 0;
	bool alert_lit = false;
	/* A direction arrow (2 left, 3 right, 4 both, 5 zigzag; 0 none) and until when. */
	int arrow = 0;
	float arrow_until = 0;

private:
	struct Message {
		std::string id;
		int who = 0;
		std::vector<int> categories;
		int priority = 0, sample = -1, event = 0;
		float show = 10, life = 10;
		std::string text;
	};
	struct Character {
		std::string name, title, photo;
		int priority = 4;
	};
	struct Waiting {
		int msg;
		float until;
		int owner;
	};
	std::vector<std::string> samples, categories;
	struct System {
		std::string name;
		int sample = -1, event = 0;
	};
	std::vector<System> systems;
	std::vector<Character> chars;
	std::vector<Message> messages;
	std::vector<Waiting> queue;
	float init_wait = 5;
	int per_line = 20;
	int current = -1;
	float current_until = 0;
	bool voiced = false;
	float alert_tick = 0, alert_blink = 0;
	int alert_voice = 0;
	unsigned rnd = 4321;

	void enqueue(int msg, float now, int owner);
	void event(int ev, float now, RaceSound &sound);
	void system(const std::string &name, float now, RaceSound &sound);
	std::vector<std::string> wrap(const std::string &text) const;
	std::vector<std::pair<std::string, float>> pending_system;
};
