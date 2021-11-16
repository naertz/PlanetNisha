#ifndef TUISTATEMENU_H
#define TUISTATEMENU_H

#include "tui_menu.h"
#include "tui_menu_layout.h"
#include "tui_state.h"

class TUIStateMenu : public TUIState {
		friend class TUIMenuLayout;
	public:
		TUIStateMenu(void);
		virtual ~TUIStateMenu();
		void load();
		void unload();
		void update();
		void draw();
	private:
		TUIMenuLayout *menu_layout;
		TUIMenu *menu;
		void create_main_menu(void);
};

#endif // TUISTATEMENU_H
