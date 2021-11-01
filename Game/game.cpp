#if defined(_WIN32) || defined(_WIN64)
#define WINDOWS
#endif // OS Definitions

#include "Character.h"
#include "print.h"
#include "story.h"
#include "user_input.h"

#include <fstream>
#include <iostream>

#if defined(WINDOWS)
#include <windows.h>
#endif // OS

int main()
{
#if defined(WINDOWS)
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		DWORD consoleMode;
		GetConsoleMode(hConsole, &consoleMode);
		consoleMode |= 0x0004; // ENABLE_VIRTUAL_TERMINAL_PROCESSING
		consoleMode |= 0x0008; // DISABLE_NEWLINE_AUTO_RETURN
		SetConsoleMode(hConsole, consoleMode);
#endif
		std::string playerFirstName;
		std::string playerLastName;

		bool playGameChoice = true;

		print("Presenting...");
		print("Planet Nisha");
		print("");

		// Get user to input their first name.
		print("First Name: ", DARK_WHITE, false);

		playerFirstName = get_text(true);


		// Get user to input their last name.
		print("Last Name: ", DARK_WHITE, false);

		playerLastName = get_text(true);

		print("");
		print("Hello, " + playerFirstName + " " + playerLastName + "!");

		print("");
		print("Are you ready to play Planet Nisha? ");

		while (playGameChoice)
		{
				playGameChoice = yes_or_no();

				if (playGameChoice)
				{
						print("Let's begin.\n");

						start_story(playerFirstName, playerLastName); // Start game
				}
		}

		print("\nGame Over.", CYAN);
		print("");

		return 0;
}
