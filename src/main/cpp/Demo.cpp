/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2018.
 *
 * Grade Management System (GMS)
 *
 * @file   Demo.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  Entry point of the gmsDemo target.
 */

#include <cstdlib>
#include <iostream>
#include "Exam.h"
#include "Homework.h"
#include "Lab.h"
#include "Quiz.h"

using std::cout;
using std::endl;

int main(int argc, char *argv[]) {
	cout << "Demonstrate Exam class..." << endl;

	Exam exam{};
	cout << "Default exam points earned upon creation: " << exam.getPoints() << endl;
	exam.setScore(Exam::MAXIMUM_POINTS);
	cout << "Default exam points earned after mutator: " << exam.getPoints() << endl;

	Homework homework{};
	cout << "Default homework points earned upon creation: " << homework.getPoints() << endl;
	homework.setScore(Homework::MAXIMUM_POINTS);
	cout << "Default homework points earned after mutator: " << homework.getPoints() << endl;

	Lab lab{};
	cout << "Default lab points earned upon creation: " << lab.getPoints() << endl;
	lab.setScore(Lab::MAXIMUM_POINTS);
	cout << "Default lab points earned after mutator: " << lab.getPoints() << endl;

	Quiz quiz{};
	cout << "Default quiz points earned upon creation: " << quiz.getPoints() << endl;
	quiz.setScore(Lab::MAXIMUM_POINTS);
	cout << "Default quiz points earned after mutator: " << quiz.getPoints() << endl << endl;

	Exam initializExam{Exam::MAXIMUM_POINTS / 2};
	cout << "Initialized exam points earned upon creation: " << initializExam.getPoints() << endl;
	initializExam.setScore(Exam::MAXIMUM_POINTS);
	cout << "Initialized exam points earned after mutator: " << initializExam.getPoints() << endl;

	Homework initializedHomework{Homework::MAXIMUM_POINTS / 2};
	cout << "Initialized homework points earned upon creation: " << initializedHomework.getPoints() << endl;
	initializedHomework.setScore(Homework::MAXIMUM_POINTS);
	cout << "Initialized homework points earned after mutator: " << initializedHomework.getPoints() << endl;

	Lab initializedLab{Lab::MAXIMUM_POINTS / 2};
	cout << "Initialized lab points earned upon creation: " << initializedLab.getPoints() << endl;
	initializedLab.setScore(Lab::MAXIMUM_POINTS);
	cout << "Initialized lab points earned after mutator: " << initializedLab.getPoints() << endl;

	Quiz initializedQuiz{Lab::MAXIMUM_POINTS / 2};
	cout << "Initialized quiz points earned upon creation: " << initializedQuiz.getPoints() << endl;
	initializedQuiz.setScore(Lab::MAXIMUM_POINTS);
	cout << "Initialized quiz points earned after mutator: " << initializedQuiz.getPoints() << endl;

	return EXIT_SUCCESS;
}
