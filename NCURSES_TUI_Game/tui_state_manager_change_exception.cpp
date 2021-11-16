#include "tui_state_manager_change_exception.h"

TUIStateManagerChangeException::TUIStateManagerChangeException(TUIState *new_state)
  : new_state(new_state) { }
