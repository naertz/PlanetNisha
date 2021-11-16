#ifndef TUI_NCURSES_H
#define TUI_NCURSES_H

#if defined(_WIN32) || defined(_WIN64)
#include <ncursesw/ncurses.h>
#else
#include <ncurses.h>
#endif

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
