/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2018.
 *
 * Grade Management System (GMS)
 *
 * @file   Exam.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  Exam specification.
 */

#ifndef GMS_EXAM_H
#define GMS_EXAM_H

using points_t = double;

/**
 * An abstraction of an exam.
 * An exam is a graded component in the GMS that has a maximum of 10 points.
 */
class Exam {
public:
    /**
     * Default/initializing Exam constructor.
     * @param points_possible an optional parameter used to set the maximum
     * points that can be earned on this Exam.
     * @post An instance of Exam is created with a maximum number of points
     * assigned that is not greater than 10 nor less than 0. If an argument
     * is outside these bounds, maximum points is set to 10.
     */
    explicit Exam(points_t points_possible = 10);

    /**
     * Request the points earned on this Exam.
     * @return the points earned on this Exam
     * @post The state of this Exam remains unchanged.
     */
    points_t getPoints() const;

    /**
     * Change the points earned on this Exam.
     * @param score the number of points earned on this Exam
     * @post  (score > 10 ? m_points_earned == 10 : m_points_earned == score)
     *        (score < 0 ? m_points_earned == 0 : m_points_earned == score)
     */
    void setScore(const points_t &score);

    static const points_t MINIMUM_POINTS;
    static const points_t MAXIMUM_POINTS;

private:
    points_t m_points_possible;
    points_t m_points_earned;
};


#endif //GMS_EXAM_H
