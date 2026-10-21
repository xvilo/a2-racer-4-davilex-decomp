/* The menu's help file (MenuData/Menu.hlp), read for its topics' titles and text: the
 * original hands the Help button's questions to WinHelp (Application.HelpContext with
 * the ids of Agent.ini [<form>BalloonItems]), the port shows the text itself.
 *
 * A WinHelp 3.1/4 file: a header (magic 0x00035F3F, the directory's place), a B+ tree
 * directory of internal files; |SYSTEM (version, whether |TOPIC is LZ77-packed and in 2K
 * or 4K blocks), |TOPIC (blocks of a 12-byte header and topic links: a topic header
 * whose text is the title, then paragraphs whose text pieces are 0-separated) and
 * |CTXOMAP (the [MAP] ids, each with a topic offset: block << 15 + characters into it). */
#pragma once

#include <map>
#include <string>
#include <vector>

class WinHelp {
public:
	bool load(const std::string &path);
	/* The topic for a context id; false if there is none. */
	bool topic(int id, std::string &title, std::string &text) const;

private:
	struct Topic {
		int offset; /* block << 15 + characters before it in the block */
		std::string title, text;
	};
	std::vector<Topic> topics;
	std::map<int, int> contexts; /* id -> topic offset */
};
