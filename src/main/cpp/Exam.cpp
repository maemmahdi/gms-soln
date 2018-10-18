/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2018.
 *
 * Grade Management System (GMS)
 *
 * @file   Exam.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  Exam implementation.
 */

#include "Exam.h"

const points_t Exam::MAXIMUM_POINTS{10};
const points_t Exam::MINIMUM_POINTS{0};

Exam::Exam(points_t points_possible) :
        m_points_possible{(points_possible > Exam::MAXIMUM_POINTS || points_possible < Exam::MINIMUM_POINTS)
                          ? Exam::MAXIMUM_POINTS
                          : points_possible},
        m_points_earned{Exam::MINIMUM_POINTS} {

}

points_t Exam::getPoints() const {
    return m_points_earned;
}

void Exam::setScore(const points_t &score) {
    if (score > Exam::MAXIMUM_POINTS) {
        m_points_earned = Exam::MAXIMUM_POINTS;
    } else if (score < Exam::MINIMUM_POINTS) {
        m_points_earned = Exam::MINIMUM_POINTS;
    } else {
        m_points_earned = score;
    }
}
