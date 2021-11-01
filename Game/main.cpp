#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int option;
    int choice;
    redo0:cout << "Presenting..." << endl;
    cout << "Planet Nisha" << endl;
    cout << "In this game, you have crashed into Nisha:" << endl;
    cout << "the planet that the government had funded for colonization." << endl;
    cout << "Nobody knows why the crash accident happened," << endl;
    cout << "but it appears that something smashed into the ship and pulled it inside orbit." << endl;
    cout << "There were only five survivors: you (the leader), Engineer Ragnarok Javin," << endl;
    cout << "Medical Doctor Skylar Helen, Astronomist" << endl;
    cout << "Joshua Trevis, and Biologist Leia Mist." << endl;
    cout << "Now, let's begin with the first event." << endl;
    cout << "Event 1:" << endl;
    cout << "You and the other four survivors exit" << endl;
    cout << "the damaged ship and find that you and (luckily)" << endl;
    cout << "the medical doctor are the only ones that are uninjured. Unfortunately," << endl;
    cout << "most of the medical supplies are either damaged or missing," << endl;
    cout << "and there are only enough supplies for two of the injured survivors." << endl;
    cout << "Read the following options, enter the corresponding number" << endl;
    cout << "to your selected option, and press Enter." << endl;
    cout << "1: Don't heal Engineer Ragnarok Javin's broken leg." << endl;
    cout << "2: Don't heal Astronomist Joshua Trevis's shrapnel wound (in his hand)." << endl;
    cout << "3: Don't heal Biologist Leia Mist's burned face." << endl;
    cout << "Decision: ";
    redo1:cin >> option;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\n";
    if (option == 1)
    {
        cout << "Ouch! Engineer Ragnarok Javin will have" << endl;
        cout << "trouble making important tools and traveling from place to place." << endl;
        cout << "Event 2:" << endl;
        cout << "You need to lead your group to a safe hideout, and you are given" << endl;
        cout << "the following options:" << endl;
        cout << "1: Stay at the ship and build your base from the remaining parts." << endl;
        cout << "2: Bring some valuable tools and materials from the ship" << endl;
        cout << "to a cave you see nearby and build your base over there." << endl;
        cout << "3: Bring some valuable tools and materials from the ship" << endl;
        cout << "and travel a large distance to find a less suspicious hideout." << endl;
        cout << "Decision: ";
        redo2:cin >> option;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n";
        if (option == 1)
        {
            cout << "You have avoided some dangerous encounters except for" << endl;
            cout << "a few aggressive creatures that tried to attack your" << endl;
            cout << "people. Luckily, your group has only suffered minor" << endl;
            cout << "injuries in the successful attempt to fight off" << endl;
            cout << "the small beasts. Because you made the decision to" << endl;
            cout << "use the ship's parts to construct the base," << endl;
            cout << "you have to spend a lot of time gathering resources" << endl;
            cout << "and crafting machinery, which will then create" << endl;
            cout << "the parts for the needed, new ship to travel back home" << endl;
            cout << "and to other planets for colonization. Additionally," << endl;
            cout << "(Engineer) Ragnarok Javin had trouble creating a few" << endl;
            cout << "unavailable tools that were needed to construct the" << endl;
            cout << "base; therefore, valuable time has been lost." << endl;
            cout << "Event 3:" << endl;
            cout << "Your base has been constructed, and your group now" << endl;
            cout << "has a place to revert back to to rest, to defend against" << endl;
            cout << "attacks, and to improve upon to gain opportunities" << endl;
            cout << "from new equipment and resources to fulfill vital" << endl;
            cout << "goals. Your group has to decide the next task" << endl;
            cout << "to be completed on the second day on Nisha." << endl;
            cout << "Your following options are:" << endl;
            cout << "1: Gather resources for the base." << endl;
            cout << "2: Search for other signs of life." << endl;
            cout << "3: Focus on healing your people." << endl;
            cout << "Decision: ";
            redo5:cin >> option;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\n";
            if (option == 1)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend1:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend1;
                }
            }
            else if (option == 2)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend2:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend2;
                }
            }
            else if (option == 3)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend3:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend3;
                }
            }
            else
            {
                cout << "Invalid Input: Enter one of the given integer values: ";
                goto redo5;
            }
        }
        else if (option == 2)
        {
            cout << "As your group built the base out of the materials" << endl;
            cout << "from the cave, many aggressive beasts had been" << endl;
            cout << "encountered. (Engineer) Ragnarok Javin had to" << endl;
            cout << "remain inside the damaged ship due to this" << endl;
            cout << "problem and the other small beasts that were" << endl;
            cout << "lurking around the ship. You and the others are" << endl;
            cout << "now moderately injured because it took a lot of" << endl;
            cout << "time to build a wall to prevent any more creatures" << endl;
            cout << "from invading the construction site. The base has" << endl;
            cout << "been constructed out of stone and iron, which" << endl;
            cout << "means that the base will not be strong enough to" << endl;
            cout << "withstand some of the powerful blows being dealt by" << endl;
            cout << "a few beasts for more than a day or two." << endl;
            cout << "Currently, your team is trying to kill the beasts" << endl;
            cout << "with poisonous gas to buy some time, but there" << endl;
            cout << "may be more beasts coming. (Engineer) Ragnarok" << endl;
            cout << "Javin has been brought back to the base;" << endl;
            cout << "additionally, he had trouble creating a few" << endl;
            cout << "unavailable tools that were needed for construction." << endl;
            cout << "Therefore, valuable time has been lost." << endl;
            cout << "Event 3:" << endl;
            cout << "Your base is in a great location despite the" << endl;
            cout << "materials it's made of and the beasts that are" << endl;
            cout << "trying to invade it. You need to decide how to" << endl;
            cout << "resolve the problem with the beasts, and you can" << endl;
            cout << "choose from the following options:" << endl;
            cout << "1: Construct primitive weapons to defend against the" << endl;
            cout << "beasts." << endl;
            cout << "2: Gather the fuel from the ship and set the beasts" << endl;
            cout << "on fire." << endl;
            cout << "3: Focus on healing your people to have more people" << endl;
            cout << "to defend against the beasts." << endl;
            cout << "Decision: ";
            redo6:cin >> option;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\n";
            if (option == 1)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend4:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend4;
                }
            }
            else if (option == 2)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend5:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend5;
                }
            }
            else if (option == 3)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend6:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend6;
                }
            }
            else
            {
                cout << "Invalid Input: Enter one of the given integer values: ";
                goto redo6;
            }
        }
        else if (option == 3)
        {
            cout << "In order to have done this safely, the group had" << endl;
            cout << "to stealthily move to avoid attracting deadly" << endl;
            cout << "beasts. (Engineer) Ragnarok Javin needed to be" << endl;
            cout << "dragged along on a sheet from a parachute from" << endl;
            cout << "the ship so he could travel with the rest of the" << endl;
            cout << "group. It was late in the evening when (Astronomist)" << endl;
            cout << "Joshua Trevis spotted an artificial light in the" << endl;
            cout << "distance, possibly coming from a tribe or" << endl;
            cout << "civilization of a sentient species. Two other" << endl;
            cout << "places have been found and appear to be excellent" << endl;
            cout << "base locations." << endl;
            cout << "Event 3:" << endl;
            cout << "Your base still hasn't been constructed. You don't" << endl;
            cout << "even have a camp! However, this is a time of great" << endl;
            cout << "risks, and you need to make wise decisions and hope" << endl;
            cout << "for the best. Your group is lucky to not have received" << endl;
            cout << "more injuries; but since you don't have a place to revert" << endl;
            cout << "back to, don't expect your luck to succeed for long." << endl;
            cout << "You now must make a decision among the following" << endl;
            cout << "options:" << endl;
            cout << "1: Head towards the light and hope that the species" << endl;
            cout << "is friendly." << endl;
            cout << "2: Start constructing your base by the waterfall." << endl;
            cout << "3: Start constructing your base by the ocean." << endl;
            cout << "Decision: ";
            redo7:cin >> option;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\n";
            if (option == 1)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend7:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend7;
                }
            }
            else if (option == 2)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend8:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend8;
                }
            }
            else if (option == 3)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend9:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend9;
                }
            }
            else
            {
                cout << "Invalid Input: Enter one of the given integer values: ";
                goto redo7;
            }
        }
        else
        {
            cout << "Invalid Input: Enter one of the given integer values: ";
            goto redo2;
        }
    }
    else if (option == 2)
    {
        cout << "Ouch! Astronomist Joshua Trevis will have" << endl;
        cout << "trouble making calculations and using his hand for tools." << endl;
        cout << "Event 2:" << endl;
        cout << "You need to lead your group to a safe hideout, and you are given" << endl;
        cout << "the following options:" << endl;
        cout << "1: Stay at the ship and build your base from the remaining parts." << endl;
        cout << "2: Bring some valuable tools and materials from the ship" << endl;
        cout << "to a cave you see nearby and build your base over there." << endl;
        cout << "3: Bring some valuable tools and materials from the ship" << endl;
        cout << "and travel a large distance to find a less suspicious hideout." << endl;
        cout << "Decision: ";
        redo3:cin >> option;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n";
        if (option == 1)
        {
            cout << "You have avoided some dangerous encounters except for" << endl;
            cout << "a few aggressive creatures that tried to attack your" << endl;
            cout << "people. Luckily, your group has only suffered minor" << endl;
            cout << "injuries in the successful attempt to fight off" << endl;
            cout << "the small beasts. Because you made the decision to" << endl;
            cout << "use the ship's parts to construct the base," << endl;
            cout << "you have to spend a lot of time gathering resources" << endl;
            cout << "and crafting machinery, which will then create" << endl;
            cout << "the parts for the needed, new ship to travel back home" << endl;
            cout << "and to other planets for colonization. Additionally," << endl;
            cout << "(Astronomist) Joshua Trevis struggled to help the" << endl;
            cout << "group with constructing the base with his one, good" << endl;
            cout << "hand; therefore, valuable time has been lost." << endl;
            cout << "Event 3:" << endl;
            cout << "Your base has been constructed, and your group now" << endl;
            cout << "has a place to revert back to to rest, to defend against" << endl;
            cout << "attacks, and to improve upon to gain opportunities" << endl;
            cout << "from new equipment and resources to fulfill vital" << endl;
            cout << "goals. Your group has to decide the next task" << endl;
            cout << "to be completed on the second day on Nisha." << endl;
            cout << "Your following options are:" << endl;
            cout << "1: Gather resources for the base." << endl;
            cout << "2: Search for other signs of life." << endl;
            cout << "3: Focus on healing your people." << endl;
            cout << "Decision: ";
            redo8:cin >> option;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\n";
            if (option == 1)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend10:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend10;
                }
            }
            else if (option == 2)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend11:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend11;
                }
            }
            else if (option == 3)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend12:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend12;
                }
            }
            else
            {
                cout << "Invalid Input: Enter one of the given integer values: ";
                goto redo8;
            }
        }
        else if (option == 2)
        {
            cout << "As your group built the base out of the materials" << endl;
            cout << "from the cave, many aggressive beasts had been" << endl;
            cout << "encountered. (Astronomist) Joshua Trevis had to" << endl;
            cout << "remain inside the damaged ship due to this" << endl;
            cout << "problem and the other small beasts that were" << endl;
            cout << "lurking around the ship. You and the others are" << endl;
            cout << "now moderately injured because it took a lot of" << endl;
            cout << "time to build a wall to prevent any more creatures" << endl;
            cout << "from invading the construction site. The base has" << endl;
            cout << "been constructed out of stone and iron, which" << endl;
            cout << "means that the base will not be strong enough to" << endl;
            cout << "withstand some of the powerful blows being dealt by" << endl;
            cout << "a few beasts for more than a day or two." << endl;
            cout << "Currently, your team is trying to kill the beasts" << endl;
            cout << "with poisonous gas to buy some time, but there" << endl;
            cout << "may be more beasts coming. (Astronomist) Joshua" << endl;
            cout << "Trevis has been brought back to the base;" << endl;
            cout << "additionally, he was unable to start examining" << endl;
            cout << "and discovering important information about" << endl;
            cout << "Planet Nisha and the group's location on" << endl;
            cout << "the planet. Therefore, the group has a" << endl;
            cout << "disadvantage in its situation." << endl;
            cout << "Event 3:" << endl;
            cout << "Your base is in a great location despite the" << endl;
            cout << "materials it's made of and the beasts that are" << endl;
            cout << "trying to invade it. You need to decide how to" << endl;
            cout << "resolve the problem with the beasts, and you can" << endl;
            cout << "choose from the following options:" << endl;
            cout << "1: Construct primitive weapons to defend against the" << endl;
            cout << "beasts." << endl;
            cout << "2: Gather the fuel from the ship and set the beasts" << endl;
            cout << "on fire." << endl;
            cout << "3: Focus on healing your people to have more people" << endl;
            cout << "to defend against the beasts." << endl;
            cout << "Decision: ";
            redo9:cin >> option;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\n";
            if (option == 1)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend13:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend13;
                }
            }
            else if (option == 2)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend14:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend14;
                }
            }
            else if (option == 3)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend15:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend15;
                }
            }
            else
            {
                cout << "Invalid Input: Enter one of the given integer values: ";
                goto redo9;
            }
        }
        else if (option == 3)
        {
            cout << "In order to have done this safely, the group had" << endl;
            cout << "to stealthily move to avoid attracting deadly" << endl;
            cout << "beasts. It is a good thing you healed (Engineer)" << endl;
            cout << "Ragnarok Javin's leg because you already have to" << endl;
            cout << "make slow maneuvers. However, (Astronomist) Joshua" << endl;
            cout << "Trevis is struggling to handle his tools to help" << endl;
            cout << "the group find the best places to go. Finally," << endl;
            cout << "he managed to discover three important locations." << endl;
            cout << "He spotted an artificial light in the" << endl;
            cout << "distance, possibly coming from a tribe or" << endl;
            cout << "civilization of a sentient species. The other" << endl;
            cout << "two places that were discovered appear to be excellent" << endl;
            cout << "base locations." << endl;
            cout << "Event 3:" << endl;
            cout << "Your base still hasn't been constructed. You don't" << endl;
            cout << "even have a camp! However, this is a time of great" << endl;
            cout << "risks, and you need to make wise decisions and hope" << endl;
            cout << "for the best. Your group is lucky to not have received" << endl;
            cout << "more injuries; but since you don't have a place to revert" << endl;
            cout << "back to, don't expect your luck to succeed for long." << endl;
            cout << "You now must make a decision among the following" << endl;
            cout << "options:" << endl;
            cout << "1: Head towards the light and hope that the species" << endl;
            cout << "is friendly." << endl;
            cout << "2: Start constructing your base by the waterfall." << endl;
            cout << "3: Start constructing your base by the ocean." << endl;
            cout << "Decision: ";
            redo10:cin >> option;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\n";
            if (option == 1)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend16:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend16;
                }
            }
            else if (option == 2)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend17:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend17;
                }
            }
            else if (option == 3)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend18:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend18;
                }
            }
            else
            {
                cout << "Invalid Input: Enter one of the given integer values: ";
                goto redo10;
            }
        }
        else
        {
            cout << "Invalid Input: Enter one of the given integer values: ";
            goto redo3;
        }
    }
    else if (option == 3)
    {
        cout << "Ouch! Biologist Leia Mist will have" << endl;
        cout << "trouble examining organisms and eating food for nourishment." << endl;
        cout << "Event 2:" << endl;
        cout << "You need to lead your group to a safe hideout, and you are given" << endl;
        cout << "the following options:" << endl;
        cout << "1: Stay at the ship and build your base from the remaining parts." << endl;
        cout << "2: Bring some valuable tools and materials from the ship" << endl;
        cout << "to a cave you see nearby and build your base over there." << endl;
        cout << "3: Bring some valuable tools and materials from the ship" << endl;
        cout << "and travel a large distance to find a less suspicious hideout." << endl;
        cout << "Decision: ";
        redo4:cin >> option;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n";
        if (option == 1)
        {
            cout << "You have avoided some dangerous encounters except for" << endl;
            cout << "a few aggressive creatures that tried to attack your" << endl;
            cout << "people. Luckily, your group has only suffered minor" << endl;
            cout << "injuries in the successful attempt to fight off" << endl;
            cout << "the small beasts. Because you made the decision to" << endl;
            cout << "use the ship's parts to construct the base," << endl;
            cout << "you have to spend a lot of time gathering resources" << endl;
            cout << "and crafting machinery, which will then create" << endl;
            cout << "the parts for the needed, new ship to travel back home" << endl;
            cout << "and to other planets for colonization. Additionally," << endl;
            cout << "(Biologist) Leia Mist couldn't offer much help for" << endl;
            cout << "constructing the base, and she couldn't find food" << endl;
            cout << "in the meantime because of her burns. Because she" << endl;
            cout << "would have only helped for some tasks but could have" << endl;
            cout << "gathered food, some valuable time was lost and there" << endl;
            cout << "was a lost of food that could have potentially been" << endl;
            cout << "available." << endl;
            cout << "Event 3:" << endl;
            cout << "Your base has been constructed, and your group now" << endl;
            cout << "has a place to revert back to rest, to defend against" << endl;
            cout << "attacks, and to improve upon to gain opportunities" << endl;
            cout << "from new equipment and resources to fulfill vital" << endl;
            cout << "goals. Your group has to decide the next task" << endl;
            cout << "to be completed on the second day on Nisha." << endl;
            cout << "Your following options are:" << endl;
            cout << "1: Gather resources for the base." << endl;
            cout << "2: Search for other signs of life." << endl;
            cout << "3: Focus on healing your people." << endl;
            cout << "Decision: ";
            redo11:cin >> option;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\n";
            if (option == 1)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend19:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend19;
                }
            }
            else if (option == 2)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend20:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend20;
                }
            }
            else if (option == 3)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend21:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend21;
                }
            }
            else
            {
                cout << "Invalid Input: Enter one of the given integer values: ";
                goto redo11;
            }
        }
        else if (option == 2)
        {
            cout << "As your group built the base out of the materials" << endl;
            cout << "from the cave, many aggressive beasts had been" << endl;
            cout << "encountered. (Biologist) Leia Mist had to" << endl;
            cout << "remain inside the damaged ship due to this" << endl;
            cout << "problem and the other small beasts that were" << endl;
            cout << "lurking around the ship. You and the others are" << endl;
            cout << "now moderately injured because it took a lot of" << endl;
            cout << "time to build a wall to prevent any more creatures" << endl;
            cout << "from invading the construction site. The base has" << endl;
            cout << "been constructed out of stone and iron, which" << endl;
            cout << "means that the base will not be strong enough to" << endl;
            cout << "withstand some of the powerful blows being dealt by" << endl;
            cout << "a few beasts for more than a day or two." << endl;
            cout << "Currently, your team is trying to kill the beasts" << endl;
            cout << "with poisonous gas to buy some time, but there" << endl;
            cout << "may be more beasts coming. (Biologist) Leia" << endl;
            cout << "Mist has been brought back to the base;" << endl;
            cout << "additionally, she still hasn't recovered enough" << endl;
            cout << "to examine organisms and to find edible food." << endl;
            cout << "The amount of food is depleting, and the group" << endl;
            cout << "will begin to starve if nothing is done soon." << endl;
            cout << "Event 3:" << endl;
            cout << "Your base is in a great location despite the" << endl;
            cout << "materials it's made of and the beasts that are" << endl;
            cout << "trying to invade it. You need to decide how to" << endl;
            cout << "resolve the problem with the beasts, and you can" << endl;
            cout << "choose from the following options:" << endl;
            cout << "1: Construct primitive weapons to defend against the" << endl;
            cout << "beasts." << endl;
            cout << "2: Gather the fuel from the ship and set the beasts" << endl;
            cout << "on fire." << endl;
            cout << "3: Focus on healing your people to have more people" << endl;
            cout << "to defend against the beasts. Once (Biologist) Leia" << endl;
            cout << "Mist has healed, direct her towards finding food that" << endl;
            cout << "is safe to eat." << endl;
            cout << "Decision: ";
            redo12:cin >> option;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\n";
            if (option == 1)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend22:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend22;
                }
            }
            else if (option == 2)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend23:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend23;
                }
            }
            else if (option == 3)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend24:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend24;
                }
            }
            else
            {
                cout << "Invalid Input: Enter one of the given integer values: ";
                goto redo12;
            }
        }
        else if (option == 3)
        {
            cout << "In order to have done this safely, the group had" << endl;
            cout << "to stealthily move to avoid attracting deadly" << endl;
            cout << "beasts. (Biologist) Leia Mist still hasn't" << endl;
            cout << "recovered from her burns; unfortunately, this" << endl;
            cout << "could have been the perfect time to examine" << endl;
            cout << "different species and figure out which ones" << endl;
            cout << "are safe to eat. Nevertheless, the group was" << endl;
            cout << "able to move more swiftly because (Engineer)" << endl;
            cout << "Ragnarok Javin and (Astronomist) Joshua Trevis" << endl;
            cout << "received treatment from the medical supplies." << endl;
            cout << "In the afternoon, (Astronomist) Joshua Trevis" << endl;
            cout << "spotted an artificial light in the" << endl;
            cout << "distance, possibly coming from a tribe or" << endl;
            cout << "civilization of a sentient species. Two other" << endl;
            cout << "places have been found and appear to be excellent" << endl;
            cout << "base locations." << endl;
            cout << "Event 3:" << endl;
            cout << "Your base still hasn't been constructed. You don't" << endl;
            cout << "even have a camp! However, this is a time of great" << endl;
            cout << "risks, and you need to make wise decisions and hope" << endl;
            cout << "for the best. Your group is lucky to not have received" << endl;
            cout << "more injuries; but since you don't have place to revert" << endl;
            cout << "back to, don't expect your luck to succeed for long." << endl;
            cout << "Remember, you're running out of food, and it won't be" << endl;
            cout << "long before your group needs to make desperate decisions" << endl;
            cout << "to find nutrition and fuel for their bodies." << endl;
            cout << "You now must make a decision between the following" << endl;
            cout << "options:" << endl;
            cout << "1: Head towards the light and hope that the species" << endl;
            cout << "is friendly." << endl;
            cout << "2: Start constructing your base by the waterfall." << endl;
            cout << "3: Start constructing your base by the ocean." << endl;
            cout << "Decision: ";
            redo13:cin >> option;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\n";
            if (option == 1)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend25:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend25;
                }
            }
            else if (option == 2)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend26:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend26;
                }
            }
            else if (option == 3)
            {
                cout << "To be continued." << endl;
                cout << "Game Over." << endl;
                cout << "Press 1 to play again or 2 to terminate the program:" << endl;
                redoend27:cin >> choice;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                if (choice == 1)
                {
                    goto redo0;
                }
                else if (choice == 2)
                {
                    goto done;
                }
                else
                {
                    cout << "Invalid Input: Enter one of the given integer values: ";
                    goto redoend27;
                }
            }
            else
            {
                cout << "Invalid Input: Enter one of the given integer values: ";
                goto redo13;
            }
        }
        else
        {
            cout << "Invalid Input: Enter one of the given integer values: ";
            goto redo4;
        }
    }
    else
    {
        cout << "Invalid Input: Enter one of the given integer values: ";
        goto redo1;
    }
    done:return 0;
}
