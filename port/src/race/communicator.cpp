#include "race/communicator.h"

#include <algorithm>
#include <cctype>
#include <cstdlib>

#include "audio/race_sound.h"
#include "res/archive.h"
#include "xvga/inifile.h"

static std::string trim(const std::string &s)
{
	size_t a = s.find_first_not_of(" \t"), b = s.find_last_not_of(" \t");
	return a == std::string::npos ? "" : s.substr(a, b - a + 1);
}

static std::string upper(std::string s)
{
	for (char &c : s)
		c = (char)toupper((unsigned char)c);
	return s;
}

bool Communicator::load(const std::string &dir)
{
	IniFile ini;
	std::string path = find_file_ci(dir, "communi.ini");
	if (path.empty() || !ini.load(path))
		return false;
	init_wait = (float)ini.get_int("GENERAL", "initwaittime", 5);
	per_line = std::max(8, ini.get_int("GENERAL", "chars_per_line", 20));
	for (int i = 0; ini.has("SAMPLES", std::to_string(i)); i++)
		samples.push_back(ini.get("SAMPLES", std::to_string(i)));
	for (int i = 0; ini.has("CATEGORIES", std::to_string(i)); i++)
		categories.push_back(upper(ini.get("CATEGORIES", std::to_string(i))));
	for (int i = 0; ini.has("SYSTEM", std::to_string(i)); i++) {
		std::vector<std::string> f = split_fields(ini.get("SYSTEM", std::to_string(i)));
		if (f.size() >= 3)
			systems.push_back({ upper(f[0]), atoi(f[1].c_str()), atoi(f[2].c_str()) });
	}
	for (int i = 0; ini.has("PLAYERS", std::to_string(i)); i++) {
		std::vector<std::string> f = split_fields(ini.get("PLAYERS", std::to_string(i)));
		if (f.empty())
			continue;
		Character c;
		c.name = upper(f[0]);
		c.title = ini.get(c.name, "title");
		c.photo = ini.get(c.name, "ovl_photo");
		c.priority = ini.get_int(c.name, "priority", 4);
		int who = (int)chars.size();
		chars.push_back(c);
		for (int k = 0; ini.has(c.name, std::to_string(k)); k++) {
			std::string line = ini.get(c.name, std::to_string(k));
			/* id, [a,b], priority, sample, event, show, life, text: the text may hold
			 * anything after the seventh comma outside the brackets. */
			size_t lb = line.find('['), rb = line.find(']');
			if (lb == std::string::npos || rb == std::string::npos || rb < lb)
				continue;
			Message m;
			m.who = who;
			m.id = upper(trim(line.substr(0, line.find(','))));
			for (const std::string &cat : split_fields(line.substr(lb + 1, rb - lb - 1)))
				if (!cat.empty())
					m.categories.push_back(atoi(cat.c_str()));
			std::vector<std::string> rest = split_fields(line.substr(rb + 1));
			/* rest[0] is empty (the comma after the brackets). */
			if (rest.size() < 7)
				continue;
			m.priority = atoi(rest[1].c_str());
			m.sample = atoi(rest[2].c_str());
			m.event = atoi(rest[3].c_str());
			m.show = (float)atof(rest[4].c_str());
			m.life = (float)atof(rest[5].c_str());
			for (size_t t = 6; t < rest.size(); t++)
				m.text += (t > 6 ? "," : "") + rest[t];
			m.text = trim(m.text);
			messages.push_back(m);
		}
	}
	return !messages.empty();
}

std::vector<std::string> Communicator::wrap(const std::string &text) const
{
	std::vector<std::string> out;
	std::string word, line;
	auto flush_line = [&]() {
		if (!line.empty())
			out.push_back(line);
		line.clear();
	};
	auto add_word = [&]() {
		if (word.empty())
			return;
		if (!line.empty() && (int)(line.size() + 1 + word.size()) > per_line)
			flush_line();
		line += (line.empty() ? "" : " ") + word;
		word.clear();
	};
	for (char c : text) {
		if (c == '@')
			c = ',';
		if (c == '#') {
			add_word();
			flush_line();
		}
		else if (c == ' ')
			add_word();
		else
			word += c;
	}
	add_word();
	flush_line();
	if (out.size() > 4)
		out.resize(4);
	return out;
}

void Communicator::enqueue(int msg, float now, int who)
{
	const Message &m = messages[(size_t)msg];
	for (Waiting &w : queue)
		if (w.msg == msg && w.owner == who) {
			w.until = now + m.life;
			return;
		}
	if (queue.size() >= 10)
		return;
	auto more_important = [&](const Waiting &w) {
		const Message &o = messages[(size_t)w.msg];
		if (o.priority != m.priority)
			return o.priority < m.priority;
		return chars[(size_t)o.who].priority <= chars[(size_t)m.who].priority;
	};
	auto at = std::find_if_not(queue.begin(), queue.end(), more_important);
	queue.insert(at, { msg, now + m.life, who });
}

