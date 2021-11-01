#include "print.h"
#include "story_item.h"
#include "user_input.h"
#include <iostream>
#include <string>

using namespace std;

void to_be_continued(const int noHealChoice)
{
    print("\nTo be continued.\n", "green");
    print("Would you like to play again?\n", "yellow");
}

void travel_large_distance(const int noHealChoice)
{
    StoryItem* travelLargeDistanceItem = new StoryItem();
    
    if (noHealChoice == 1)
    {
        travelLargeDistanceItem->preText = "In order to have done this safely, the group had to stealthily move to avoid attracting deadly beasts. (Engineer)\n"
                                           "Ragnarok Javin needed to be dragged along on a sheet from a parachute from the ship so he could travel with the\n"
                                           "rest of the group. It was late in the evening when (Astronomist) Joshua Trevis spotted an artificial light in the\n"
                                           "distance, possibly coming from a tribe or civilization of a sentient species. Two other places have been found\n"
                                           "and appear to be excellent base locations.\n"
                                           "\n"
                                           "Event 3:\n"
                                           "Your base still hasn't been constructed. You don't even have a camp! However, this is a time of great risks, and\n"
                                           "you need to make wise decisions and hope for the best. Your group is lucky to not have received more injuries; but\n"
                                           "since you don't have a place to revert back to, don't expect your luck to succeed for long.";
    }
    else if (noHealChoice == 2)
    {
        travelLargeDistanceItem->preText = "In order to have done this safely, the group had to stealthily move to avoid attracting deadly beasts. It is a\n"
                                           "good thing you healed (Engineer) Ragnarok Javin's leg because you already have to make slow maneuvers.\n"
                                           "However, (Astronomist) Joshua Trevis is struggling to handle his tools to help the group find the best places\n"
                                           "to go. Finally, he managed to discover three important locations. He spotted an artificial light in the distance,\n"
                                           "possibly coming from a tribe or civilization of a sentient species. The other two places that were discovered\n"
                                           "appear to be excellent base locations.\n"
                                           "\n"
                                           "Event 3:\n"
                                           "Your base still hasn't been constructed. You don't even have a camp! However, this is a time of great risks, and\n"
                                           "you need to make wise decisions and hope for the best. Your group is lucky to not have received more injuries; but\n"
                                           "since you don't have a place to revert back to, don't expect your luck to succeed for long.";
    }
    else
    {
        travelLargeDistanceItem->preText = "In order to have done this safely, the group had to stealthily move to avoid attracting deadly beasts. (Biologist)\n"
                                           "Leia Mist still hasn't recovered from her burns; unfortunately, this could have been the perfect time to examine\n"
                                           "different species and figure out which ones are safe to eat. Nevertheless, the group was able to move more swiftly\n"
                                           "because (Engineer) Ragnarok Javin and (Astronomist) Joshua Trevis received treatment from the medical supplies. In\n"
                                           "the afternoon, (Astronomist) Joshua Trevis spotted an artificial light in the distance, possibly coming from a\n"
                                           "tribe or civilization of a sentient species. Two other places have been found and appear to be excellent base"
                                           "locations.\n"
                                           "\n"
                                           "Event 3:\n"
                                           "Your base still hasn't been constructed. You don't even have a camp! However, this is a time of great risks, and\n"
                                           "you need to make wise decisions and hope for the best. Your group is lucky to not have received more injuries; but\n"
                                           "since you don't have a place to revert back to, don't expect your luck to succeed for long. Remember, you're running\n"
                                           "out of food, and it won't be long before your group needs to make desperate decisions to find nutrition and fuel for\n"
                                           "their bodies.";
    }
    
    travelLargeDistanceItem->preTextColour = "green";
    
    travelLargeDistanceItem->prompt = "You now must make a decision among the following options:";
    
    travelLargeDistanceItem->options =
    {
        "Head towards the light and hope that the species is friendly.", // 1
        "Start constructing your base by the waterfall.", // 2
        "Start constructing your base by the ocean." // 3
    };
    
    int afterTravelLargeDistanceChoice = travelLargeDistanceItem->run();
    
    if (afterTravelLargeDistanceChoice == 1)
    {
        to_be_continued(noHealChoice);
    }
    else if (afterTravelLargeDistanceChoice == 2)
    {
        to_be_continued(noHealChoice);
    }
    else
    {
        to_be_continued(noHealChoice);
    }
}

