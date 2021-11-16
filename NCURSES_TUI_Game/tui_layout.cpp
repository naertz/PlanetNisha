#include "tui_layout.h"

#include <cstdlib>
#include <iostream>

#include "tui_ncurses.h"
#include "tui_safe_delete.h"

TUILayout::TUILayout(int height, int width)
  : main_window(nullptr)
  , required_height(height)
  , required_width(width) { }

TUILayout::~TUILayout() {
	safe_delete(main_window);
}

TUIWindow *TUILayout::get_main_window(void) {
	return main_window;
}

void TUILayout::clear_main_window(void) {
	main_window->clear();
}

void TUILayout::refresh_main_window(void) {
	main_window->refresh();
}

void TUILayout::initialize_window() {
	clear();
	int current_height;
	int current_width;
	getmaxyx(stdscr, current_height, current_width);
	if (current_height < required_height || current_width < required_width) {
		tui_ncurses::exit();
		std::cerr << "The console window is too small.\n";
		exit(EXIT_FAILURE);
	}
	window_height = required_height;
	window_width = required_width;
	int y_location = current_height / 2 - required_height / 2;
	int x_location = current_width / 2 - required_width / 2;
	main_window = new TUIWindow(required_height, required_width, y_location, x_location, true, "Planet Nisha - TUI");
	main_window->refresh();
}

void TUILayout::exit_window() {
	safe_delete(main_window);
}

void TUILayout::draw() { }
