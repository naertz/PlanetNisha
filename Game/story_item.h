#ifndef STORY_ITEM_H
#define STORY_ITEM_H

#include "print.h"

#include <string>
#include <vector>

class StoryItem
{
    public:
        std::string storyText = "";
        text_color  storyTextColor = DEFAULT;
        std::string eventText = "";
        text_color  eventTextColor = DEFAULT;
        std::string prompt = "";
        std::vector<std::string> options;
        unsigned int run();
};

#endif // STORY_ITEM_H
