/***********************************
* Planet Nisha
************************************
* Class:        CIS-164 Advanced C++
* Author:       Noah Allan Ertz
* License:      AGPL-3.0
* Last Updated: December 2021
***********************************/

#include <QApplication>

#include "game_window.h"

#include "story.h"

int main(int argc, char *argv[]) {
	QApplication application(argc, argv);
	GameWindow game_window { start_story() };
	game_window.show();
	return application.exec();
}
