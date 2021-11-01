#include "story_item.h"
#include "print.h"
#include "user_input.h"

std::string preText = "";
std::string preTextColour = "";
std::string prompt = "";
std::vector<std::string> options;

int StoryItem::run()
{
    print();
    if (this->preText.length() > 0)
    {
        print(this->preText, this->preTextColour);
    }

    print();
    if (this->prompt.length() > 0)
    {
        print(this->prompt, "blue");
    }

    int count = 1;
    for (auto i = this->options.begin(); i != this->options.end(); ++i)
    {
        print(std::to_string(count) + ") " + *i);
        count += 1;
    }
    print();

    return int_option(this->options.size());
}