void go_to_cave(const int noHealChoice)
{
    StoryItem* goToCaveItem = new StoryItem();
    
    if (noHealChoice == 1)
    {
        goToCaveItem->preText = "As your group built the base out of the materials from the cave, many aggressive beasts had been encountered.\n"
                                "(Engineer) Ragnarok Javin had to remain inside the damaged ship due to this problem and the other small\n"
                                "beasts that were lurking around the ship. You and the others are now moderately injured because it took a lot\n"
                                "of time to build a wall to prevent any more creatures from invading the construction site. The base has been\n"
                                "constructed out of stone and iron, which means that the base will not be strong enough to withstand some of\n"
                                "the powerful blows being dealt by a few beasts for more than a day or two. Currently, your team is trying to\n"
                                "kill the beasts with poisonous gas to buy some time, but there may be more beasts coming. (Engineer) Ragnarok\n"
                                "Javin has been brought back to the base; additionally, he had trouble creating a few unavailable tools that\n"
                                "were needed for construction. Therefore, valuable time has been lost.\n"
                                "\n"
                                "Event 3:\n"
                                "Your base is in a great location despite the materials it's made of and the beasts that are trying to invade it.\n"
                                "You need to decide how to resolve the problem with the beasts.";
    }
    else if (noHealChoice == 2)
    {
        goToCaveItem->preText = "As your group built the base out of the materials from the cave, many aggressive beasts had been encountered.\n"
                                "(Astronomist) Joshua Trevis had to remain inside the damaged ship due to this problem and the other small\n"
                                "beasts that were lurking around the ship. You and the others are now moderately injured because it took a lot\n"
                                "of time to build a wall to prevent any more creatures from invading the construction site. The base has been\n"
                                "constructed out of stone and iron, which means that the base will not be strong enough to withstand some of\n"
                                "the powerful blows being dealt by a few beasts for more than a day or two. Currently, your team is trying to\n"
                                "kill the beasts with poisonous gas to buy some time, but there may be more beasts coming. (Astronomist) Joshua\n"
                                "Trevis has been brought back to the base; additionally, he was unable to start examining and discovering important\n"
                                "information about Planet Nisha and the group's location on the planet. Therefore, the group has a disadvantage in\n"
                                "its situation.\n"
                                "\n"
                                "Event 3:\n"
                                "Your base is in a great location despite the materials it's made of and the beasts that are trying to invade it.\n"
                                "You need to decide how to resolve the problem with the beasts.";
    }
    else
    {
        goToCaveItem->preText = "As your group built the base out of the materials from the cave, many aggressive beasts had been encountered.\n"
                                "(Biologist) Leia Mist had to remain inside the damaged ship due to this problem and the other small\n"
                                "beasts that were lurking around the ship. You and the others are now moderately injured because it took a lot\n"
                                "of time to build a wall to prevent any more creatures from invading the construction site. The base has been\n"
                                "constructed out of stone and iron, which means that the base will not be strong enough to withstand some of\n"
                                "the powerful blows being dealt by a few beasts for more than a day or two. Currently, your team is trying to\n"
                                "kill the beasts with poisonous gas to buy some time, but there may be more beasts coming. (Biologist) Leia\n"
                                "Mist has been brought back to the base; additionally, she still hasn't recovered enough to examine organisms"
                                "and to find edible food. The amount of food is depleting, and the group will begin to starve if nothing is done"
                                "soon.\n"
                                "\n"
                                "Event 3:\n"
                                "Your base is in a great location despite the materials it's made of and the beasts that are trying to invade it.\n"
                                "You need to decide how to resolve the problem with the beasts.";
    }
    
    goToCaveItem->preTextColour = "green";
    
    goToCaveItem->prompt = "You can choose from the following options:";
    
    if (noHealChoice == 3)
    {
        goToCaveItem->options =
        {
            "Construct primitive weapons to defend against the beasts.", // 1
            "Gather the fuel from the ship and set the beasts on fire.", // 2
            "Focus on healing your people to have more people to defend against the beasts.\n"
            "Once (Biologist) Leia Mist has healed, direct her towards finding food that is safe to eat." // 3
        };
    }
    else
    {
        goToCaveItem->options =
        {
            "Construct primitive weapons to defend against the beasts.", // 1
            "Gather the fuel from the ship and set the beasts on fire.", // 2
            "Focus on healing your people to have more people to defend against the beasts." // 3
        };
    }
    
    int beastsChoice = goToCaveItem->run();
    
    if (beastsChoice == 1)
    {
        to_be_continued(noHealChoice);
    }
    else if (beastsChoice == 2)
    {
        to_be_continued(noHealChoice);
    }
    else
    {
        to_be_continued(noHealChoice);
    }
}

