#include "tui_ncurses.h"

void tui_ncurses::initialize(void) {
	// Initialize ncurses.
	initscr();
	// Set cursor state to invisible.
	curs_set(0);
	// Disable line buffering and erase/kill character-processing.
	cbreak();
	// Disable typed characters on screen.
	noecho();

	nodelay(stdscr, TRUE);
	keypad(stdscr, TRUE);

	// Enable colors.
	start_color();
	// Create color pairs.
	init_pair(pair_white_black, COLOR_WHITE, COLOR_BLACK);
	init_pair(pair_red_black, COLOR_RED, COLOR_BLACK);

	refresh();
}

void tui_ncurses::exit(void) {
	// Clear the screen.
	erase();

	refresh();
	// Exit ncurses.
	endwin();
}

int tui_ncurses::get_input(void) {
	return getch();
}

int tui_ncurses::pressed_key;
