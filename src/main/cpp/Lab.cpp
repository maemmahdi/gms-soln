/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2018.
 *
 * Grade Management System (GMS)
 *
 * @file   Lab.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  Lab implementation.
 */

#include "Lab.h"

const points_t Lab::MINIMUM_POINTS{0};
const points_t Lab::MAXIMUM_POINTS{3};

Lab::Lab(points_t points_possible) :
        m_points_possible{
                (points_possible > Lab::MAXIMUM_POINTS || points_possible < Lab::MINIMUM_POINTS) ? Lab::MAXIMUM_POINTS
                                                                                                 : points_possible},
        m_points_earned{Lab::MINIMUM_POINTS} {

}

points_t Lab::getPoints() const {
    return m_points_earned;
}

void Lab::setScore(const points_t &score) {
    if (score > Lab::MAXIMUM_POINTS) {
        m_points_earned = Lab::MAXIMUM_POINTS;
    } else if (score < Lab::MINIMUM_POINTS) {
        m_points_earned = Lab::MINIMUM_POINTS;
    } else {
        m_points_earned = score;
    }
}