void stay_at_ship(const int noHealChoice)
{
    StoryItem* stayAtShipItem = new StoryItem();
    
    if (noHealChoice == 1)
    {
        stayAtShipItem->preText = "You have avoided some dangerous encounters except for a few aggressive creatures that tried to attack your\n"
                                  "people. Luckily, your group has only suffered minor injuries in the successful attempt to fight off the\n"
                                  "small beasts. Because you made the decision to use the ship's parts to construct the base, you have to spend\n"
                                  "a lot of time gathering resources and crafting machinery, which will then create the parts for the needed,\n"
                                  "new ship to travel back home and to other planets for colonization. Additionally, (Engineer) Ragnarok Javin\n"
                                  "had trouble creating a few unavailable tools that were needed to construct the base; therefore, valuable time\n"
                                  "has been lost.\n"
                                  "\n"
                                  "Event 3:\n"
                                  "Your base has been constructed, and your group now has a place to revert back to to rest, to defend against\n"
                                  "attacks, and to improve upon to gain opportunities from new equipment and resources to fulfill vital goals.\n"
                                  "Your group has to decide the next task to be completed on the second day on Nisha.";
    }
    else if (noHealChoice == 2)
    {
        stayAtShipItem->preText = "You have avoided some dangerous encounters except for a few aggressive creatures that tried to attack your\n"
                                  "people. Luckily, your group has only suffered minor injuries in the successful attempt to fight off the\n"
                                  "small beasts. Because you made the decision to use the ship's parts to construct the base, you have to spend\n"
                                  "a lot of time gathering resources and crafting machinery, which will then create the parts for the needed,\n"
                                  "new ship to travel back home and to other planets for colonization. Additionally, (Astronomist) Joshua Trevis\n"
                                  "struggled to help the group with constructing the base with his one, good hand; therefore, valuable time has\n"
                                  "been lost.\n"
                                  "\n"
                                  "Event 3:\n"
                                  "Your base has been constructed, and your group now has a place to revert back to to rest, to defend against\n"
                                  "attacks, and to improve upon to gain opportunities from new equipment and resources to fulfill vital goals.\n"
                                  "Your group has to decide the next task to be completed on the second day on Nisha.";
    }
    else
    {
        stayAtShipItem->preText = "You have avoided some dangerous encounters except for a few aggressive creatures that tried to attack your\n"
                                  "people. Luckily, your group has only suffered minor injuries in the successful attempt to fight off the\n"
                                  "small beasts. Because you made the decision to use the ship's parts to construct the base, you have to spend\n"
                                  "a lot of time gathering resources and crafting machinery, which will then create the parts for the needed,\n"
                                  "new ship to travel back home and to other planets for colonization. Additionally, (Biologist) Leia Mist\n"
                                  "couldn't offer much help for constructing the base, and she couldn't find food in the meantime because of her\n"
                                  "burns. Because she would have only helped for some tasks but could have gathered food, some valuable time was\n"
                                  "lost and there was a lost of food that could have potentially been available.\n"
                                  "\n"
                                  "Event 3:\n"
                                  "Your base has been constructed, and your group now has a place to revert back to to rest, to defend against\n"
                                  "attacks, and to improve upon to gain opportunities from new equipment and resources to fulfill vital goals.\n"
                                  "Your group has to decide the next task to be completed on the second day on Nisha.";
    }
    
    stayAtShipItem->preTextColour = "green";
    
    stayAtShipItem->prompt = "You are given the following options:";
    
    stayAtShipItem->options =
    {
        "Gather resources for the base.", // 1
        "Search for other signs of life.", // 2
        "Focus on healing your people." // 3
    };
    
    int afterStayAtShipChoice = stayAtShipItem->run();
    
    if (afterStayAtShipChoice == 1)
    {
        to_be_continued(noHealChoice);
    }
    else if (afterStayAtShipChoice == 2)
    {
        to_be_continued(noHealChoice);
    }
    else
    {
        to_be_continued(noHealChoice);
    }
}

