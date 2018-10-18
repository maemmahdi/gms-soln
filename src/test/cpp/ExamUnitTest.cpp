/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2018.
 *
 * Grade Management System (GMS)
 *
 * @file   ExamUnitTest.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  ExamUnitTest specification.
 */


#include "ExamUnitTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(ExamUnitTest);

void ExamUnitTest::setUp() {
    TestFixture::setUp();
}

void ExamUnitTest::tearDown() {
    TestFixture::tearDown();
}

void ExamUnitTest::testDefaultExamHasZeroPointsAssigned() {
    Exam exam{};
    points_t expected{0};
    points_t actual{exam.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void ExamUnitTest::testValidInitializedExamHasZeroPointsAssigned() {
    Exam exam{Exam::MAXIMUM_POINTS};
    points_t expected{0};
    points_t actual{exam.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void ExamUnitTest::testNegativeInitializedExamHasZeroPointsAssigned() {
    Exam exam{-Exam::MAXIMUM_POINTS};
    points_t expected{0};
    points_t actual{exam.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void ExamUnitTest::testPositiveInitializedExamHasZeroPointsAssigned() {
    Exam exam{Exam::MAXIMUM_POINTS + 1};
    points_t expected{0};
    points_t actual{exam.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void ExamUnitTest::testValidPointsEarnedMutator() {
    Exam exam{};
    exam.setScore(Exam::MAXIMUM_POINTS);
    points_t expected{Exam::MAXIMUM_POINTS};
    points_t actual{exam.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void ExamUnitTest::testNegativeInvalidPointsEarnedMutator() {
    Exam exam{};
    exam.setScore(-Exam::MAXIMUM_POINTS);
    points_t expected{Exam::MINIMUM_POINTS};
    points_t actual{exam.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void ExamUnitTest::testPositiveInvalidPointsEarnedMutator() {
    Exam exam{};
    exam.setScore(Exam::MAXIMUM_POINTS + 1);
    points_t expected{Exam::MAXIMUM_POINTS};
    points_t actual{exam.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void ExamUnitTest::testAccessorDoesntChangeState() {
    Exam exam{};
    points_t expected{Exam::MINIMUM_POINTS};
    points_t actual{exam.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}
