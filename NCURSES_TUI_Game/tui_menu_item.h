#ifndef TUIMENUITEM_H
#define TUIMENUITEM_H

#include <string>

#include "tui_window.h"

enum item_type {
	item,
	option
};

class TUIMenuItem {
	public:
		TUIMenuItem(std::string label, int id);
		virtual ~TUIMenuItem();
		item_type get_type(void) const;
		unsigned int get_id(void) const;
		virtual void draw(TUIWindow *window, int y_location, int x_location, bool is_highlighted = false);
		virtual void handle_input(void);
	private:
		item_type type;
		std::string label;
		unsigned int id;
};

#endif // TUIMENUITEM_H
