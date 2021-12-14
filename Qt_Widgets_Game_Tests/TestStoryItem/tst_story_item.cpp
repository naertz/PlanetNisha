#include <QtTest>

#include "story_item.h"

class TestStoryItem : public QObject {
	Q_OBJECT
	public:
		TestStoryItem();
		~TestStoryItem();
	private slots:
		void test_create_story_item();
		void test_create_story_item_with_empty_options();
};

/****************/
/* Constructors */
/****************/

TestStoryItem::TestStoryItem() {}

/**************/
/* Destructor */
/**************/

TestStoryItem::~TestStoryItem() {}

/**************************/
/* Bad StoryItem Function */
/**************************/

static StoryItem *create_story_item_with_empty_options() {
	const std::string story_text = "Story text";
	const std::string event_text = "Event text";
	const std::string prompt_text = "Prompt text";
	const std::vector<std::string> options_texts {
		"Option 1 text",
		"Option 2 text",
		"Option 3 text"
	};

	const std::string stories_texts[3] {
		"Story 1 text",
		"Story 2 text",
		"Story 3 text"
	};
	const std::string events_texts[3] {
		"Event 1 text",
		"Event 2 text",
		"Event 3 text"
	};
	const std::string prompts_texts[3] {
		"Prompt 1 text",
		"Prompt 2 text",
		"Prompt 3 text"
	};

	const std::vector<StoryItemOption> options { };

	StoryItem *const story_item = new StoryItem(story_text, event_text, prompt_text, options);
	return story_item;
}

/*********/
/* Tests */
/*********/

