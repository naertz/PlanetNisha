#include "tui_state_menu.h"

#include "tui_input_manager.h"
#include "tui_safe_delete.h"
#include "tui_state_manager.h"

TUIStateMenu::TUIStateMenu(void)
  : menu_layout(nullptr)
  , menu(nullptr) { }

TUIStateMenu::~TUIStateMenu() { }

void TUIStateMenu::load() {
	menu_layout = new TUIMenuLayout(24, 80, this);
	create_main_menu();
}

void TUIStateMenu::unload() {
	safe_delete(menu);
}

void TUIStateMenu::update() {
	if (tui_input_manager::is_pressed('q')) {
		TUIStateManager::quit();
	}

	menu->handle_input();
	if (menu->will_exit_menu()) {
		auto temporary_id = menu->get_current_id();
		switch(temporary_id) {
			case new_game: {
				TUIStateManager::change(new TUIStateMenu);
				break;
			} case exit_game: {
				TUIStateManager::quit();
				break;
			}
			menu->reset();
		}
	}
}

void TUIStateMenu::draw(void) {
	menu_layout->draw(menu);
}

void TUIStateMenu::create_main_menu(void) {
	safe_delete(menu);

	menu = new TUIMenu(menu_layout->get_main_menu()->get_height() - 2, menu_layout->get_main_menu()->get_width() - 2, 1, 1);

	TUIMenuItem *menu_item;
	menu_item = new TUIMenuItem("New Game", new_game);
	menu->add(menu_item);

	menu_item = new TUIMenuItem("Exit Game", exit_game);
	menu->add(menu_item);
}
