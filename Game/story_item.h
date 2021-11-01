#ifndef STORY_ITEM_H
#define STORY_ITEM_H

#include <string>
#include <vector>

class StoryItem
{
    public:
        std::string preText = "";
        std::string preTextColour = "";
        std::string prompt = "";
        std::vector<std::string> options;
        int run();
};

#endif // STORY_ITEM_H
