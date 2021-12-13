#include "story_item_option.h"

/****************/
/* Constructors */
/****************/

StoryItemOption::StoryItemOption(std::string const &option_text, StoryItem *const story_item)
  : option_text(option_text)
  , story_item(story_item) { }

/*************/
/* Accessors */
/*************/

std::string StoryItemOption::get_option_text() const {
	return option_text;
}

StoryItem *StoryItemOption::get_story_item() const {
	return story_item;
}
