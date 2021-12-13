#pragma once
#ifndef STORYITEMOPTION_H
#define STORYITEMOPTION_H

#include <string>

#include "story_item.h"
class StoryItem; // Forward StoryItem Declaration

class StoryItemOption {
	public:
		StoryItemOption(std::string const &option_text, StoryItem *const story_item);
		std::string get_option_text() const;
		StoryItem *get_story_item() const;
	private:
		std::string option_text;
		StoryItem *story_item;
};

#endif // STORYITEMOPTION_H
