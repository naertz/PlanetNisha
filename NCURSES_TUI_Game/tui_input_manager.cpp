#include "tui_input_manager.h"

#include "tui_ncurses.h"

bool tui_input_manager::is_pressed(int key) {
	return tui_ncurses::pressed_key == key;
}

void tui_input_manager::update(void) {
	tui_ncurses::pressed_key = tui_ncurses::get_input();
}
