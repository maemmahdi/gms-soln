/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2018.
 *
 * Grade Management System (GMS)
 *
 * @file   LabUnitTest.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  LabUnitTest specification.
 */


#ifndef GMS_LAB_UNIT_TEST_H
#define GMS_LAB_UNIT_TEST_H

#include <cppunit/extensions/HelperMacros.h>
#include "../../../src/main/cpp/Lab.h"

static const double DELTA{0.000001};

class LabUnitTest : public CPPUNIT_NS::TestFixture {
CPPUNIT_TEST_SUITE(LabUnitTest);
        CPPUNIT_TEST(testDefaultLabHasZeroPointsAssigned);
        CPPUNIT_TEST(testValidInitializedLabHasZeroPointsAssigned);
        CPPUNIT_TEST(testNegativeInitializedLabHasZeroPointsAssigned);
        CPPUNIT_TEST(testPositiveInitializedLabHasZeroPointsAssigned);
        CPPUNIT_TEST(testValidPointsEarnedMutator);
        CPPUNIT_TEST(testNegativeInvalidPointsEarnedMutator);
        CPPUNIT_TEST(testPositiveInvalidPointsEarnedMutator);
        CPPUNIT_TEST(testAccessorDoesntChangeState);
    CPPUNIT_TEST_SUITE_END();
public:
    LabUnitTest() = default;

    ~LabUnitTest() = default;

    void setUp() override;

    void tearDown() override;

    /**
     * Creating an Lab with zero-arg constructor sets points earned to 0.
     */
    void testDefaultLabHasZeroPointsAssigned();

    /**
     * Creating an Lab with valid one-arg constructor sets points earned to 0.
     */
    void testValidInitializedLabHasZeroPointsAssigned();

    /**
     * Creating an Lab with an invalid one-arg constructor (i.e., with a value less than 0) still sets points earned
     * to 0.
     */
    void testNegativeInitializedLabHasZeroPointsAssigned();

    /**
     * Creating an Lab with an invalid one-arg constructor (i.e., with a value greater than 10) still sets points
     * earned to 0.
     */
    void testPositiveInitializedLabHasZeroPointsAssigned();

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


#endif // GMS_LAB_UNIT_TEST_H
