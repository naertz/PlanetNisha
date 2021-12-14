/***********************************
* Planet Nisha
************************************
* Class:        CIS-164 Advanced C++
* Author:       Noah Allan Ertz
* License:      AGPL-3.0
* Last Updated: December 2021
***********************************/

#include <iostream>
#include <QApplication>

#include "game_window.h"

#include "story.h"

int main(int argc, char *argv[]) {
	const QApplication application(argc, argv);
	StoryItem *story_tree;
	try {
		story_tree = start_story();
	} catch (std::exception const &exception) {
		std::cout << exception.what() << "\n";
		return -1;
	}
	GameWindow game_window { story_tree };
	game_window.show();
	return application.exec();
}
