/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2018.
 *
 * Grade Management System (GMS)
 *
 * @file   HomeworkUnitTest.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  HomeworkUnitTest specification.
 */


#ifndef GMS_HOMEWORK_UNIT_TEST_H
#define GMS_HOMEWORK_UNIT_TEST_H

#include <cppunit/extensions/HelperMacros.h>
#include "../../../src/main/cpp/Homework.h"

static const double DELTA{0.000001};

class HomeworkUnitTest : public CPPUNIT_NS::TestFixture {
CPPUNIT_TEST_SUITE(HomeworkUnitTest);
        CPPUNIT_TEST(testDefaultHomeworkHasZeroPointsAssigned);
        CPPUNIT_TEST(testValidInitializedHomeworkHasZeroPointsAssigned);
        CPPUNIT_TEST(testNegativeInitializedHomeworkHasZeroPointsAssigned);
        CPPUNIT_TEST(testPositiveInitializedHomeworkHasZeroPointsAssigned);
        CPPUNIT_TEST(testValidPointsEarnedMutator);
        CPPUNIT_TEST(testNegativeInvalidPointsEarnedMutator);
        CPPUNIT_TEST(testPositiveInvalidPointsEarnedMutator);
        CPPUNIT_TEST(testAccessorDoesntChangeState);
    CPPUNIT_TEST_SUITE_END();
public:
    HomeworkUnitTest() = default;

    ~HomeworkUnitTest() = default;

    void setUp() override;

    void tearDown() override;

    /**
     * Creating an Homework with zero-arg constructor sets points earned to 0.
     */
    void testDefaultHomeworkHasZeroPointsAssigned();

    /**
     * Creating an Homework with valid one-arg constructor sets points earned to 0.
     */
    void testValidInitializedHomeworkHasZeroPointsAssigned();

    /**
     * Creating an Homework with an invalid one-arg constructor (i.e., with a value less than 0) still sets points earned
     * to 0.
     */
    void testNegativeInitializedHomeworkHasZeroPointsAssigned();

    /**
     * Creating an Homework with an invalid one-arg constructor (i.e., with a value greater than 10) still sets points
     * earned to 0.
     */
    void testPositiveInitializedHomeworkHasZeroPointsAssigned();

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


#endif // GMS_HOMEWORK_UNIT_TEST_H
