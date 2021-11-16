#ifndef TUIMENULAYOUT_H
#define TUIMENULAYOUT_H

#include "tui_layout.h"
#include "tui_menu.h"

class TUIStateMenu;

class TUIMenuLayout : public TUILayout {
	public:
		TUIMenuLayout(int height, int width, TUIStateMenu *TUIState);
		virtual ~TUIMenuLayout();
		TUIWindow *get_main_menu(void) const;
		TUIWindow *get_splash_logo(void) const;
		void initialize_window(void);
		void exit_window(void);
		using TUILayout::draw;
		void draw(TUIMenu *menu);
		//void redraw();
	private:
		TUIStateMenu *TUIState;
		TUIWindow *main_menu;
		TUIWindow *splash_logo;
};

#endif // TUIMENULAYOUT_H
