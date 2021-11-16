#include "tui_ncurses.h"
#include "tui_state_manager.h"
#include "tui_state_menu.h"

int main() {
	tui_ncurses::initialize();

	TUIStateManager states;
	states.run(new TUIStateMenu);

	tui_ncurses::exit();
}
