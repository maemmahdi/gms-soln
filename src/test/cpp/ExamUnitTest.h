/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2018.
 *
 * Grade Management System (GMS)
 *
 * @file   ExamUnitTest.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  ExamUnitTest specification.
 */


#ifndef GMS_EXAM_UNIT_TEST_H
#define GMS_EXAM_UNIT_TEST_H

#include <cppunit/extensions/HelperMacros.h>
#include "../../../src/main/cpp/Exam.h"

static const double DELTA{0.000001};

class ExamUnitTest : public CPPUNIT_NS::TestFixture {
CPPUNIT_TEST_SUITE(ExamUnitTest);
        CPPUNIT_TEST(testDefaultExamHasZeroPointsAssigned);
        CPPUNIT_TEST(testValidInitializedExamHasZeroPointsAssigned);
        CPPUNIT_TEST(testNegativeInitializedExamHasZeroPointsAssigned);
        CPPUNIT_TEST(testPositiveInitializedExamHasZeroPointsAssigned);
        CPPUNIT_TEST(testValidPointsEarnedMutator);
        CPPUNIT_TEST(testNegativeInvalidPointsEarnedMutator);
        CPPUNIT_TEST(testPositiveInvalidPointsEarnedMutator);
        CPPUNIT_TEST(testAccessorDoesntChangeState);
    CPPUNIT_TEST_SUITE_END();
public:
    ExamUnitTest() = default;

    ~ExamUnitTest() = default;

    void setUp() override;

    void tearDown() override;

    /**
     * Creating an Exam with zero-arg constructor sets points earned to 0.
     */
    void testDefaultExamHasZeroPointsAssigned();

    /**
     * Creating an Exam with valid one-arg constructor sets points earned to 0.
     */
    void testValidInitializedExamHasZeroPointsAssigned();

    /**
     * Creating an Exam with an invalid one-arg constructor (i.e., with a value less than 0) still sets points earned
     * to 0.
     */
    void testNegativeInitializedExamHasZeroPointsAssigned();

    /**
     * Creating an Exam with an invalid one-arg constructor (i.e., with a value greater than 10) still sets points
     * earned to 0.
     */
    void testPositiveInitializedExamHasZeroPointsAssigned();

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


#endif // GMS_EXAM_UNIT_TEST_H
