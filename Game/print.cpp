#include "print.h"

#include <iostream>
#include <string>

void print(std::string text, std::string textColour, bool newLine)
{
    // print text with ANSI colour codes:

    if (textColour == "red")
    {
        std::cout << "\033[1;31m" << std::flush;
    }
    else if (textColour == "green")
    {
        std::cout << "\033[1;32m" << std::flush;
    }
    else if (textColour == "yellow")
    {
        std::cout << "\033[1;33m" << std::flush;
    }
    else if (textColour == "blue")
    {
        std::cout << "\033[1;34m" << std::flush;
    }
    else if (textColour == "magenta")
    {
        std::cout << "\033[1;35m" << std::flush;
    }
    else if (textColour == "cyan")
    {
        std::cout << "\033[1;36m" << std::flush;
    }
    else if (textColour == "brown")
    {
        std::cout << "\033[1;94m" << std::flush;
    }
    else
    {
        std::cout << "\033[1;0m" << std::flush;
    }

    if (newLine)
    {
        text += "\n";
    }
    
    std::cout << text.c_str() << std::flush;

    std::cout << "\033[1;0m" << std::flush;
}