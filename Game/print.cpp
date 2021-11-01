#include "print.h"

#include <iostream>
#include <string>

void print(std::string text, text_color textColor, bool newLine)
{
    // print text with ANSI colour codes:
    
    switch (textColor)
    {
        case RED:
        {
            std::cout << "\033[1;31m" << std::flush;
            break;
        }
        case GREEN:
        {
            std::cout << "\033[1;32m" << std::flush;
            break;
        }
        case YELLOW:
        {
            std::cout << "\033[1;33m" << std::flush;
            break;
        }
        case BLUE:
        {
            std::cout << "\033[1;34m" << std::flush;
            break;
        }
        case MAGENTA:
        {
            std::cout << "\033[1;35m" << std::flush;
            break;
        }
        case CYAN:
        {
            std::cout << "\033[1;36m" << std::flush;
            break;
        }
        case BROWN:
        {
            std::cout << "\033[1;94m" << std::flush;
            break;
        }
        default:
        {
            std::cout << "\033[1;0m" << std::flush;
            break;
        }
    }

    if (newLine)
    {
        text += "\n";
    }
    
    std::cout << text.c_str() << std::flush;

    std::cout << "\033[1;0m" << std::flush;
}