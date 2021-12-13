#include "story.h"

/*************************/
/* Function Declarations */
/*************************/

static StoryItem *after_no_heal(int const no_heal_choice);
static StoryItem *stay_at_ship(int const no_heal_choice);
static StoryItem *go_to_cave(int const no_heal_choice);
static StoryItem *travel_large_distance(int const no_heal_choice);
static StoryItem *to_be_continued();

/****************/
/* First Branch */
/****************/

StoryItem *start_story() {
	std::string story_text = "In this game, you have crashed into Nisha: the planet that the government had funded for colonization. Nobody knows why the crash accident happened, but it appears that something smashed into the ship and pulled it inside orbit. There were only five survivors: you (the leader), Engineer Ragnarok Javin, Medical Doctor Skylar Helen, Astronomist Joshua Trevis, and Biologist Leia Mist. Now, let's begin with the first event.";
	std::string event_text = "You and the other four survivors exit the damaged ship and find that you and (luckily) the medical doctor are the only ones that are uninjured. Unfortunately, most of the medical supplies are either damaged or missing, and there are only enough supplies for two of the injured survivors.";
	std::string prompt_text = "Whom do you not heal?";
	std::vector<std::string> options_texts {
		"Engineer Ragnarok Javin - broken leg",
		"Astronomist Joshua Trevis - shrapnel hand wound",
		"Biologist Leia Mist - burned face"
	};

	std::vector<StoryItem*> story_items {
		after_no_heal(0),
		after_no_heal(1),
		after_no_heal(2)
	};

	std::vector<StoryItemOption> story_options {
		{ options_texts[0], story_items[0] },
		{ options_texts[1], story_items[1] },
		{ options_texts[2], story_items[2] }
	};

	StoryItem *start_story = new StoryItem(story_text, event_text, prompt_text, story_options);
	return start_story;
}

/*****************/
/* Second Branch */
/*****************/

static StoryItem *after_no_heal(int const no_heal_choice) {
	std::string story_text = "";
	std::string event_text = "";
	std::string prompt_text = "";
	std::vector<std::string> options_texts {
		"",
		"",
		""
	};

	switch (no_heal_choice) {
		case 0:
			story_text = "Ouch! Engineer Ragnarok Javin will have trouble making important tools and traveling from place to place.";
			event_text = "Event 2: You need to lead your group to a safe hideout.";
			prompt_text = "You are given the following options:";
			options_texts = {
			  "Stay at the ship and build your base from the remaining parts.",
			  "Bring some valuable tools and materials from the ship to a cave you see nearby and build your base over there.",
			  "Bring some valuable tools and materials from the ship and travel a large distance to find a less suspicious hideout."
			};
			break;
		case 1:
			story_text = "Ouch! Astronomist Joshua Trevis will have trouble making calculations and using his hand for tools.";
			event_text = "Event 2: You need to lead your group to a safe hideout.";
			prompt_text = "You are given the following options:";
			options_texts = {
			  "Stay at the ship and build your base from the remaining parts.",
			  "Bring some valuable tools and materials from the ship to a cave you see nearby and build your base over there.",
			  "Bring some valuable tools and materials from the ship and travel a large distance to find a less suspicious hideout."
			};
			break;
		case 2:
			story_text = "Ouch! Biologist Leia Mist will have trouble examining organisms and eating food for nourishment.";
			event_text = "Event 2: You need to lead your group to a safe hideout.";
			prompt_text = "You are given the following options:";
			options_texts = {
			  "Stay at the ship and build your base from the remaining parts.",
			  "Bring some valuable tools and materials from the ship to a cave you see nearby and build your base over there.",
			  "Bring some valuable tools and materials from the ship and travel a large distance to find a less suspicious hideout."
			};
			break;
	}

	std::vector<StoryItem*> story_items {
		stay_at_ship(no_heal_choice),
		go_to_cave(no_heal_choice),
		travel_large_distance(no_heal_choice)
	};

	std::vector<StoryItemOption> story_options {
		{ options_texts[0], story_items[0] },
		{ options_texts[1], story_items[1] },
		{ options_texts[2], story_items[2] }
	};

	StoryItem *after_no_heal = new StoryItem(story_text, event_text, prompt_text, story_options);
	return after_no_heal;
}

/****************/
/* Third Branch */
/****************/

