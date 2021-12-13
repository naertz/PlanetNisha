TEMPLATE = app

CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

win32:INCLUDEPATH += C:/Qt/Tools/mingw730_64/opt/include
win32:LIBS += -L C:/Qt/Tools/mingw730_64/opt/lib -lncurses
unix:LIBS += -lncurses

SOURCES += \
        start.cpp \
        tui_input_manager.cpp \
        tui_layout.cpp \
        tui_menu.cpp \
        tui_menu_item.cpp \
        tui_menu_layout.cpp \
        tui_ncurses.cpp \
        tui_state_manager.cpp \
        tui_state_manager_change_exception.cpp \
        tui_state_manager_quit_exception.cpp \
        tui_state_menu.cpp \
        tui_window.cpp

HEADERS += \
  tui_input_manager.h \
  tui_layout.h \
  tui_menu.h \
  tui_menu_item.h \
  tui_menu_layout.h \
  tui_ncurses.h \
  tui_safe_delete.h \
  tui_state.h \
  tui_state_manager.h \
  tui_state_manager_change_exception.h \
  tui_state_manager_quit_exception.h \
  tui_state_menu.h \
  tui_window.h

DISTFILES += \
  README.md
