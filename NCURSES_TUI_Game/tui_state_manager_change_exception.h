#ifndef TUISTATEMANAGERCHANGEEXCEPTION_H
#define TUISTATEMANAGERCHANGEEXCEPTION_H

#include "tui_state.h"

class TUIStateManagerChangeException {
	public:
		TUIStateManagerChangeException(TUIState *new_state);
		TUIState *new_state;
};

#endif // TUISTATEMANAGERCHANGEEXCEPTION_H
