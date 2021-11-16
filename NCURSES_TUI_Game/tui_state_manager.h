#ifndef TUISTATEMANAGER_H
#define TUISTATEMANAGER_H

#include "tui_state.h"

class TUIStateManager {
	public:
		TUIStateManager(void);
		virtual ~TUIStateManager();
		static void change(TUIState *new_state);
		static void quit(void);
		void run(TUIState *initialized_state);
	private:
		TUIState *current_state;
};

#endif // TUISTATEMANAGER_H
