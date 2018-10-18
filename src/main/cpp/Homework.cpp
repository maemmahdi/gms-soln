/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2018.
 *
 * Grade Management System (GMS)
 *
 * @file   Homework.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  Exam implementation.
 */

#include "Homework.h"

const points_t Homework::MINIMUM_POINTS{0};
const points_t Homework::MAXIMUM_POINTS{5};

Homework::Homework(points_t points_possible) :
        m_points_possible{(points_possible > Homework::MAXIMUM_POINTS || points_possible < Homework::MINIMUM_POINTS)
                          ? Homework::MAXIMUM_POINTS
                          : points_possible},
        m_points_earned{Homework::MINIMUM_POINTS} {

}

points_t Homework::getPoints() const {
    return m_points_earned;
}

void Homework::setScore(const points_t &score) {
    if (score > Homework::MAXIMUM_POINTS) {
        m_points_earned = Homework::MAXIMUM_POINTS;
    } else if (score < Homework::MINIMUM_POINTS) {
        m_points_earned = Homework::MINIMUM_POINTS;
    } else {
        m_points_earned = score;
    }
}
