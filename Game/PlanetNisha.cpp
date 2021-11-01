#include <iostream>
#include <sstream>
#include <vector>

// Prompt and get input.
void getDecision(std::string& iS)
{
    // Prompt for decision choice.
    std::cout << "Decision: " << std::flush;
    // Get line of input for string.
    std::getline(std::cin, iS);
}

// Remove leading and trailing spaces from string.
void removeLeadingAndTrailingSpaces(std::string& iS)
{
    // Declare character constant for whitespace.
    const char SPACE = ' ';
    
    // Declare integer constants for first and second character indexes.
    const int FIRST_CHAR = 0;
    const int SECOND_CHAR = 1;
    
    // Declare integer for last character index.
    int lastChar;
    
    // Execute while a space is found in the input.
    while (iS.find(SPACE) != std::string::npos)
    {   
        // Assign integer with current index of the last character in the string.
        lastChar = iS.size() - 1;
        
        // Determine if the space occurs at the beginning of the string.
        if (iS.find(SPACE) == FIRST_CHAR)
        {   
            // Assign string with the set of characters after the first space.
            iS = iS.substr(SECOND_CHAR, lastChar);
        }
        else // The space occurs after the beginning of the string.
        {
            // Assign string with the set of characters before the first space.
            iS = iS.substr(FIRST_CHAR, iS.find(SPACE));
        }
    }
}

// Determine if input is out of bounds.
bool isInputOutOfBounds(const int option, const int optionType)
{
    // Declare integer variables for acceptable option choices range.
    int firstChoice, lastChoice;
    
    // Determine if option type is for game event options or endgame choice.
    if (optionType == 0) // Game event options
    {
        firstChoice = 1;
        lastChoice = 3;
    }
    else // Endgame choice
    {
        firstChoice = 1;
        lastChoice = 2;
    }
    
    // Declare boolean for out of bounds result and initialize to false.
    bool outOfBounds = false;
    
    // Determine if input is out of bounds.
    if (option < firstChoice || option > lastChoice)
    {
        // Assign out of bounds boolean result to true.
        outOfBounds = true;
    }
    
    // Return boolean result.
    return outOfBounds;
}

// Validate input for game event options (optionType = 0) and endgame choice (optionType = 1).
int validateInput(const int optionType)
{
    // Option for game event choice.
    int option;
    
    // Input string stream and string for input validation.
    std::istringstream iSS;
    std::string iS;
    
    do
    {
        // Reset string stream state.
        iSS.clear();
        
        // Get decision choice.
        getDecision(iS);
        
        // Remove leading and trailing spaces from string. Pass string by reference.
        removeLeadingAndTrailingSpaces(iS);
        
        // Copy string to string buffer.
        iSS.str(iS);
        
        // Process string.
        iSS >> option;
        
        // Determine if input is invalid or out of bounds.
        if (iSS.fail()) // Invalid input
        {
            // Inform user of invalid input.
            std::cout << "Invalid Input: Enter one of the given integer values." << std::endl;
        }
        else if (isInputOutOfBounds(option, optionType)) // Out of bounds
        {
            // Determine the option type.
            if (optionType == 0) // Game event options
            {
                // Inform user of out of bounds game event options input.
                std::cout << "Invalid Input: Enter one of the given integer values (1, 2, 3)." << std::endl;
            }
            else // Endgame choice
            {
                // Inform user of out of bounds endgame choice input.
                std::cout << "Invalid Input: Enter one of the given integer values (1, 2)." << std::endl;
            }
        }
    }
    while (iSS.fail() || isInputOutOfBounds(option, optionType)); // Execute while input is invalid.
    
    // Return validated input.
    return option;
}

