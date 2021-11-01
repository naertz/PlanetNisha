#ifndef PRINT_H
#define PRINT_H

#if defined(_WIN32) || defined(_WIN64)
#define WINDOWS
#elif defined(__unix__) || defined(__APPLE__) || defined(__MACH__)
#define NIX
#else
#define UNKNOWN
#endif // OS Definitions

#include <string>

enum text_color { BLACK, DARK_RED, DARK_GREEN, DARK_YELLOW, DARK_BLUE, DARK_MAGENTA, DARK_CYAN, DARK_WHITE, GRAY, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE };

void print(std::string text = "", text_color textColor = DARK_WHITE, bool newLine=true);

#endif // PRINT_H
