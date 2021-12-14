QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

INCLUDEPATH += ../../Qt_Widgets_Game

SOURCES +=  \
  ../../Qt_Widgets_Game/story.cpp \
  ../../Qt_Widgets_Game/story_item.cpp \
  ../../Qt_Widgets_Game/story_item_option.cpp \
  tst_story.cpp
