/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2018.
 *
 * Grade Management System (GMS)
 *
 * @file   QuizUnitTest.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  QuizUnitTest specification.
 */


#ifndef GMS_QUIZ_UNIT_TEST_H
#define GMS_QUIZ_UNIT_TEST_H

#include <cppunit/extensions/HelperMacros.h>
#include "../../../src/main/cpp/Quiz.h"

static const double DELTA{0.000001};

class QuizUnitTest : public CPPUNIT_NS::TestFixture {
CPPUNIT_TEST_SUITE(QuizUnitTest);
        CPPUNIT_TEST(testDefaultQuizHasZeroPointsAssigned);
        CPPUNIT_TEST(testValidInitializedQuizHasZeroPointsAssigned);
        CPPUNIT_TEST(testNegativeInitializedQuizHasZeroPointsAssigned);
        CPPUNIT_TEST(testPositiveInitializedQuizHasZeroPointsAssigned);
        CPPUNIT_TEST(testValidPointsEarnedMutator);
        CPPUNIT_TEST(testNegativeInvalidPointsEarnedMutator);
        CPPUNIT_TEST(testPositiveInvalidPointsEarnedMutator);
        CPPUNIT_TEST(testAccessorDoesntChangeState);
    CPPUNIT_TEST_SUITE_END();
public:
    QuizUnitTest() = default;

    ~QuizUnitTest() = default;

    void setUp() override;

    void tearDown() override;

    /**
     * Creating an Quiz with zero-arg constructor sets points earned to 0.
     */
    void testDefaultQuizHasZeroPointsAssigned();

    /**
     * Creating an Quiz with valid one-arg constructor sets points earned to 0.
     */
    void testValidInitializedQuizHasZeroPointsAssigned();

    /**
     * Creating an Quiz with an invalid one-arg constructor (i.e., with a value less than 0) still sets points earned
     * to 0.
     */
    void testNegativeInitializedQuizHasZeroPointsAssigned();

    /**
     * Creating an Quiz with an invalid one-arg constructor (i.e., with a value greater than 10) still sets points
     * earned to 0.
     */
    void testPositiveInitializedQuizHasZeroPointsAssigned();

    /**
     * Mutating the points earned with valid value behaves as expected.
     */
    void testValidPointsEarnedMutator();

    /**
     * Mutating the points earned with a value less than min points possible mutates to min points possible.
     */
    void testNegativeInvalidPointsEarnedMutator();

    /**
     * Mutating the points earned with a value greater than max points possible mutates to max points possible.
     */
    void testPositiveInvalidPointsEarnedMutator();

    /**
     * Accessing an object doesn't change its state.
     */
    void testAccessorDoesntChangeState();

};


#endif // GMS_QUIZ_UNIT_TEST_H
