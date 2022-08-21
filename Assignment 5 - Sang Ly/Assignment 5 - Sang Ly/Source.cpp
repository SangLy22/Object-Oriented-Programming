// Assignment 5
// Sang Ly

// Develop a program to calculate your grade
// Homework, Quiz, Test, and Attendance/Participation 

// Declare header files
#include "CalculateGrade.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	CalculateGrade grade;
	grade.Homework(60, 80, 30);
	grade.Quiz(170, 180, 20);
	grade.Test(380, 400, 40);
	grade.Attendance_Participation(10, 10, 10);

	cout << fixed << setprecision(2);
	cout << "Grade: " << grade.Result() << "%" << endl;

	return 0;
}