#include <QtTest>

#include "story.cpp"

class TestStory : public QObject {
	Q_OBJECT
	public:
		TestStory();
		~TestStory();
	private slots:
		void test_bad_heal_choices();
};

/****************/
/* Constructors */
/****************/

TestStory::TestStory() {}

/**************/
/* Destructor */
/**************/

TestStory::~TestStory() {}

/*********/
/* Tests */
/*********/

void TestStory::test_bad_heal_choices() {
	// ARRANGE, ACT, & ASSERT
	QVERIFY_EXCEPTION_THROWN(after_no_heal(-1), std::invalid_argument);
	QVERIFY_EXCEPTION_THROWN(after_no_heal(3), std::invalid_argument);
	QVERIFY_EXCEPTION_THROWN(stay_at_ship(-1), std::invalid_argument);
	QVERIFY_EXCEPTION_THROWN(stay_at_ship(3), std::invalid_argument);
	QVERIFY_EXCEPTION_THROWN(go_to_cave(-1), std::invalid_argument);
	QVERIFY_EXCEPTION_THROWN(go_to_cave(3), std::invalid_argument);
	QVERIFY_EXCEPTION_THROWN(travel_large_distance(-1), std::invalid_argument);
	QVERIFY_EXCEPTION_THROWN(travel_large_distance(3), std::invalid_argument);
}

QTEST_APPLESS_MAIN(TestStory)

#include "tst_story.moc"
