#include "tui_menu.h"

#if defined(_WIN32) || defined(_WIN64)
#include <ncursesw/ncurses.h>
#else
#include <ncurses.h>
#endif

#include "tui_input_manager.h"
#include "tui_ncurses.h"
#include "tui_safe_delete.h"

TUIMenu::TUIMenu(int height, int width, int y_location, int x_location)
  : current_menu_item_index(0)
  , current_menu_item(nullptr)
  , selected_menu_item(nullptr)
  , is_menu_item_selected(false)
  , height(height)
  , width(width)
  , y_location(y_location)
  , x_location(x_location)
  , will_exit(false) { }

TUIMenu::~TUIMenu() { }

void TUIMenu::add(TUIMenuItem *menu_item) {
	menu_items.push_back(menu_item);
	if (menu_items.size() == 1) {
		current_menu_item = menu_items.back();
		current_menu_item_index = menu_items.size() - 1;
	}
	unsigned int i;
	for (i = 0; i < menu_items.size(); ++i) {
		if (menu_items[i]) {
			break;
		}
	}
	current_menu_item = menu_items[i];
	current_menu_item_index = i;
}

void TUIMenu::draw(TUIWindow *window) {
	unsigned int draw_begin_index = 0;
	unsigned int draw_end_index = menu_items.size();

	for (unsigned int current_menu_item_index = draw_begin_index, y_offset = 0; current_menu_item_index < draw_end_index; ++current_menu_item_index, ++y_offset) {
		if (!menu_items[current_menu_item_index]) {
			for (int i = 0; i < width; ++i) {
				window->print((int)'-', y_location + y_offset, x_location + i, COLOR_PAIR(pair_white_black));
			}
		} else {
			menu_items[current_menu_item_index]->draw(window, y_location + y_offset, x_location, menu_items[current_menu_item_index] == current_menu_item);
		}
	}
}

void TUIMenu::handle_input(void) {
	if (tui_input_manager::is_pressed(KEY_UP)) {
		select_previous_item();
	} else if (tui_input_manager::is_pressed(KEY_DOWN)) {
		select_next_item();
	} else if (tui_input_manager::is_pressed('\n')) {
		if (current_menu_item->get_type() == option || current_menu_item->get_type() == item) {
			is_menu_item_selected = true;
			selected_menu_item = current_menu_item;
		} else {
			current_menu_item->handle_input();
		}
	} else {
		if (current_menu_item) {
			current_menu_item->handle_input();
		}
	}
}

void TUIMenu::select_next_item(void) {
	if (menu_items.size() == 0) {
		return;
	} else if (menu_items.size() == 1) {
		current_menu_item = menu_items.front();
		current_menu_item_index = 0;
		return;
	} else if (current_menu_item == menu_items.back()) {
		if (current_menu_item_index == menu_items.size() - 1) {
			select_first_item();
			return;
		}
	}

	++current_menu_item_index;
	current_menu_item = menu_items[current_menu_item_index];

	if (!current_menu_item) {
		select_next_item();
	}
}

void TUIMenu::select_previous_item(void) {
	if (menu_items.size() == 0) {
		return;
	} else if (menu_items.size() == 1) {
		current_menu_item = menu_items.front();
		current_menu_item_index = 0;
		return;
	} else if (current_menu_item == menu_items.front()) {
		if (current_menu_item_index == 0) {
			select_last_item();
			return;
		}
	}

	--current_menu_item_index;
	current_menu_item = menu_items[current_menu_item_index];

	if (!current_menu_item) {
		select_previous_item();
	}
}

void TUIMenu::select_last_item(void) {
	if (menu_items.size() == 0) {
		return;
	} else if (menu_items.size() == 1) {
		current_menu_item = menu_items.front();
		current_menu_item_index = 0;
		return;
	}

	current_menu_item = menu_items.back();
	current_menu_item_index = menu_items.size() - 1;

	if (!current_menu_item) {
		select_previous_item();
	}
}

void TUIMenu::select_first_item(void) {
	if (menu_items.size() == 0) {
		return;
	} else if (menu_items.size() == 1) {
		current_menu_item = menu_items.front();
		current_menu_item_index = 0;
		return;
	}

	current_menu_item = menu_items.front();
	current_menu_item_index = 0;

	if (!current_menu_item) {
		select_next_item();
	}
}

bool TUIMenu::will_exit_menu(void) const {
	return is_menu_item_selected && selected_menu_item;
}

int TUIMenu::get_current_id(void) {
	if (!current_menu_item) {
		select_next_item();
	}

	return current_menu_item->get_id();
}

void TUIMenu::reset(void) {
	selected_menu_item = nullptr;
	is_menu_item_selected = false;
}