void Communicator::post(const std::string &name, int who, float now)
{
	if (messages.empty() || name.empty())
		return;
	if (name[0] == '~') {
		std::string cat = upper(name.substr(1));
		auto c = std::find(categories.begin(), categories.end(), cat);
		if (c == categories.end())
			return;
		int ci = (int)(c - categories.begin());
		std::vector<int> pick;
		for (size_t i = 0; i < messages.size(); i++)
			if (std::find(messages[i].categories.begin(), messages[i].categories.end(), ci) !=
				messages[i].categories.end())
				pick.push_back((int)i);
		if (pick.empty())
			return;
		rnd = rnd * 1103515245u + 12345u;
		enqueue(pick[(rnd >> 16) % pick.size()], now, who);
		return;
	}
	std::string id = upper(name);
	if (id.compare(0, 7, "SYSTEM_") == 0) {
		pending_system.push_back({ id.substr(7), now });
		return;
	}
	for (size_t i = 0; i < messages.size(); i++)
		if (messages[i].id == id) {
			enqueue((int)i, now, who);
			return;
		}
}

void Communicator::event(int ev, float now, RaceSound &sound)
{
	if (ev == 1) {
		alert = std::min(alert + 10, 100);
		if (!alert_voice)
			alert_voice = sound.loop("copalert.wav");
	}
	else if (ev >= 2 && ev <= 5) {
		/* 0x489b70: the arrow for 6 s. */
		arrow = ev;
		arrow_until = now + 6;
	}
}

void Communicator::system(const std::string &name, float now, RaceSound &sound)
{
	for (const System &s : systems)
		if (s.name == name) {
			if (s.sample >= 0 && (size_t)s.sample < samples.size() && s.event != 1)
				sound.effect(samples[(size_t)s.sample] + ".wav");
			event(s.event, now, sound);
		}
}

void Communicator::update(float now, float dt, RaceSound &sound)
{
	for (auto &[name, at] : pending_system)
		system(name, at, sound);
	pending_system.clear();
	if (arrow && now >= arrow_until)
		arrow = 0;
	/* 0x489d30: the cop alert lamp blinks every 0.5 s, weakening by 7 a frame (at some 30
	 * frames a second), its sample looping meanwhile. */
	if (alert > 0) {
		alert_tick += dt * 30;
		while (alert_tick >= 1 && alert > 0)
			alert -= 7, alert_tick -= 1;
		alert_blink += dt;
		if (alert_blink >= 0.5f)
			alert_blink = 0, alert_lit = !alert_lit;
		if (alert_voice)
			sound.set(alert_voice, 1);
	}
	if (alert <= 0) {
		alert = 0;
		alert_lit = false;
		if (alert_voice)
			sound.stop_voice(alert_voice), alert_voice = 0;
	}
	queue.erase(std::remove_if(queue.begin(), queue.end(), [&](const Waiting &w) { return w.until < now; }),
		queue.end());
	/* A tip gives way to anything more important. */
	if (current >= 0 && messages[(size_t)current].priority >= 100 && !queue.empty() &&
		messages[(size_t)queue.front().msg].priority < 100)
		current_until = now;
	if (now >= init_wait && (current < 0 || now >= current_until)) {
		if (queue.empty()) {
			current = -1;
			owner = -1;
		}
		else {
			Waiting w = queue.front();
			queue.erase(queue.begin());
			current = w.msg;
			owner = w.owner;
			const Message &m = messages[(size_t)current];
			const Character &c = chars[(size_t)m.who];
			photo = c.photo;
			title = c.title;
			lines = wrap(m.text);
			current_until = now + m.show;
			voiced = false;
			/* The racers' own talk shows their car's health; Honey's and Shadow's not. */
			if (c.name == "HONNEY" || c.name == "SHADOW")
				owner = -1;
		}
	}
	/* Moved away while silent, back in for a message (moveaway). */
	slide = std::clamp(slide + (current >= 0 ? -dt : dt) * 4, 0.0f, 1.0f);
	if (current >= 0 && slide <= 0 && !voiced) {
		const Message &m = messages[(size_t)current];
		if (m.event == 0)
			system("NEWMESSAGE", now, sound);
		else
			event(m.event, now, sound);
		if (m.sample >= 0 && (size_t)m.sample < samples.size())
			sound.effect(samples[(size_t)m.sample] + ".wav");
		voiced = true;
	}
}
