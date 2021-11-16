#include "tui_window.h"

TUIWindow::TUIWindow(int height, int width, int y_location, int x_location, bool add_border, std::string label)
  : window(newwin(height, width, y_location, x_location))
  , height(height)
  , width(width)
  , y_location(y_location)
  , x_location(x_location)
  , add_border(add_border)
  , label(label) { }

TUIWindow::TUIWindow(TUIWindow *parent_window, int height, int width, int y_location, int x_location)
  : window(nullptr)
  , height(height)
  , width(width)
  , y_location(y_location)
  , x_location(x_location)
  , add_border(false)
  , label("") {

	if (parent_window && parent_window->add_border) {
		if (height == 0) {
			height = parent_window->height - 2;
		}
		if (width == 0) {
			width = parent_window->width - 2;
		}
		if (y_location == 0) {
			y_location = 1;
		}
		if (x_location == 0) {
			x_location = 1;
		}
	}
	window = derwin(parent_window->window, height, width, y_location, x_location);
}

TUIWindow::TUIWindow(TUIWindow *parent_window, int height, int width, int y_location, int x_location, bool add_border, std::string label)
  : window(nullptr)
  , height(height)
  , width(width)
  , y_location(y_location)
  , x_location(x_location)
  , add_border(add_border)
  , label(label) {
	if (parent_window->add_border) {
		if (height == 0) {
			height = parent_window->height - 2;
		}
		if (width == 0) {
			width = parent_window->width - 2;
		}
		if (y_location == 0) {
			y_location = 1;
		}
		if (x_location == 0) {
			x_location = 1;
		}
	}

	window = derwin(parent_window->window, height, width, y_location, x_location);
}

TUIWindow::~TUIWindow() {
	if (window) {
		delwin(window);
	}
}

void TUIWindow::print(int character, int y_location, int x_location, int color_pair) {
	wattron(window, A_BOLD);
	wattron(window, color_pair);
	mvwaddch(window, y_location, x_location, character);
	wattroff(window, color_pair);
	wattroff(window, A_BOLD);
}

void TUIWindow::print_string(std::string label, int y_location, int x_location) {
	if (!label.empty()) {
		mvwaddstr(window, y_location, x_location, label.c_str());
	}
}

void TUIWindow::print_string(std::string label, int y_location, int x_location, int color_pair) {
	if (!label.empty()) {
		wattron(window, A_BOLD);
		wattron(window, color_pair);
		mvwaddstr(window, y_location, x_location, label.c_str());
		wattroff(window, color_pair);
		wattroff(window, A_BOLD);
	}
}

void TUIWindow::clear(void) {
	werase(window);
	if (add_border) {
		box(window, 0, 0);
	}
	if (!label.empty()) {
		print_string("[" + label + "]", 0, 3);
	}
}

void TUIWindow::refresh(void) {
	wrefresh(window);
}

int TUIWindow::get_height(void) const {
	return height;
}

int TUIWindow::get_width(void) const {
	return width;
}

int TUIWindow::get_y_location(void) const {
	return y_location;
}

int TUIWindow::get_x_location(void) const {
	return x_location;
}

bool TUIWindow::has_border(void) const {
	return add_border;
}
