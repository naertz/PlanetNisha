#include "game_window.h"
#include "ui_game_window.h"

/****************/
/* Constructors */
/****************/

GameWindow::GameWindow(StoryItem *const first_story_item, QWidget *const parent)
  : QMainWindow(parent)
  , ui(new Ui::GameWindow)
  , first_story_item(first_story_item)
  , current_story_item(first_story_item) {
	ui->setupUi(this);
	setup_ui_texts(current_story_item);
}

/**************/
/* Destructor */
/**************/

GameWindow::~GameWindow() {
	delete ui;
}

/****************/
/* Button Slots */
/****************/

void GameWindow::select_first_choice() {
	current_story_item = current_story_item->get_options()[0].get_story_item();
	if (current_story_item) {
		setup_ui_texts(current_story_item);
	} else {
		current_story_item = first_story_item;
		setup_ui_texts(current_story_item);
	}
}

void GameWindow::select_second_choice() {
	current_story_item = current_story_item->get_options()[1].get_story_item();
	if (current_story_item) {
		setup_ui_texts(current_story_item);
	} else {
		GameWindow::close();
	}
}

void GameWindow::select_third_choice() {
	current_story_item = current_story_item->get_options()[2].get_story_item();
	if (current_story_item) {
		setup_ui_texts(current_story_item);
	} else {
		GameWindow::close();
	}
}

/*********************/
/* Private Functions */
/*********************/

void GameWindow::setup_ui_texts(StoryItem *const current_story_item) {
	ui->story_text_browser->setText(QString::fromStdString(current_story_item->get_story_text()));
	ui->event_text_browser->setText(QString::fromStdString(current_story_item->get_event_text()));
	ui->prompt_text_browser->setText(QString::fromStdString(current_story_item->get_prompt_text()));
	ui->first_option_text_browser->setText(QString::fromStdString(current_story_item->get_options()[0].get_option_text()));
	ui->second_option_text_browser->setText(QString::fromStdString(current_story_item->get_options()[1].get_option_text()));
	ui->third_option_text_browser->setText(QString::fromStdString(current_story_item->get_options()[2].get_option_text()));
}
