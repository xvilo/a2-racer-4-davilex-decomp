#include "game/police.h"

#include <algorithm>
#include <cctype>
#include <cstdlib>

#include "res/archive.h"
#include "xvga/inifile.h"

static std::string lower(std::string s)
{
	for (char &c : s)
		c = (char)tolower((unsigned char)c);
	return s;
}

void PoliceRules::load(const std::string &dir, int stage, int difficulty)
{
	IniFile cops, intel;
	std::string p = find_file_ci(dir, "cops.ini");
	if (!p.empty() && cops.load(p)) {
		static const std::map<std::string, CopAction> names = { { "BESIDE", CopAction::BESIDE },
			{ "INTO", CopAction::INTO }, { "FRONT", CopAction::FRONT }, { "MEGAPHONE", CopAction::MEGAPHONE },
			{ "HANDBRAKE", CopAction::HANDBRAKE } };
		for (int i = 0, n = cops.get_int("Cop Tactics", "Count", 0); i < n; i++) {
			std::vector<std::string> f = split_fields(cops.get("Cop Tactics", std::to_string(i)));
			CopTactic t;
			for (size_t k = 0; k + 1 < f.size(); k += 2) {
				auto a = names.find(f[k]);
				if (a != names.end())
					t.steps.push_back({ a->second, std::max(0.5f, (float)atof(f[k + 1].c_str())) });
			}
			tactics.push_back(t);
		}
		std::string sec = "Track " + std::to_string(stage) + " Tactics";
		for (const std::string &k : cops.keys(sec)) {
			std::vector<int> list;
			for (const std::string &v : split_fields(cops.get(sec, k)))
				if (int t = atoi(v.c_str()); t >= 0 && t < (int)tactics.size() && !tactics[(size_t)t].steps.empty())
					list.push_back(t);
			track_tactics[lower(k)] = list;
		}
	}
	p = find_file_ci(dir, "intel.ini");
	if (!p.empty() && intel.load(p)) {
		bool hard = difficulty >= 2;
		stop_speed = (float)intel.get_int("GENERAL", "StopSpeed", 7);
		chase_time = (float)intel.get_int("GENERAL", hard ? "ChaseTimeHard" : "ChaseTimeEasy", 120);
		give_up_chunks = intel.get_int("GENERAL", "GiveUpDist", 20);
		cops_per_player = intel.get_int("GENERAL", hard ? "CopsPerPlayerHard" : "CopsPerPlayerEasy", 4);
		cops_per_racer = intel.get_int("GENERAL", "CopsPerRacer", 1);
	}
}

const std::vector<int> &PoliceRules::for_kind(const std::string &kind) const
{
	static const std::vector<int> none;
	auto it = track_tactics.find(lower(kind));
	if (it == track_tactics.end())
		it = track_tactics.find("default");
	return it == track_tactics.end() ? none : it->second;
}

void CopPlan::begin(const PoliceRules &rules, const std::vector<int> &choice, unsigned &rnd)
{
	rnd = rnd * 1103515245u + 12345u;
	tactic = choice.empty() ? -1 : choice[(rnd >> 16) % choice.size()];
	step = 0;
	left = tactic >= 0 ? rules.tactics[(size_t)tactic].steps[0].second : 0;
	side = (rnd >> 20) & 1 ? 1 : -1;
	step_started = false;
}

CopAction CopPlan::action(const PoliceRules &rules, const std::vector<int> &choice, float dt, unsigned &rnd)
{
	if (tactic < 0)
		return CopAction::INTO;
	left -= dt;
	if (left <= 0) {
		const CopTactic &t = rules.tactics[(size_t)tactic];
		if (++step >= t.steps.size())
			begin(rules, choice, rnd);
		else
			left = t.steps[step].second, step_started = false;
		if (tactic < 0)
			return CopAction::INTO;
	}
	return rules.tactics[(size_t)tactic].steps[step].first;
}
