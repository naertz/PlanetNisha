#include "Character.h"
#include "print.h"
#include "story.h"
#include "user_input.h"

#include <fstream>
#include <iostream>

int main()
{
    std::ofstream characterFile; // Output file stream for characters.txt
    
    std::string firstName;
    std::string lastName;
    
    bool playGameChoice = true;
    
    print("Presenting...");
    print("Planet Nisha");
    print("");
    
    // Get user to input their first name.
    print("First Name: ", DARK_WHITE, false);
    
    firstName = get_text(true);
    
    
    // Get user to input their last name.
    print("Last Name: ", DARK_WHITE, false);
    
    lastName = get_text(true);
    
    print("");
    print("Hello, " + firstName + " " + lastName + "!");
    
    print("");
    print("Are you ready to play Planet Nisha? ");
    
    while (playGameChoice)
    {
        playGameChoice = yes_or_no();
        
        if (playGameChoice)
        {
            print("Let's begin.\n");
            
            characterFile.open("characters.txt");
            if (!characterFile.is_open())
            {
                print("Could not create file characters.txt", DARK_RED, true);
            }
            
            characterFile << firstName << "|" << lastName << "|" << "Leader" << "|" << "95" << std::endl;
            
            start_story(); // Start game
        }
    }
    
    print("\nGame Over.", CYAN);
    print("");
    
    return 0;
}