#include "story_item.h"

#include <stdexcept>

/****************/
/* Constructors */
/****************/

StoryItem::StoryItem(std::string const &story_text, std::string const &event_text, std::string const &prompt_text, std::vector<StoryItemOption> const &options)
  : story_text(story_text)
  , event_text(event_text)
  , prompt_text(prompt_text) {
	if (!options.empty()) {
		this->options = options;
	} else {
		throw std::invalid_argument("Options cannot be empty.");
	}
}

/*************/
/* Accessors */
/*************/

std::string StoryItem::get_story_text() const {
	return story_text;
}

std::string StoryItem::get_event_text() const {
	return event_text;
}

std::string StoryItem::get_prompt_text() const {
	return prompt_text;
}

std::vector<StoryItemOption> StoryItem::get_options() const {
	return options;
}