int main()
{
    // Option for game event choice.
    int option;
    // Stores past game event choices.
    std::vector<int> optionHistory;
    // Choice to continue game.
    int choice = 1;
    
    // Input string stream and string for input validation.
    std::istringstream iSS;
    std::string iS;
    
    // Declare string for game introduction.
    std::string gameIntroduction = "Presenting...\nPlanet Nisha";
    // Declare vectors of strings for storyline, game events, and presented choices.
    std::vector<std::string> gameStory;
    std::vector<std::string> gameEvent;
    std::vector<std::string> gameChoices;
    
    // Execute while user decides to continue program.
    while (choice != 2)
    {
        // Set first stage.
        gameStory.push_back("In this game, you have crashed into Nisha:\nthe planet that the government had funded for colonization.\nNobody knows why the crash accident happened,\nbut it appears that something smashed into the ship and pulled it inside orbit.\nThere were only five survivors: you (the leader), Engineer Ragnarok Javin,\nMedical Doctor Skylar Helen, Astronomist\nJoshua Trevis, and Biologist Leia Mist.\nNow, let's begin with the first event.");
        gameEvent.push_back("Event 1:\nYou and the other four survivors exit\nthe damaged ship and find that you and (luckily)\nthe medical doctor are the only ones that are uninjured. Unfortunately,\nmost of the medical supplies are either damaged or missing,\nand there are only enough supplies for two of the injured survivors.\nRead the following options, enter the corresponding number\nto your selected option, and press Enter.");
        gameChoices.push_back("1: Don't heal Engineer Ragnarok Javin's broken leg.\n2: Don't heal Astronomist Joshua Trevis's shrapnel wound (in his hand).\n3: Don't heal Biologist Leia Mist's burned face.");
        
        // Print first stage.
        std::cout << gameIntroduction << std::endl;
        std::cout << gameStory.at(0) << std::endl;
        std::cout << gameEvent.at(0) << std::endl;
        std::cout << gameChoices.at(0) << std::endl;
        
        // Get input.
        option = validateInput(0);
        
        // Set option history.
        optionHistory.push_back(option);
        
        // Print newline.
        std::cout << std::endl;
        
        // Determine next stage from past choices.
        if (optionHistory.at(0) == 1) // Choice(s): 1
        {
            // Set second stage.
            gameStory.push_back("Ouch! Engineer Ragnarok Javin will have\ntrouble making important tools and traveling from place to place.");
            gameEvent.push_back("Event 2:\nYou need to lead your group to a safe hideout, and you are given\nthe following options:");
            gameChoices.push_back("1: Stay at the ship and build your base from the remaining parts.\n2: Bring some valuable tools and materials from the ship\nto a cave you see nearby and build your base over there.\n3: Bring some valuable tools and materials from the ship\nand travel a large distance to find a less suspicious hideout.");
            
            // Print second stage.
            std::cout << gameStory.at(1) << std::endl;
            std::cout << gameEvent.at(1) << std::endl;
            std::cout << gameChoices.at(1) << std::endl;
            
            // Get input.
            option = validateInput(0);
        }
        else if (optionHistory.at(0) == 2) // Choice(s): 2
        {
            // Set second stage.
            gameStory.push_back("Ouch! Astronomist Joshua Trevis will have\ntrouble making calculations and using his hand for tools.");
            gameEvent.push_back("Event 2:\nYou need to lead your group to a safe hideout, and you are given\nthe following options:");
            gameChoices.push_back("1: Stay at the ship and build your base from the remaining parts.\n2: Bring some valuable tools and materials from the ship\nto a cave you see nearby and build your base over there.\n3: Bring some valuable tools and materials from the ship\nand travel a large distance to find a less suspicious hideout.");
            
            // Print second stage.
            std::cout << gameStory.at(1) << std::endl;
            std::cout << gameEvent.at(1) << std::endl;
            std::cout << gameChoices.at(1) << std::endl;
            
            // Get input.
            option = validateInput(0);
        }
        else if (optionHistory.at(0) == 3) // Choice(s): 3
        {
            // Set second stage.
            gameStory.push_back("Ouch! Biologist Leia Mist will have\ntrouble examining organisms and eating food for nourishment.");
            gameEvent.push_back("Event 2:\nYou need to lead your group to a safe hideout, and you are given\nthe following options:");
            gameChoices.push_back("1: Stay at the ship and build your base from the remaining parts.\n2: Bring some valuable tools and materials from the ship\nto a cave you see nearby and build your base over there.\n3: Bring some valuable tools and materials from the ship\nand travel a large distance to find a less suspicious hideout.");
            
            // Print second stage.
            std::cout << gameStory.at(1) << std::endl;
            std::cout << gameEvent.at(1) << std::endl;
            std::cout << gameChoices.at(1) << std::endl;
            
            // Get input.
            option = validateInput(0);
        }
        
        // Set option history.
        optionHistory.push_back(option);
        
        // Print newline.
        std::cout << std::endl;
        
        // Determine next stage from past choices.
        if (optionHistory.at(0) == 1 && optionHistory.at(1) == 1) // Choice(s): 1 1
        {
            // Set third stage.
            gameStory.push_back("You have avoided some dangerous encounters except for\na few aggressive creatures that tried to attack your\npeople. Luckily, your group has only suffered minor\ninjuries in the successful attempt to fight off\nthe small beasts. Because you made the decision to\nuse the ship's parts to construct the base,\nyou have to spend a lot of time gathering resources\nand crafting machinery, which will then create\nthe parts for the needed, new ship to travel back home\nand to other planets for colonization. Additionally,\n(Engineer) Ragnarok Javin had trouble creating a few\nunavailable tools that were needed to construct the\nbase; therefore, valuable time has been lost.");
            gameEvent.push_back("Event 3:\nYour base has been constructed, and your group now\nhas a place to revert back to to rest, to defend against\nattacks, and to improve upon to gain opportunities\nfrom new equipment and resources to fulfill vital\ngoals. Your group has to decide the next task\nto be completed on the second day on Nisha.\nYour following options are:");
            gameChoices.push_back("1: Gather resources for the base.\n2: Search for other signs of life.\n3: Focus on healing your people.");
            
            // Print third stage.
            std::cout << gameStory.at(2) << std::endl;
            std::cout << gameEvent.at(2) << std::endl;
            std::cout << gameChoices.at(2) << std::endl;
            
            // Get input.
            option = validateInput(0);
        }
        else if (optionHistory.at(0) == 1 && optionHistory.at(1) == 2) // Choice(s): 1 2
        {
            // Set third stage.
            gameStory.push_back("As your group built the base out of the materials\nfrom the cave, many aggressive beasts had been\nencountered. (Engineer) Ragnarok Javin had to\nremain inside the damaged ship due to this\nproblem and the other small beasts that were\nlurking around the ship. You and the others are\nnow moderately injured because it took a lot of\ntime to build a wall to prevent any more creatures\nfrom invading the construction site. The base has\nbeen constructed out of stone and iron, which\nmeans that the base will not be strong enough to\nwithstand some of the powerful blows being dealt by\na few beasts for more than a day or two.\nCurrently, your team is trying to kill the beasts\nwith poisonous gas to buy some time, but there\nmay be more beasts coming. (Engineer) Ragnarok\nJavin has been brought back to the base;\nadditionally, he had trouble creating a few\nunavailable tools that were needed for construction.\nTherefore, valuable time has been lost.");
            gameEvent.push_back("Event 3:\nYour base is in a great location despite the\nmaterials it's made of and the beasts that are\ntrying to invade it. You need to decide how to\nresolve the problem with the beasts, and you can\nchoose from the following options:");
            gameChoices.push_back("1: Construct primitive weapons to defend against the\nbeasts.\n2: Gather the fuel from the ship and set the beasts\non fire.\n3: Focus on healing your people to have more people\nto defend against the beasts.");
            
            // Print third stage.
            std::cout << gameStory.at(2) << std::endl;
            std::cout << gameEvent.at(2) << std::endl;
            std::cout << gameChoices.at(2) << std::endl;
            
            // Get input.
            option = validateInput(0);
        }
        else if (optionHistory.at(0) == 1 && optionHistory.at(1) == 3) // Choice(s): 1 3
        {
            // Set third stage.
            gameStory.push_back("In order to have done this safely, the group had\nto stealthily move to avoid attracting deadly\nbeasts. (Engineer) Ragnarok Javin needed to be\ndragged along on a sheet from a parachute from\nthe ship so he could travel with the rest of the\ngroup. It was late in the evening when (Astronomist)\nJoshua Trevis spotted an artificial light in the\ndistance, possibly coming from a tribe or\ncivilization of a sentient species. Two other\nplaces have been found and appear to be excellent\nbase locations.");
            gameEvent.push_back("Event 3:\nYour base still hasn't been constructed. You don't\neven have a camp! However, this is a time of great\nrisks, and you need to make wise decisions and hope\nfor the best. Your group is lucky to not have received\nmore injuries; but since you don't have a place to revert\nback to, don't expect your luck to succeed for long.\nYou now must make a decision among the following\noptions:");
            gameChoices.push_back("1: Head towards the light and hope that the species\nis friendly.\n2: Start constructing your base by the waterfall.\n3: Start constructing your base by the ocean.");
            
            // Print third stage.
            std::cout << gameStory.at(2) << std::endl;
            std::cout << gameEvent.at(2) << std::endl;
            std::cout << gameChoices.at(2) << std::endl;
            
            // Get input.
            option = validateInput(0);
        }
        else if (optionHistory.at(0) == 2 && optionHistory.at(1) == 1) // Choice(s): 2 1
        {
            // Set third stage.
            gameStory.push_back("You have avoided some dangerous encounters except for\na few aggressive creatures that tried to attack your\npeople. Luckily, your group has only suffered minor\ninjuries in the successful attempt to fight off\nthe small beasts. Because you made the decision to\nuse the ship's parts to construct the base,\nyou have to spend a lot of time gathering resources\nand crafting machinery, which will then create\nthe parts for the needed, new ship to travel back home\nand to other planets for colonization. Additionally,\n(Astronomist) Joshua Trevis struggled to help the\ngroup with constructing the base with his one, good\nhand; therefore, valuable time has been lost.");
            gameEvent.push_back("Event 3:\nYour base has been constructed, and your group now\nhas a place to revert back to to rest, to defend against\nattacks, and to improve upon to gain opportunities\nfrom new equipment and resources to fulfill vital\ngoals. Your group has to decide the next task\nto be completed on the second day on Nisha.\nYour following options are:");
            gameChoices.push_back("1: Gather resources for the base.\n2: Search for other signs of life.\n3: Focus on healing your people.");
            
            // Print third stage.
            std::cout << gameStory.at(2) << std::endl;
            std::cout << gameEvent.at(2) << std::endl;
            std::cout << gameChoices.at(2) << std::endl;
            
            // Get input.
            option = validateInput(0);
        }
        else if (optionHistory.at(0) == 2 && optionHistory.at(1) == 2) // Choice(s): 2 2
        {
            // Set third stage.
            gameStory.push_back("As your group built the base out of the materials\nfrom the cave, many aggressive beasts had been\nencountered. (Astronomist) Joshua Trevis had to\nremain inside the damaged ship due to this\nproblem and the other small beasts that were\nlurking around the ship. You and the others are\nnow moderately injured because it took a lot of\ntime to build a wall to prevent any more creatures\nfrom invading the construction site. The base has\nbeen constructed out of stone and iron, which\nmeans that the base will not be strong enough to\nwithstand some of the powerful blows being dealt by\na few beasts for more than a day or two.\nCurrently, your team is trying to kill the beasts\nwith poisonous gas to buy some time, but there\nmay be more beasts coming. (Astronomist) Joshua\nTrevis has been brought back to the base;\nadditionally, he was unable to start examining\nand discovering important information about\nPlanet Nisha and the group's location on\nthe planet. Therefore, the group has a\ndisadvantage in its situation.");
            gameEvent.push_back("Event 3:\nYour base is in a great location despite the\nmaterials it's made of and the beasts that are\ntrying to invade it. You need to decide how to\nresolve the problem with the beasts, and you can\nchoose from the following options:");
            gameChoices.push_back("1: Construct primitive weapons to defend against the\nbeasts.\n2: Gather the fuel from the ship and set the beasts\non fire.\n3: Focus on healing your people to have more people\nto defend against the beasts.");
            
            // Print third stage.
            std::cout << gameStory.at(2) << std::endl;
            std::cout << gameEvent.at(2) << std::endl;
            std::cout << gameChoices.at(2) << std::endl;
            
            // Get input.
            option = validateInput(0);
        }
        else if (optionHistory.at(0) == 2 && optionHistory.at(1) == 3) // Choice(s): 2 3
        {
            // Set third stage.
            gameStory.push_back("In order to have done this safely, the group had\nto stealthily move to avoid attracting deadly\nbeasts. It is a good thing you healed (Engineer)\nRagnarok Javin's leg because you already have to\nmake slow maneuvers. However, (Astronomist) Joshua\nTrevis is struggling to handle his tools to help\nthe group find the best places to go. Finally,\nhe managed to discover three important locations.\nHe spotted an artificial light in the\ndistance, possibly coming from a tribe or\ncivilization of a sentient species. The other\ntwo places that were discovered appear to be excellent\nbase locations.");
            gameEvent.push_back("Event 3:\nYour base still hasn't been constructed. You don't\neven have a camp! However, this is a time of great\nrisks, and you need to make wise decisions and hope\nfor the best. Your group is lucky to not have received\nmore injuries; but since you don't have a place to revert\nback to, don't expect your luck to succeed for long.\nYou now must make a decision among the following\noptions:");
            gameChoices.push_back("1: Head towards the light and hope that the species\nis friendly.\n2: Start constructing your base by the waterfall.\n3: Start constructing your base by the ocean.");
            
            // Print third stage.
            std::cout << gameStory.at(2) << std::endl;
            std::cout << gameEvent.at(2) << std::endl;
            std::cout << gameChoices.at(2) << std::endl;
            
            // Get input.
            option = validateInput(0);
        }
        else if (optionHistory.at(0) == 3 && optionHistory.at(1) == 1) // Choice(s): 3 1
        {
            // Set third stage.
            gameStory.push_back("You have avoided some dangerous encounters except for\na few aggressive creatures that tried to attack your\npeople. Luckily, your group has only suffered minor\ninjuries in the successful attempt to fight off\nthe small beasts. Because you made the decision to\nuse the ship's parts to construct the base,\nyou have to spend a lot of time gathering resources\nand crafting machinery, which will then create\nthe parts for the needed, new ship to travel back home\nand to other planets for colonization. Additionally,\n(Biologist) Leia Mist couldn't offer much help for\nconstructing the base, and she couldn't find food\nin the meantime because of her burns. Because she\nwould have only helped for some tasks but could have\ngathered food, some valuable time was lost and there\nwas a lost of food that could have potentially been\navailable.");
            gameEvent.push_back("Event 3:\nYour base has been constructed, and your group now\nhas a place to revert back to to rest, to defend against\nattacks, and to improve upon to gain opportunities\nfrom new equipment and resources to fulfill vital\ngoals. Your group has to decide the next task\nto be completed on the second day on Nisha.\nYour following options are:");
            gameChoices.push_back("1: Gather resources for the base.\n2: Search for other signs of life.\n3: Focus on healing your people.");
            
            // Print third stage.
            std::cout << gameStory.at(2) << std::endl;
            std::cout << gameEvent.at(2) << std::endl;
            std::cout << gameChoices.at(2) << std::endl;
            
            // Get input.
            option = validateInput(0);
        }
        else if (optionHistory.at(0) == 3 && optionHistory.at(1) == 2) // Choice(s): 3 2
        {
            // Set third stage.
            gameStory.push_back("As your group built the base out of the materials\nfrom the cave, many aggressive beasts had been\nencountered. (Biologist) Leia Mist had to\nremain inside the damaged ship due to this\nproblem and the other small beasts that were\nlurking around the ship. You and the others are\nnow moderately injured because it took a lot of\ntime to build a wall to prevent any more creatures\nfrom invading the construction site. The base has\nbeen constructed out of stone and iron, which\nmeans that the base will not be strong enough to\nwithstand some of the powerful blows being dealt by\na few beasts for more than a day or two.\nCurrently, your team is trying to kill the beasts\nwith poisonous gas to buy some time, but there\nmay be more beasts coming. (Biologist) Leia\nMist has been brought back to the base;\nadditionally, she still hasn't recovered enough\nto examine organisms and to find edible food.\nThe amount of food is depleting, and the group\nwill begin to starve if nothing is done soon.");
            gameEvent.push_back("Event 3:\nYour base is in a great location despite the\nmaterials it's made of and the beasts that are\ntrying to invade it. You need to decide how to\nresolve the problem with the beasts, and you can\nchoose from the following options:");
            gameChoices.push_back("1: Construct primitive weapons to defend against the\nbeasts.\n2: Gather the fuel from the ship and set the beasts\non fire.\n3: Focus on healing your people to have more people\nto defend against the beasts. Once (Biologist) Leia\nMist has healed, direct her towards finding food that\nis safe to eat.");
            
            // Print third stage.
            std::cout << gameStory.at(2) << std::endl;
            std::cout << gameEvent.at(2) << std::endl;
            std::cout << gameChoices.at(2) << std::endl;
            
            // Get input.
            option = validateInput(0);
        }
        else if (optionHistory.at(0) == 3 && optionHistory.at(1) == 3) // Choice(s): 3 3
        {
            // Set third stage.
            gameStory.push_back("In order to have done this safely, the group had\nto stealthily move to avoid attracting deadly\nbeasts. (Biologist) Leia Mist still hasn't\nrecovered from her burns; unfortunately, this\ncould have been the perfect time to examine\ndifferent species and figure out which ones\nare safe to eat. Nevertheless, the group was\nable to move more swiftly because (Engineer)\nRagnarok Javin and (Astronomist) Joshua Trevis\nreceived treatment from the medical supplies.\nIn the afternoon, (Astronomist) Joshua Trevis\nspotted an artificial light in the\ndistance, possibly coming from a tribe or\ncivilization of a sentient species. Two other\nplaces have been found and appear to be excellent\nbase locations.");
            gameEvent.push_back("Event 3:\nYour base still hasn't been constructed. You don't\neven have a camp! However, this is a time of great\nrisks, and you need to make wise decisions and hope\nfor the best. Your group is lucky to not have received\nmore injuries; but since you don't have a place to revert\nback to, don't expect your luck to succeed for long.\nRemember, you're running out of food, and it won't be\nlong before your group needs to make desperate decisions\nto find nutrition and fuel for their bodies.\nYou now must make a decision among the following\noptions:");
            gameChoices.push_back("1: Head towards the light and hope that the species\nis friendly.\n2: Start constructing your base by the waterfall.\n3: Start constructing your base by the ocean.");
            
            // Print third stage.
            std::cout << gameStory.at(2) << std::endl;
            std::cout << gameEvent.at(2) << std::endl;
            std::cout << gameChoices.at(2) << std::endl;
            
            // Get input.
            option = validateInput(0);
        }
        
        // Set option history.
        optionHistory.push_back(option);
        
        // Print newline.
        std::cout << std::endl;
        
        // Determine next stage from past choices.
        if (optionHistory.at(0) == 1 && optionHistory.at(1) == 1 && optionHistory.at(2) == 1) // Choice(s): 1 1 1
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 1 && optionHistory.at(1) == 1 && optionHistory.at(2) == 2) // Choice(s): 1 1 2
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 1 && optionHistory.at(1) == 1 && optionHistory.at(2) == 3) // Choice(s): 1 1 3
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 1 && optionHistory.at(1) == 2 && optionHistory.at(2) == 1) // Choice(s): 1 2 1
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 1 && optionHistory.at(1) == 2 && optionHistory.at(2) == 2) // Choice(s): 1 2 2
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 1 && optionHistory.at(1) == 2 && optionHistory.at(2) == 3) // Choice(s): 1 2 3
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 1 && optionHistory.at(1) == 3 && optionHistory.at(2) == 1) // Choice(s): 1 3 1
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 1 && optionHistory.at(1) == 3 && optionHistory.at(2) == 2) // Choice(s): 1 3 2
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 1 && optionHistory.at(1) == 3 && optionHistory.at(2) == 3) // Choice(s): 1 3 3
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 2 && optionHistory.at(1) == 1 && optionHistory.at(2) == 1) // Choice(s): 2 1 1
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 2 && optionHistory.at(1) == 1 && optionHistory.at(2) == 2) // Choice(s): 2 1 2
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 2 && optionHistory.at(1) == 1 && optionHistory.at(2) == 3) // Choice(s): 2 1 3
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 2 && optionHistory.at(1) == 2 && optionHistory.at(2) == 1) // Choice(s): 2 2 1
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 2 && optionHistory.at(1) == 2 && optionHistory.at(2) == 2) // Choice(s): 2 2 2
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 2 && optionHistory.at(1) == 2 && optionHistory.at(2) == 3) // Choice(s): 2 2 3
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 2 && optionHistory.at(1) == 3 && optionHistory.at(2) == 1) // Choice(s): 2 3 1
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 2 && optionHistory.at(1) == 3 && optionHistory.at(2) == 2) // Choice(s): 2 3 2
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 2 && optionHistory.at(1) == 3 && optionHistory.at(2) == 3) // Choice(s): 2 3 3
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 3 && optionHistory.at(1) == 1 && optionHistory.at(2) == 1) // Choice(s): 3 1 1
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 3 && optionHistory.at(1) == 1 && optionHistory.at(2) == 2) // Choice(s): 3 1 2
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 3 && optionHistory.at(1) == 1 && optionHistory.at(2) == 3) // Choice(s): 3 1 3
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 3 && optionHistory.at(1) == 2 && optionHistory.at(2) == 1) // Choice(s): 3 2 1
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 3 && optionHistory.at(1) == 2 && optionHistory.at(2) == 2) // Choice(s): 3 2 2
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 3 && optionHistory.at(1) == 2 && optionHistory.at(2) == 3) // Choice(s): 3 2 3
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 3 && optionHistory.at(1) == 3 && optionHistory.at(2) == 1) // Choice(s): 3 3 1
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 3 && optionHistory.at(1) == 3 && optionHistory.at(2) == 2) // Choice(s): 3 3 2
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        else if (optionHistory.at(0) == 3 && optionHistory.at(1) == 3 && optionHistory.at(2) == 3) // Choice(s): 3 3 3
        {
            // Set fourth stage.
            gameStory.push_back("To be continued.");
            gameEvent.push_back("Game Over.");
            gameChoices.push_back("Press 1 to play again or 2 to terminate the program:");
            
            // Print fourth stage.
            std::cout << gameStory.at(3) << std::endl;
            std::cout << gameEvent.at(3) << std::endl;
            std::cout << gameChoices.at(3) << std::endl;
            
            // Get input.
            choice = validateInput(1);
        }
        
        // Print newline.
        std::cout << std::endl;
        
        // Reset/wipe vectors.
        gameStory.clear();
        gameEvent.clear();
        gameChoices.clear();
        optionHistory.clear();
    }
    
    // Exit program successfully.
    return 0;
}
