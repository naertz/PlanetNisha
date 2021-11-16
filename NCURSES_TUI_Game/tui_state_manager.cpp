#include "tui_state_manager.h"

#include "tui_input_manager.h"
#include "tui_safe_delete.h"
#include "tui_state_manager_change_exception.h"
#include "tui_state_manager_quit_exception.h"

TUIStateManager::TUIStateManager()
  : current_state(nullptr) { }

TUIStateManager::~TUIStateManager() {
	if (current_state) {
		current_state->unload();
	}
	safe_delete(current_state);
}

void TUIStateManager::change(TUIState *new_state) {
	throw TUIStateManagerChangeException(new_state);
}

void TUIStateManager::quit() {
	throw TUIStateManagerQuitException();
}

void TUIStateManager::run(TUIState *initialized_state) {
	if (!initialized_state) {
		throw "No initialized state";
	}
	current_state = initialized_state;
	current_state->load();
	while (true) {
		try {
			tui_input_manager::update();
			current_state->update();
			if (current_state) {
				current_state->draw();
			}
		} catch (TUIStateManagerChangeException &e) {
			current_state->unload();
			safe_delete(current_state);
			current_state = e.new_state;
			current_state->load();
		} catch (TUIStateManagerQuitException &e) {
			current_state->unload();
			safe_delete(current_state);
			break;
		}
	}
}
