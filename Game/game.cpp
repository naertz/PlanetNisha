#include "print.h"
#include "story.h"
#include "user_input.h"
#include <iostream>

int main()
{
    std::string name;
    
    bool playGameChoice = true;
    
    print("Presenting...");
    print("Planet Nisha");
    print("");
    
    // Get user to input their name
    print("Name: ", DEFAULT, false);
    
    name = get_text(true);
    
    print("");
    print("Hello, " + name + "!");
    
    print("");
    print("Are you ready to play Planet Nisha? ");
    
    while (playGameChoice)
    {
        playGameChoice = yes_or_no();
        
        if (playGameChoice)
        {
            print("Let's begin.\n");
            start_story(); // Start game
        }
    }
    
    print("\nGame Over.", CYAN);
    print("");
    
    return 0;
}