#ifndef PRINT_H
#define PRINT_H

#include <string>

enum text_color { RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, BROWN, DEFAULT };

void print(std::string text = "", text_color textColor = DEFAULT, bool newLine=true);

#endif // PRINT_H