static StoryItem *stay_at_ship(int const no_heal_choice) {
	std::string story_text = "";
	std::string event_text = "";
	std::string prompt_text = "";
	std::vector<std::string> options_texts {
		"",
		"",
		""
	};

	switch (no_heal_choice) {
		case 0:
			story_text = "You have avoided some dangerous encounters except for a few aggressive creatures that tried to attack your people. Luckily, your group has only suffered minor injuries in the successful attempt to fight off the small beasts. Because you made the decision to use the ship's parts to construct the base, you have to spend a lot of time gathering resources and crafting machinery, which will then create the parts for the needed, new ship to travel back home and to other planets for colonization. Additionally, (Engineer) Ragnarok Javin had trouble creating a few unavailable tools that were needed to construct the base; therefore, valuable time has been lost.";
			event_text = "Event 3: Your base has been constructed, and your group now has a place to revert back to to rest, to defend against attacks, and to improve upon to gain opportunities from new equipment and resources to fulfill vital goals. Your group has to decide the next task to be completed on the second day on Nisha.";
			prompt_text = "You are given the following options:";
			options_texts = {
			  "Gather resources for the base.",
			  "Search for other signs of life.",
			  "Focus on healing your people."
			};
			break;
		case 1:
			story_text = "You have avoided some dangerous encounters except for a few aggressive creatures that tried to attack your people. Luckily, your group has only suffered minor injuries in the successful attempt to fight off the small beasts. Because you made the decision to use the ship's parts to construct the base, you have to spend a lot of time gathering resources and crafting machinery, which will then create the parts for the needed, new ship to travel back home and to other planets for colonization. Additionally, (Astronomist) Joshua Trevis struggled to help the group with constructing the base with his one, good hand; therefore, valuable time has been lost.";
			event_text = "Event 3: Your base has been constructed, and your group now has a place to revert back to to rest, to defend against attacks, and to improve upon to gain opportunities from new equipment and resources to fulfill vital goals. Your group has to decide the next task to be completed on the second day on Nisha.";
			prompt_text = "You are given the following options:";
			options_texts = {
			  "Gather resources for the base.",
			  "Search for other signs of life.",
			  "Focus on healing your people."
			};
			break;
		case 2:
			story_text = "You have avoided some dangerous encounters except for a few aggressive creatures that tried to attack your people. Luckily, your group has only suffered minor injuries in the successful attempt to fight off the small beasts. Because you made the decision to use the ship's parts to construct the base, you have to spend a lot of time gathering resources and crafting machinery, which will then create the parts for the needed, new ship to travel back home and to other planets for colonization. Additionally, (Biologist) Leia Mist couldn't offer much help for constructing the base, and she couldn't find food in the meantime because of her burns. Because she would have only helped for some tasks but could have gathered food, some valuable time was lost and there was a lost of food that could have potentially been available.";
			event_text = "Event 3: Your base has been constructed, and your group now has a place to revert back to to rest, to defend against attacks, and to improve upon to gain opportunities from new equipment and resources to fulfill vital goals. Your group has to decide the next task to be completed on the second day on Nisha.";
			prompt_text = "You are given the following options:";
			options_texts = {
			  "Gather resources for the base.",
			  "Search for other signs of life.",
			  "Focus on healing your people."
			};
			break;
	}

	std::vector<StoryItem*> story_items {
		to_be_continued(),
		to_be_continued(),
		to_be_continued()
	};

	std::vector<StoryItemOption> story_options {
		{ options_texts[0], story_items[0] },
		{ options_texts[1], story_items[1] },
		{ options_texts[2], story_items[2] }
	};

	StoryItem *stay_at_ship = new StoryItem(story_text, event_text, prompt_text, story_options);
	return stay_at_ship;
}

