#ifndef TUI_NCURSES_H
#define TUI_NCURSES_H

#include <ncurses.h>

enum color_pairs {
	pair_white_black,
	pair_red_black
};

namespace tui_ncurses {
	void initialize(void);
	void exit(void);
	int get_input(void);
	extern int pressed_key;
}

#endif // TUI_NCURSES_H
