/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2018.
 *
 * Grade Management System (GMS)
 *
 * @file   QuizUnitTest.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  QuizUnitTest specification.
 */


#include "QuizUnitTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(QuizUnitTest);

void QuizUnitTest::setUp() {
    TestFixture::setUp();
}

void QuizUnitTest::tearDown() {
    TestFixture::tearDown();
}

void QuizUnitTest::testDefaultQuizHasZeroPointsAssigned() {
    Quiz quiz{};
    points_t expected{0};
    points_t actual{quiz.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void QuizUnitTest::testValidInitializedQuizHasZeroPointsAssigned() {
    Quiz quiz{Quiz::MAXIMUM_POINTS};
    points_t expected{0};
    points_t actual{quiz.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void QuizUnitTest::testNegativeInitializedQuizHasZeroPointsAssigned() {
    Quiz quiz{-Quiz::MAXIMUM_POINTS};
    points_t expected{0};
    points_t actual{quiz.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void QuizUnitTest::testPositiveInitializedQuizHasZeroPointsAssigned() {
    Quiz quiz{Quiz::MAXIMUM_POINTS + 1};
    points_t expected{0};
    points_t actual{quiz.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void QuizUnitTest::testValidPointsEarnedMutator() {
    Quiz quiz{};
    quiz.setScore(Quiz::MAXIMUM_POINTS);
    points_t expected{Quiz::MAXIMUM_POINTS};
    points_t actual{quiz.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void QuizUnitTest::testNegativeInvalidPointsEarnedMutator() {
    Quiz quiz{};
    quiz.setScore(-Quiz::MAXIMUM_POINTS);
    points_t expected{Quiz::MINIMUM_POINTS};
    points_t actual{quiz.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void QuizUnitTest::testPositiveInvalidPointsEarnedMutator() {
    Quiz quiz{};
    quiz.setScore(Quiz::MAXIMUM_POINTS + 1);
    points_t expected{Quiz::MAXIMUM_POINTS};
    points_t actual{quiz.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void QuizUnitTest::testAccessorDoesntChangeState() {
    Quiz quiz{};
    points_t expected{Quiz::MINIMUM_POINTS};
    points_t actual{quiz.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}
