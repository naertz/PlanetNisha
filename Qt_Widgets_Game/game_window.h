#ifndef GAME_WINDOW_H
#define GAME_WINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class GameWindow; }
QT_END_NAMESPACE

#include "story_item.h"

class GameWindow : public QMainWindow {
	Q_OBJECT
	public:
		GameWindow(StoryItem *const first_story_item, QWidget *const parent = nullptr);
		~GameWindow();
	private slots:
		void select_first_choice();
		void select_second_choice();
		void select_third_choice();
	private:
		void setup_ui_texts(StoryItem *const current_story_item);
		Ui::GameWindow *ui;
		StoryItem *first_story_item;
		StoryItem *current_story_item;
};

#endif // GAME_WINDOW_H
