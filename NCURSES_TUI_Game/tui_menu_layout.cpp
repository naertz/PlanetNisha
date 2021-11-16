#include "tui_menu_layout.h"

#include <vector>

#include "tui_ncurses.h"
#include "tui_safe_delete.h"

TUIMenuLayout::TUIMenuLayout(int height, int width, TUIStateMenu *TUIState)
  : TUILayout(height, width)
  , TUIState(TUIState)
  , main_menu(nullptr)
  , splash_logo(nullptr) {
	initialize_window();
}

TUIMenuLayout::~TUIMenuLayout() {
	safe_delete(main_menu);
	safe_delete(splash_logo);
	TUILayout::exit_window();
}

TUIWindow *TUIMenuLayout::get_main_menu(void) const {
	return main_menu;
}

TUIWindow *TUIMenuLayout::get_splash_logo(void) const {
	return splash_logo;
}

void TUIMenuLayout::initialize_window(void) {
	TUILayout::initialize_window();

	main_menu = new TUIWindow(TUILayout::get_main_window(), 0, 24, 0, 55, true, "Main Menu");
	splash_logo = new TUIWindow(TUILayout::get_main_window(), 16, 52, 0, 0);

	main_menu->refresh();
}

void TUIMenuLayout::exit_window(void) {
	safe_delete(main_menu);
	safe_delete(splash_logo);
	TUILayout::exit_window();
}

void TUIMenuLayout::draw(TUIMenu *menu) {
	clear_main_window();
	splash_logo->clear();

	std::vector<std::string> planet_nisha_ascii = { "=================================================",
	                                                "|  ___                |                         |",
	                                                "|  |  || _______ ____-+-                        |",
	                                                "|  |-- ||   ||  \\|___||                         |",
	                                                "|  |   \\|___||  ||___ |                         |",
	                                                "|  |\\  |+___ |                                  |",
	                                                "|  | \\ |||__ |_  __                             |",
	                                                "|  |  \\||___|| ||_|                             |",
	                                                "|                                               |",
	                                                "|                                               |",
	                                                "|                                               |",
	                                                "|                                               |",
	                                                "|                                               |",
	                                                "|                                               |",
	                                                "|                                               |",
	                                                "=================================================" };

	for (unsigned int i = 0; i < planet_nisha_ascii.size(); ++i) {
		splash_logo->print_string(planet_nisha_ascii[i], i, 3, COLOR_PAIR(pair_red_black));
	}

	splash_logo->refresh();

	main_menu->clear();
	menu->draw(main_menu);

	refresh_main_window();
	main_menu->refresh();
	refresh();
}