static StoryItem *go_to_cave(int const no_heal_choice) {
	std::string story_text = "";
	std::string event_text = "";
	std::string prompt_text = "";
	std::vector<std::string> options_texts {
		"",
		"",
		""
	};

	switch (no_heal_choice) {
		case 0:
			story_text = "As your group built the base out of the materials from the cave, many aggressive beasts had been encountered. (Engineer) Ragnarok Javin had to remain inside the damaged ship due to this problem and the other small beasts that were lurking around the ship. You and the others are now moderately injured because it took a lot of time to build a wall to prevent any more creatures from invading the construction site. The base has been constructed out of stone and iron, which means that the base will not be strong enough to withstand some of the powerful blows being dealt by a few beasts for more than a day or two. Currently, your team is trying to kill the beasts with poisonous gas to buy some time, but there may be more beasts coming. (Engineer) Ragnarok Javin has been brought back to the base; additionally, he had trouble creating a few unavailable tools that were needed for construction. Therefore, valuable time has been lost.";
			event_text = "Event 3: Your base is in a great location despite the materials it's made of and the beasts that are trying to invade it. You need to decide how to resolve the problem with the beasts.";
			prompt_text = "You can choose from the following options:";
			options_texts = {
			  "Construct primitive weapons to defend against the beasts.",
			  "Gather the fuel from the ship and set the beasts on fire.",
			  "Focus on healing your people to have more people to defend against the beasts."
			};
			break;
		case 1:
			story_text = "As your group built the base out of the materials from the cave, many aggressive beasts had been encountered. (Astronomist) Joshua Trevis had to remain inside the damaged ship due to this problem and the other small beasts that were lurking around the ship. You and the others are now moderately injured because it took a lot of time to build a wall to prevent any more creatures from invading the construction site. The base has been constructed out of stone and iron, which means that the base will not be strong enough to withstand some of the powerful blows being dealt by a few beasts for more than a day or two. Currently, your team is trying to kill the beasts with poisonous gas to buy some time, but there may be more beasts coming. (Astronomist) Joshua Trevis has been brought back to the base; additionally, he was unable to start examining and discovering important information about Planet Nisha and the group's location on the planet. Therefore, the group has a disadvantage in its situation.";
			event_text = "Event 3: Your base is in a great location despite the materials it's made of and the beasts that are trying to invade it. You need to decide how to resolve the problem with the beasts.";
			prompt_text = "You can choose from the following options:";
			options_texts = {
			  "Construct primitive weapons to defend against the beasts.",
			  "Gather the fuel from the ship and set the beasts on fire.",
			  "Focus on healing your people to have more people to defend against the beasts."
			};
			break;
		case 2:
			story_text = "As your group built the base out of the materials from the cave, many aggressive beasts had been encountered. (Biologist) Leia Mist had to remain inside the damaged ship due to this problem and the other small beasts that were lurking around the ship. You and the others are now moderately injured because it took a lot of time to build a wall to prevent any more creatures from invading the construction site. The base has been constructed out of stone and iron, which means that the base will not be strong enough to withstand some of the powerful blows being dealt by a few beasts for more than a day or two. Currently, your team is trying to kill the beasts with poisonous gas to buy some time, but there may be more beasts coming. (Biologist) Leia Mist has been brought back to the base; additionally, she still hasn't recovered enough to examine organisms and to find edible food. The amount of food is depleting, and the group will begin to starve if nothing is done soon.";
			event_text = "Event 3: Your base is in a great location despite the materials it's made of and the beasts that are trying to invade it. You need to decide how to resolve the problem with the beasts.";
			prompt_text = "You can choose from the following options:";
			options_texts = {
			  "Construct primitive weapons to defend against the beasts.",
			  "Gather the fuel from the ship and set the beasts on fire.",
			  "Focus on healing your people to have more people to defend against the beasts. Once (Biologist) Leia Mist has healed, direct her towards finding food that is safe to eat."
			};
			break;
	}

	std::vector<StoryItem*> story_items {
		to_be_continued(),
		to_be_continued(),
		to_be_continued()
	};

	std::vector<StoryItemOption> story_options {
		{ options_texts[0], story_items[0] },
		{ options_texts[1], story_items[1] },
		{ options_texts[2], story_items[2] }
	};

	StoryItem *go_to_cave = new StoryItem(story_text, event_text, prompt_text, story_options);
	return go_to_cave;
}

