#ifndef TUIMENU_H
#define TUIMENU_H

#include <vector>

#include "tui_menu_item.h"

enum menu_ids {
	new_game,
	exit_game
};

class TUIMenu {
	public:
		TUIMenu(int height, int width, int y_location, int x_location);
		virtual ~TUIMenu();
		void add(TUIMenuItem *menu_item);
		void draw(TUIWindow *window);
		void handle_input(void);
		void select_next_item(void);
		void select_previous_item(void);
		void select_first_item(void);
		void select_last_item(void);
		bool will_exit_menu(void) const;
		int get_current_id(void);
		void reset(void);
	private:
		std::vector<TUIMenuItem*> menu_items;
		unsigned int current_menu_item_index;
		TUIMenuItem *current_menu_item;
		TUIMenuItem *selected_menu_item;
		bool is_menu_item_selected;
		int height;
		int width;
		int y_location;
		int x_location;
		bool will_exit;
};

#endif // TUIMENU_H
