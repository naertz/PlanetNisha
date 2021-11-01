#include "Character.h"
#include "print.h"
#include "story.h"
#include "user_input.h"

#include <fstream>
#include <iostream>

int main()
{
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