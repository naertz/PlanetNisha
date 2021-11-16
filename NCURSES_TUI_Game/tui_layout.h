#ifndef TUILAYOUT_H
#define TUILAYOUT_H

#include "tui_window.h"

class TUILayout {
	public:
		TUILayout(int height, int width);
		~TUILayout();
		TUIWindow *get_main_window(void);
		void clear_main_window(void);
		void refresh_main_window(void);
		virtual void initialize_window(void);
		virtual void exit_window(void);
		virtual void draw(void);
	private:
		TUIWindow *main_window;
		int window_height;
		int window_width;
		int required_height;
		int required_width;
};

#endif // TUILAYOUT_H
