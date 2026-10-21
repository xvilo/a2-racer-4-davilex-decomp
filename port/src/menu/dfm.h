/* Delphi's binary form files (DFM, "TPF0"): a tree of components, each with its class,
 * its name and its published properties (numbers, strings, identifiers, sets, lists,
 * binary data). An inherited form holds only what differs from its parent; load_form
 * merges the chain. */
#pragma once

#include <map>
#include <memory>
#include <string>
#include <vector>

class DelphiProgram;

struct DfmValue {
	enum Kind { NONE, INT, FLOAT, STRING, IDENT, BOOL, SET, LIST, BINARY, COLLECTION } kind = NONE;
	long long i = 0;
	double f = 0;
	std::string s;                  /* string, identifier, or binary bytes */
	std::vector<std::string> set;   /* set members */
	std::vector<DfmValue> list;
	int as_int(int def = 0) const { return kind == INT ? (int)i : kind == FLOAT ? (int)f : def; }
};

struct DfmObject {
	std::string cls, name;
	bool inherited = false;
	std::map<std::string, DfmValue> props;
	std::vector<std::unique_ptr<DfmObject>> children;

	const DfmValue *prop(const std::string &key) const;
	int get_int(const std::string &key, int def = 0) const;
	std::string get_str(const std::string &key, const std::string &def = "") const;
	bool get_bool(const std::string &key, bool def = false) const;
	DfmObject *find(const std::string &name);
	/* Every component in the tree, depth first (this one first). */
	void walk(std::vector<DfmObject *> &out);
};

/* Parses one DFM resource; null if it isn't one. */
std::unique_ptr<DfmObject> parse_dfm(const std::vector<uint8_t> &data);
/* The form of a class (e.g. "TfrmMainScreen") with its inherited parts merged in from its
 * ancestors' forms; null if the program has no form for it. */
std::unique_ptr<DfmObject> load_form(const DelphiProgram &prog, const std::string &cls);
