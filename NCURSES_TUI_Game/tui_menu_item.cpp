#include "tui_menu_item.h"

#include "tui_ncurses.h"

TUIMenuItem::TUIMenuItem(std::string label, int id)
  : type(item)
  , label(label)
  , id(id) { }

TUIMenuItem::~TUIMenuItem() { }

item_type TUIMenuItem::get_type(void) const {
	return type;
}

unsigned int TUIMenuItem::get_id(void) const {
	return id;
}

void TUIMenuItem::draw(TUIWindow *window, int y_location, int x_location, bool is_highlighted) {
	if (!is_highlighted) {
		window->print_string(label, y_location, x_location);
	} else {
		window->print_string(label, y_location, x_location, COLOR_PAIR(pair_red_black));
	}
}

void TUIMenuItem::handle_input() { }
