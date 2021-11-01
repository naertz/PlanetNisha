#include "print.h"

#include <iostream>
#include <string>

void print(std::string text, text_color textColor, bool newLine)
{
    // print text with ANSI colour codes:
    
    switch (textColor)
    {
        case BLACK:
        {
            std::cout << "\033[0;30m" << std::flush;
            break;
        }
        case DARK_RED:
        {
            std::cout << "\033[0;31m" << std::flush;
            break;
        }
        case DARK_GREEN:
        {
            std::cout << "\033[0;32m" << std::flush;
            break;
        }
        case DARK_YELLOW:
        {
            std::cout << "\033[0;33m" << std::flush;
            break;
        }
        case DARK_BLUE:
        {
            std::cout << "\033[0;34m" << std::flush;
            break;
        }
        case DARK_MAGENTA:
        {
            std::cout << "\033[0;35m" << std::flush;
            break;
        }
        case DARK_CYAN:
        {
            std::cout << "\033[0;36m" << std::flush;
            break;
        }
        case DARK_WHITE:
        {
            std::cout << "\033[0;37m" << std::flush;
            break;
        }
        case GRAY:
        {
            std::cout << "\033[1;30m" << std::flush;
            break;
        }
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
        case WHITE:
        {
            std::cout << "\033[1;37m" << std::flush;
            break;
        }
        default:
        {
            std::cout << "\033[0;37m" << std::flush;
            break;
        }
    }

    if (newLine)
    {
        text += "\n";
    }
    
    std::cout << text.c_str() << std::flush;

    std::cout << "\033[0;37m" << std::flush;
}