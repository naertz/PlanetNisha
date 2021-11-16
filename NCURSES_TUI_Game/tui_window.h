#ifndef TUIWINDOW_H
#define TUIWINDOW_H

#if defined(_WIN32) || defined(_WIN64)
#include <ncursesw/ncurses.h>
#else
#include <ncurses.h>
#endif
#include <string>

class TUIWindow {
	public:
		TUIWindow(int height, int width, int y_location, int x_location, bool add_border, std::string label);
		TUIWindow(TUIWindow *parent_window, int height, int width, int y_location, int x_location);
		TUIWindow(TUIWindow *parent_window, int height, int width, int y_location, int x_location, bool add_border, std::string label);
		virtual ~TUIWindow();
		void print(int character, int y_location, int x_location, int color_pair);
		void print_string(std::string label, int y_location, int x_location);
		void print_string(std::string label, int y_location, int x_location, int color_pair);
		void clear(void);
		void refresh(void);
		int get_height(void) const;
		int get_width(void) const;
		int get_y_location(void) const;
		int get_x_location(void) const;
		bool has_border(void) const;
	private:
		WINDOW *window;
		int height;
		int width;
		int y_location;
		int x_location;
		bool add_border;
		std::string label;
};

#endif // TUIWINDOW_H
