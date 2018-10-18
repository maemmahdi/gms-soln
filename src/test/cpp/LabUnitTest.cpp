/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2018.
 *
 * Grade Management System (GMS)
 *
 * @file   LabUnitTest.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  LabUnitTest specification.
 */


#include "LabUnitTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(LabUnitTest);

void LabUnitTest::setUp() {
    TestFixture::setUp();
}

void LabUnitTest::tearDown() {
    TestFixture::tearDown();
}

void LabUnitTest::testDefaultLabHasZeroPointsAssigned() {
    Lab lab{};
    points_t expected{0};
    points_t actual{lab.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void LabUnitTest::testValidInitializedLabHasZeroPointsAssigned() {
    Lab lab{Lab::MAXIMUM_POINTS};
    points_t expected{0};
    points_t actual{lab.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void LabUnitTest::testNegativeInitializedLabHasZeroPointsAssigned() {
    Lab lab{-Lab::MAXIMUM_POINTS};
    points_t expected{0};
    points_t actual{lab.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void LabUnitTest::testPositiveInitializedLabHasZeroPointsAssigned() {
    Lab lab{Lab::MAXIMUM_POINTS + 1};
    points_t expected{0};
    points_t actual{lab.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void LabUnitTest::testValidPointsEarnedMutator() {
    Lab lab{};
    lab.setScore(Lab::MAXIMUM_POINTS);
    points_t expected{Lab::MAXIMUM_POINTS};
    points_t actual{lab.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void LabUnitTest::testNegativeInvalidPointsEarnedMutator() {
    Lab lab{};
    lab.setScore(-Lab::MAXIMUM_POINTS);
    points_t expected{Lab::MINIMUM_POINTS};
    points_t actual{lab.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void LabUnitTest::testPositiveInvalidPointsEarnedMutator() {
    Lab lab{};
    lab.setScore(Lab::MAXIMUM_POINTS + 1);
    points_t expected{Lab::MAXIMUM_POINTS};
    points_t actual{lab.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}

void LabUnitTest::testAccessorDoesntChangeState() {
    Lab lab{};
    points_t expected{Lab::MINIMUM_POINTS};
    points_t actual{lab.getPoints()};
    CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, DELTA);
}
