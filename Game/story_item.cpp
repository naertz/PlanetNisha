#include "print.h"
#include "story_item.h"
#include "user_input.h"

std::string storyText = "";
text_color  storyTextColor = DARK_WHITE;
std::string eventText = "";
text_color  eventTextColor = DARK_WHITE;
std::string prompt = "";
std::vector<std::string> options;

unsigned int StoryItem::run()
{
    print();
    if (this->storyText.length() > 0)
    {
        print(this->storyText, this->storyTextColor);
    }
    
    print();
    if (this->eventText.length() > 0)
    {
        print(this->eventText, this->eventTextColor);
    }
    
    print();
    if (this->prompt.length() > 0)
    {
        print(this->prompt, BLUE);
    }

    unsigned int count = 1;
    for (auto i = this->options.begin(); i != this->options.end(); ++i)
    {
        print(std::to_string(count) + ") " + *i);
        count += 1;
    }
    print();

    return uint_option(this->options.size());
}
