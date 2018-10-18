/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2018.
 *
 * Grade Management System (GMS)
 *
 * @file   Lab.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  Lab specification.
 */

#ifndef GMS_LAB_H
#define GMS_LAB_H

using points_t = double;

/**
 * An abstraction of a lab assignment.
 * A lab assignment is a graded component in the GMS that has a maximum of 5 points.
 */
class Lab {
public:
    /**
     * Default/initializing Lab constructor.
     * @param points_possible an optional parameter used to set the maximum
     * points that can be earned on this Lab.
     * @post An instance of Lab is created with a maximum number of points
     * assigned that is not greater than MAXIMUM_POINTS nor less than MINIMUM_POINTS. If an argument
     * is outside these bounds, maximum points is set to MAXIMUM_POINTS.
     */
    explicit Lab(points_t points_possible = MAXIMUM_POINTS);

    /**
     * Request the points earned on this Lab.
     * @return the points earned on this Lab
     * @post The state of this Lab remains unchanged.
     */
    points_t getPoints() const;

    /**
     * Change the points earned on this Lab.
     * @param score the number of points earned on this Lab
     * @post  (score > MAXIMUM_POINTS ? m_points_earned == MAXIMUM_POINTS : m_points_earned == score)
     *        (score < MINIMUM_POINTS ? m_points_earned == MINIMUM_POINTS : m_points_earned == score)
     */
    void setScore(const points_t &score);

    static const points_t MINIMUM_POINTS;
    static const points_t MAXIMUM_POINTS;

private:
    points_t m_points_possible;
    points_t m_points_earned;
};

#endif //GMS_LAB_H
