#pragma once
#ifndef STORYITEM_H
#define STORYITEM_H

#include <string>
#include <vector>

#include "story_item_option.h"
class StoryItemOption; // Forward StoryItemOption Declaration

class StoryItem {
	public:
		StoryItem(std::string const &story_text, std::string const &event_text, std::string const &prompt_text, std::vector<StoryItemOption> const &options);
		std::string get_story_text() const;
		std::string get_event_text() const;
		std::string get_prompt_text() const;
		std::vector<StoryItemOption> get_options() const;
	private:
		std::string story_text;
		std::string event_text;
		std::string prompt_text;
		std::vector<StoryItemOption> options;
};

#endif // STORYITEM_H
