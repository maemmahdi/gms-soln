/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2018.
 *
 * Grade Management System (GMS)
 *
 * @file   HomeworkUnitTest.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  HomeworkUnitTest specification.
 */


#include "HomeworkUnitTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(HomeworkUnitTest);

void HomeworkUnitTest::setUp() {
    TestFixture::setUp();
}

void HomeworkUnitTest::tearDown() {
    TestFixture::tearDown();
}

void HomeworkUnitTest::testDefaultHomeworkHasZeroPointsAssigned() {
    Homework homework{};
    points_t expected{0};
    points_t actual{homework.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void HomeworkUnitTest::testValidInitializedHomeworkHasZeroPointsAssigned() {
    Homework homework{Homework::MAXIMUM_POINTS};
    points_t expected{0};
    points_t actual{homework.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void HomeworkUnitTest::testNegativeInitializedHomeworkHasZeroPointsAssigned() {
    Homework homework{-Homework::MAXIMUM_POINTS};
    points_t expected{0};
    points_t actual{homework.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void HomeworkUnitTest::testPositiveInitializedHomeworkHasZeroPointsAssigned() {
    Homework homework{Homework::MAXIMUM_POINTS + 1};
    points_t expected{0};
    points_t actual{homework.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void HomeworkUnitTest::testValidPointsEarnedMutator() {
    Homework homework{};
    homework.setScore(Homework::MAXIMUM_POINTS);
    points_t expected{Homework::MAXIMUM_POINTS};
    points_t actual{homework.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void HomeworkUnitTest::testNegativeInvalidPointsEarnedMutator() {
    Homework homework{};
    homework.setScore(-Homework::MAXIMUM_POINTS);
    points_t expected{Homework::MINIMUM_POINTS};
    points_t actual{homework.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void HomeworkUnitTest::testPositiveInvalidPointsEarnedMutator() {
    Homework homework{};
    homework.setScore(Homework::MAXIMUM_POINTS + 1);
    points_t expected{Homework::MAXIMUM_POINTS};
    points_t actual{homework.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void HomeworkUnitTest::testAccessorDoesntChangeState() {
    Homework homework{};
    points_t expected{Homework::MINIMUM_POINTS};
    points_t actual{homework.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}