void TestStoryItem::test_create_story_item() {
	// ARRANGE
	const std::string expected_story_text = "Story text";
	const std::string expected_event_text = "Event text";
	const std::string expected_prompt_text = "Prompt text";
	const std::vector<std::string> expected_options_texts {
		"Option 1 text",
		"Option 2 text",
		"Option 3 text"
	};

	const std::string expected_stories_texts[3] {
		"Story 1 text",
		"Story 2 text",
		"Story 3 text"
	};
	const std::string expected_events_texts[3] {
		"Event 1 text",
		"Event 2 text",
		"Event 3 text"
	};
	const std::string expected_prompts_texts[3] {
		"Prompt 1 text",
		"Prompt 2 text",
		"Prompt 3 text"
	};
	const std::vector<std::string> expected_next_options_texts[3] {
		{ "Next 1 Option 1 text", "Next 1 Option 2 text", "Next 1 Option 3 text" },
		{ "Next 2 Option 1 text", "Next 2 Option 2 text", "Next 2 Option 3 text" },
		{ "Next 3 Option 1 text", "Next 3 Option 2 text", "Next 3 Option 3 text" }
	};

	StoryItem *const expected_next_stories_items[3][3] {
		{ nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr }
	};

	const std::vector<StoryItemOption> next_options[3] {
		{ { expected_next_options_texts[0][0], expected_next_stories_items[0][0] }, { expected_next_options_texts[0][1], expected_next_stories_items[0][1] }, { expected_next_options_texts[0][2], expected_next_stories_items[0][2] } },
		{ { expected_next_options_texts[1][0], expected_next_stories_items[1][0] }, { expected_next_options_texts[1][1], expected_next_stories_items[1][1] }, { expected_next_options_texts[1][2], expected_next_stories_items[1][2] } },
		{ { expected_next_options_texts[2][0], expected_next_stories_items[2][0] }, { expected_next_options_texts[2][1], expected_next_stories_items[2][1] }, { expected_next_options_texts[2][2], expected_next_stories_items[2][2] } }
	};

	StoryItem *const stories_items[3] = {
	  new StoryItem(expected_stories_texts[0], expected_events_texts[0], expected_prompts_texts[0], next_options[0]),
	  new StoryItem(expected_stories_texts[1], expected_events_texts[1], expected_prompts_texts[1], next_options[1]),
	  new StoryItem(expected_stories_texts[2], expected_events_texts[2], expected_prompts_texts[2], next_options[2])
	};

	const std::vector<StoryItemOption> options {
		{ expected_options_texts[0], stories_items[0] },
		{ expected_options_texts[1], stories_items[1] },
		{ expected_options_texts[2], stories_items[2] }
	};

	StoryItem *const story_item = new StoryItem(expected_story_text, expected_event_text, expected_prompt_text, options);

	std::string actual_story_text;
	std::string actual_event_text;
	std::string actual_prompt_text;
	std::vector<std::string> actual_options_texts;
	std::string actual_stories_texts[3];
	std::string actual_events_texts[3];
	std::string actual_prompts_texts[3];
	std::vector<std::string> actual_next_options_texts[3];
	StoryItem *actual_next_stories_items[3][3];
	// ACT
	actual_story_text = story_item->get_story_text();
	actual_event_text = story_item->get_event_text();
	actual_prompt_text = story_item->get_prompt_text();
	actual_options_texts = {
	  story_item->get_options()[0].get_option_text(),
	  story_item->get_options()[1].get_option_text(),
	  story_item->get_options()[2].get_option_text()
	};
	actual_stories_texts[0] = story_item->get_options()[0].get_story_item()->get_story_text();
	actual_stories_texts[1] = story_item->get_options()[1].get_story_item()->get_story_text();
	actual_stories_texts[2] = story_item->get_options()[2].get_story_item()->get_story_text();
	actual_events_texts[0] = story_item->get_options()[0].get_story_item()->get_event_text();
	actual_events_texts[1] = story_item->get_options()[1].get_story_item()->get_event_text();
	actual_events_texts[2] = story_item->get_options()[2].get_story_item()->get_event_text();
	actual_prompts_texts[0] = story_item->get_options()[0].get_story_item()->get_prompt_text();
	actual_prompts_texts[1] = story_item->get_options()[1].get_story_item()->get_prompt_text();
	actual_prompts_texts[2] = story_item->get_options()[2].get_story_item()->get_prompt_text();
	actual_next_options_texts[0] = {
	  story_item->get_options()[0].get_story_item()->get_options()[0].get_option_text(),
	  story_item->get_options()[0].get_story_item()->get_options()[1].get_option_text(),
	  story_item->get_options()[0].get_story_item()->get_options()[2].get_option_text()
	};
	actual_next_options_texts[1] = {
	  story_item->get_options()[1].get_story_item()->get_options()[0].get_option_text(),
	  story_item->get_options()[1].get_story_item()->get_options()[1].get_option_text(),
	  story_item->get_options()[1].get_story_item()->get_options()[2].get_option_text()
	};
	actual_next_options_texts[2] = {
	  story_item->get_options()[2].get_story_item()->get_options()[0].get_option_text(),
	  story_item->get_options()[2].get_story_item()->get_options()[1].get_option_text(),
	  story_item->get_options()[2].get_story_item()->get_options()[2].get_option_text()
	};
	actual_next_stories_items[0][0] = story_item->get_options()[0].get_story_item()->get_options()[0].get_story_item();
	actual_next_stories_items[0][1] = story_item->get_options()[0].get_story_item()->get_options()[1].get_story_item();
	actual_next_stories_items[0][2] = story_item->get_options()[0].get_story_item()->get_options()[2].get_story_item();
	actual_next_stories_items[1][0] = story_item->get_options()[1].get_story_item()->get_options()[0].get_story_item();
	actual_next_stories_items[1][1] = story_item->get_options()[1].get_story_item()->get_options()[1].get_story_item();
	actual_next_stories_items[1][2] = story_item->get_options()[1].get_story_item()->get_options()[2].get_story_item();
	actual_next_stories_items[2][0] = story_item->get_options()[2].get_story_item()->get_options()[0].get_story_item();
	actual_next_stories_items[2][1] = story_item->get_options()[2].get_story_item()->get_options()[1].get_story_item();
	actual_next_stories_items[2][2] = story_item->get_options()[2].get_story_item()->get_options()[2].get_story_item();
	// ASSERT
	QCOMPARE(actual_story_text, expected_story_text);
	QCOMPARE(actual_event_text, expected_event_text);
	QCOMPARE(actual_prompt_text, expected_prompt_text);
	QCOMPARE(actual_options_texts[0], expected_options_texts[0]);
	QCOMPARE(actual_options_texts[1], expected_options_texts[1]);
	QCOMPARE(actual_options_texts[2], expected_options_texts[2]);
	QCOMPARE(actual_stories_texts[0], expected_stories_texts[0]);
	QCOMPARE(actual_stories_texts[1], expected_stories_texts[1]);
	QCOMPARE(actual_stories_texts[2], expected_stories_texts[2]);
	QCOMPARE(actual_events_texts[0], expected_events_texts[0]);
	QCOMPARE(actual_events_texts[1], expected_events_texts[1]);
	QCOMPARE(actual_events_texts[2], expected_events_texts[2]);
	QCOMPARE(actual_prompts_texts[0], expected_prompts_texts[0]);
	QCOMPARE(actual_prompts_texts[1], expected_prompts_texts[1]);
	QCOMPARE(actual_prompts_texts[2], expected_prompts_texts[2]);
	QCOMPARE(actual_next_options_texts[0][0], expected_next_options_texts[0][0]);
	QCOMPARE(actual_next_options_texts[0][1], expected_next_options_texts[0][1]);
	QCOMPARE(actual_next_options_texts[0][2], expected_next_options_texts[0][2]);
	QCOMPARE(actual_next_options_texts[1][0], expected_next_options_texts[1][0]);
	QCOMPARE(actual_next_options_texts[1][1], expected_next_options_texts[1][1]);
	QCOMPARE(actual_next_options_texts[1][2], expected_next_options_texts[1][2]);
	QCOMPARE(actual_next_options_texts[2][0], expected_next_options_texts[2][0]);
	QCOMPARE(actual_next_options_texts[2][1], expected_next_options_texts[2][1]);
	QCOMPARE(actual_next_options_texts[2][2], expected_next_options_texts[2][2]);
	QCOMPARE(actual_next_stories_items[0][0], expected_next_stories_items[0][0]);
	QCOMPARE(actual_next_stories_items[0][1], expected_next_stories_items[0][1]);
	QCOMPARE(actual_next_stories_items[0][2], expected_next_stories_items[0][2]);
	QCOMPARE(actual_next_stories_items[1][0], expected_next_stories_items[1][0]);
	QCOMPARE(actual_next_stories_items[1][1], expected_next_stories_items[1][1]);
	QCOMPARE(actual_next_stories_items[1][2], expected_next_stories_items[1][2]);
	QCOMPARE(actual_next_stories_items[2][0], expected_next_stories_items[2][0]);
	QCOMPARE(actual_next_stories_items[2][1], expected_next_stories_items[2][1]);
	QCOMPARE(actual_next_stories_items[2][2], expected_next_stories_items[2][2]);
}

void TestStoryItem::test_create_story_item_with_empty_options() {
	// ARRANGE, ACT, & ASSERT
	QVERIFY_EXCEPTION_THROWN(create_story_item_with_empty_options(), std::invalid_argument);
}

QTEST_APPLESS_MAIN(TestStoryItem)

#include "tst_story_item.moc"
