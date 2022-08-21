#pragma once

// Declare header files
#include <iostream>
using namespace std;

class CalculateGrade
{
public:

	// Declare constructor
	CalculateGrade();

	// Declare public functions
	void Homework(double, double, double);
	void Quiz(double, double, double);
	void Test(double, double, double);
	void Attendance_Participation(double, double, double);

	double Result();


private:

	// Declare variables
	double Homework_grade;
	double Quiz_grade;
	double Test_grade;
	double Attendance_participation_grade;

	// Declare private functions
	double GetHomeworkGrade();
	double GetQuizGrade();
	double GetTestGrade();
	double GetAttPartGrade();
	double Calculate(double, double, double);
};