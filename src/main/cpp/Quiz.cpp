/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2018.
 *
 * Grade Management System (GMS)
 *
 * @file   Quiz.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  Quiz implementation.
 */

#include "Quiz.h"

const points_t Quiz::MINIMUM_POINTS{0};
const points_t Quiz::MAXIMUM_POINTS{2};

Quiz::Quiz(points_t points_possible) :
        m_points_possible{(points_possible > Quiz::MAXIMUM_POINTS || points_possible < Quiz::MINIMUM_POINTS)
                          ? Quiz::MAXIMUM_POINTS
                          : points_possible},
        m_points_earned{Quiz::MINIMUM_POINTS} {

}

points_t Quiz::getPoints() const {
    return m_points_earned;
}

void Quiz::setScore(const points_t &score) {
    if (score > Quiz::MAXIMUM_POINTS) {
        m_points_earned = Quiz::MAXIMUM_POINTS;
    } else if (score < Quiz::MINIMUM_POINTS) {
        m_points_earned = Quiz::MINIMUM_POINTS;
    } else {
        m_points_earned = score;
    }
}