void after_no_heal(const int noHealChoice)
{
    StoryItem* afterNoHealItem = new StoryItem();
    
    if (noHealChoice == 1)
    {
        afterNoHealItem->preText = "Ouch! Engineer Ragnarok Javin will have trouble making important tools and traveling from place to place.\n"
                                   "\n"
                                   "Event 2:\n"
                                   "You need to lead your group to a safe hideout.";
    }
    else if (noHealChoice == 2)
    {
        afterNoHealItem->preText = "Ouch! Astronomist Joshua Trevis will have trouble making calculations and using his hand for tools.\n"
                                   "\n"
                                   "Event 2:\n"
                                   "You need to lead your group to a safe hideout.";
    }
    else
    {
        afterNoHealItem->preText = "Ouch! Biologist Leia Mist will have trouble examining organisms and eating food for nourishment.\n"
                                   "\n"
                                   "Event 2:\n"
                                   "You need to lead your group to a safe hideout.";
    }
    
    afterNoHealItem->preTextColour = "magenta";
    
    afterNoHealItem->prompt = "You are given the following options:";
    
    afterNoHealItem->options =
    {
        "Stay at the ship and build your base from the remaining parts.", // 1
        "Bring some valuable tools and materials from the ship to a cave you see nearby and build your base over there.", // 2
        "Bring some valuable tools and materials from the ship and travel a large distance to find a less suspicious hideout." // 3
    };
    
    int hideoutChoice = afterNoHealItem->run();
    
    if (hideoutChoice == 1)
    {
        stay_at_ship(noHealChoice);
    }
    else if (hideoutChoice == 2)
    {
        go_to_cave(noHealChoice);
    }
    else
    {
        travel_large_distance(noHealChoice);
    }
}

void start_story()
{
    StoryItem* startItem = new StoryItem();
    
    startItem->preText = "In this game, you have crashed into Nisha: the planet that the government had funded for colonization.\n"
                         "Nobody knows why the crash accident happened, but it appears that something smashed into the ship and\n"
                         "pulled it inside orbit. There were only five survivors: you (the leader), Engineer Ragnarok Javin,\n"
                         "Medical Doctor Skylar Helen, Astronomist Joshua Trevis, and Biologist Leia Mist.\n"
                         "Now, let's begin with the first event.\n"
                         "\n"
                         "Event 1:\n"
                         "You and the other four survivors exit the damaged ship and find that you and (luckily) the medical doctor \n"
                         "are the only ones that are uninjured. Unfortunately, most of the medical supplies are either damaged or missing,\n"
                         "and there are only enough supplies for two of the injured survivors.\n"
                         "\n"
                         "Read the following options, enter the corresponding number to your selected option, and press Enter.\n";
    
    startItem->preTextColour = "magenta";
    
    startItem->prompt = "Whom do you not heal?";
    
    startItem->options =
    {
        "Engineer Ragnarok Javin - broken leg", // 1 
        "Astronomist Joshua Trevis - shrapnel hand wound", // 2
        "Biologist Leia Mist's - burned face" // 3
    };
    
    int noHealChoice = startItem->run();
    
    after_no_heal(noHealChoice);
}