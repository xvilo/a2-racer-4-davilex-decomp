/* The menu's screens as the original builds them: a form from Menu.exe's DFM, its labels'
 * texts, fonts and places as MenuCaps.ini sets them, and its GDI buttons (TGDIButton,
 * TGDIRadioButton, TGDICheckBox) drawn from MenuRcs with the graphics their definitions
 * name: <prefix>_up/_hi (hovered)/_do (down)/_fo (focused)/_di (disabled).tga, and
 * <prefix>_re.bmp, the area that takes clicks. The screen's background is the form class
 * name's first eight letters after "Tfrm" (TfrmMainScreen -> mainscre.bmp). */
#pragma once

#include <functional>
#include <map>
#include <memory>
#include <string>
#include <vector>

#include "menu/canvas.h"
#include "res/image.h"

class DelphiProgram;
class NamedArchive;
class IniFile;
struct DfmObject;
struct SysInput;

struct MenuResources {
	const DelphiProgram *prog = nullptr;
	const NamedArchive *rcs = nullptr;
	const IniFile *caps = nullptr;
	const TrueType *font = nullptr;
	std::map<std::string, std::shared_ptr<Image>> cache;
	/* A picture from MenuRcs (name with extension); null if missing. */
	std::shared_ptr<Image> image(const std::string &name);
};

struct Control {
	enum Kind { OTHER, IMAGE, LABEL, BUTTON, RADIO, CHECK, GRAPHIC, EDIT, SLIDER } kind = OTHER;
	std::string name, cls;
	int x = 0, y = 0, w = 0, h = 0;
	bool visible = true, enabled = true, checked = false;
	std::string caption;
	float font_px = 16;
	uint32_t colour = 0xffffffff;
	bool centre = false, wrap = false;
	bool show_caption = false; /* a button's caption, set by the program, along its bottom */
	bool caption_middle = false; /* ... or in its middle */
	std::string definition, on_click;
	int max_length = 0;       /* a TEdit's MaxLength (0: any) */
	int value = 0;            /* a slider's position, 0..100 */
	std::string on_change;
	std::string group;        /* the panel it is in: radio buttons are one choice per panel */
	uint32_t back = 0xffffffff; /* a TEdit's Color */
	/* Graphics: up, hover, down, focus, disabled; and the click region. */
	std::shared_ptr<Image> look[5], region, picture;
};

class Form {
public:
	std::string cls;
	std::shared_ptr<Image> background;
	std::vector<Control> controls;
	std::map<std::string, std::function<void()>> handlers;
	/* Pictures the screen's code places itself (status indicators and the like). */
	struct Extra {
		std::shared_ptr<Image> img;
		int x, y;
	};
	std::vector<Extra> extras;
	bool closed = false;
	/* A dialog (TfrmCoolDialog and its kind) is drawn centred over the screen behind
	 * it; (x, y) is its top left. Its controls' places are on the screen already. */
	bool dialog = false;
	int x = 0, y = 0, w = 800, h = 600;

	/* Builds the form of class cls; button definitions get the graphic prefixes given
	 * (definition name -> prefix), as the forms' FormCreate code assigns them. */
	bool load(MenuResources &res, const std::string &cls, const std::map<std::string, std::string> &prefixes);
	Control *get(const std::string &name);
	void set_graphic(MenuResources &res, const std::string &control, const std::string &name);
	void draw(Canvas &cv, const MenuResources &res) const;
	/* Mouse and keys: hovering, pressing, clicking (runs the control's handler). */
	void input(const SysInput &in);
	/* Clicks a control as the mouse would (Delphi's Click: a label's OnClick clicks its
	 * radio button, say). */
	void click(const std::string &name);
	/* The text field's text (the form's first TEdit). */
	std::string &text();

private:
	int hover = -1, pressed = -1, dragging = -1;
	bool hit(const Control &c, int x, int y) const;
	void activate(size_t i);
};
