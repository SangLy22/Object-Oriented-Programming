// Declare header files
#include "CalculateGrade.h"
#include <iostream>
using namespace std;

CalculateGrade::CalculateGrade() {

	// Default value
	Homework_grade = 0;
	Quiz_grade = 0;
	Test_grade = 0;
	Attendance_participation_grade = 0;
}

void CalculateGrade::Homework(double current_point, double total_point, double percentage) {
	
	// Store homework grade
	Homework_grade = Calculate(current_point, total_point, percentage);

}

void CalculateGrade::Quiz(double current_point, double total_point, double percentage) {

	// Store quiz grade
	Quiz_grade = Calculate(current_point, total_point, percentage);

}

void CalculateGrade::Test(double current_point, double total_point, double percentage) {

	// Store test grade
	Test_grade = Calculate(current_point, total_point, percentage);

}

void CalculateGrade::Attendance_Participation(double current_point, double total_point, double percentage) {

	Attendance_participation_grade = Calculate(current_point, total_point, percentage);
}

double CalculateGrade::Calculate(double current_point, double total_point, double percentage) {

	// Declare variable
	double result;

	// Calculate grade
	result = current_point / total_point;
	result *= percentage;

	return result;
}

double CalculateGrade::GetHomeworkGrade() {
	
	// Retrieve homework grade
	return Homework_grade;
}

double CalculateGrade::GetQuizGrade() {

	// Retrieve quiz grade
	return Quiz_grade;
}

double CalculateGrade::GetTestGrade() {

	// Retrieve test grade
	return Test_grade;
}

double CalculateGrade::GetAttPartGrade() {

	// Retrieve attendance and participation grade
	return Attendance_participation_grade;
}

double CalculateGrade::Result() {

	// Declare variable
	double grade;

	// Calculate total grade
	grade = (GetHomeworkGrade()) + (GetQuizGrade()) + (GetTestGrade()) + (GetAttPartGrade());

	return grade;
}