static StoryItem *travel_large_distance(int const no_heal_choice) {
	std::string story_text = "";
	std::string event_text = "";
	std::string prompt_text = "";
	std::vector<std::string> options_texts {
		"",
		"",
		""
	};

	switch (no_heal_choice) {
		case 0:
			story_text = "In order to have done this safely, the group had to stealthily move to avoid attracting deadly beasts. (Engineer) Ragnarok Javin needed to be dragged along on a sheet from a parachute from the ship so he could travel with the rest of the group. It was late in the evening when (Astronomist) Joshua Trevis spotted an artificial light in the distance, possibly coming from a tribe or civilization of a sentient species. Two other places have been found and appear to be excellent base locations.";
			event_text = "Event 3: Your base still hasn't been constructed. You don't even have a camp! However, this is a time of great risks, and you need to make wise decisions and hope for the best. Your group is lucky to not have received more injuries; but since you don't have a place to revert back to, don't expect your luck to succeed for long.";
			prompt_text = "You now must make a decision among the following options:";
			options_texts = {
			  "Head towards the light and hope that the species is friendly.",
			  "Start constructing your base by the waterfall.",
			  "Start constructing your base by the ocean."
			};
			break;
		case 1:
			story_text = "In order to have done this safely, the group had to stealthily move to avoid attracting deadly beasts. It is a good thing you healed (Engineer) Ragnarok Javin's leg because you already have to make slow maneuvers. However, (Astronomist) Joshua Trevis is struggling to handle his tools to help the group find the best places to go. Finally, he managed to discover three important locations. He spotted an artificial light in the distance, possibly coming from a tribe or civilization of a sentient species. The other two places that were discovered appear to be excellent base locations.";
			event_text = "Event 3: Your base still hasn't been constructed. You don't even have a camp! However, this is a time of great risks, and you need to make wise decisions and hope for the best. Your group is lucky to not have received more injuries; but since you don't have a place to revert back to, don't expect your luck to succeed for long.";
			prompt_text = "You now must make a decision among the following options:";
			options_texts = {
			  "Head towards the light and hope that the species is friendly.",
			  "Start constructing your base by the waterfall.",
			  "Start constructing your base by the ocean."
			};
			break;
		case 2:
			story_text = "In order to have done this safely, the group had to stealthily move to avoid attracting deadly beasts. (Biologist) Leia Mist still hasn't recovered from her burns; unfortunately, this could have been the perfect time to examine different species and figure out which ones are safe to eat. Nevertheless, the group was able to move more swiftly because (Engineer) Ragnarok Javin and (Astronomist) Joshua Trevis received treatment from the medical supplies. In the afternoon, (Astronomist) Joshua Trevis spotted an artificial light in the distance, possibly coming from a tribe or civilization of a sentient species. Two other places have been found and appear to be excellent base locations.";
			event_text = "Event 3: Your base still hasn't been constructed. You don't even have a camp! However, this is a time of great risks, and you need to make wise decisions and hope for the best. Your group is lucky to not have received more injuries; but since you don't have a place to revert back to, don't expect your luck to succeed for long. Remember, you're running out of food, and it won't be long before your group needs to make desperate decisions to find nutrition and fuel for their bodies.";
			prompt_text = "You now must make a decision among the following options:";
			options_texts = {
			  "Head towards the light and hope that the species is friendly.",
			  "Start constructing your base by the waterfall.",
			  "Start constructing your base by the ocean."
			};
			break;
	}

	std::vector<StoryItem*> story_items {
		to_be_continued(),
		to_be_continued(),
		to_be_continued()
	};

	std::vector<StoryItemOption> story_options {
		{ options_texts[0], story_items[0] },
		{ options_texts[1], story_items[1] },
		{ options_texts[2], story_items[2] }
	};

	StoryItem *travel_large_distance = new StoryItem(story_text, event_text, prompt_text, story_options);
	return travel_large_distance;
}

/*****************/
/* Fourth Branch */
/*****************/

static StoryItem *to_be_continued() {
	std::string story_text = "To be continued...";
	std::string event_text = "Thank you for playing.";
	std::string prompt_text = "Created by Noah Allan Ertz";
	std::vector<std::string> options_texts {
		"Play again",
		"Exit happily",
		"Exit sadly"
	};

	std::vector<StoryItem*> story_items {
		nullptr,
		nullptr,
		nullptr
	};

	std::vector<StoryItemOption> story_options {
		{ options_texts[0], story_items[0] },
		{ options_texts[1], story_items[1] },
		{ options_texts[2], story_items[2] }
	};

	StoryItem *to_be_continued = new StoryItem(story_text, event_text, prompt_text, story_options);
	return to_be_continued;
}
