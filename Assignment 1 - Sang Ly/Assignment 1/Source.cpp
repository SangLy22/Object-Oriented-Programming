// Assignment 1
// Sang Ly

// Develop a program to read in a file 
// Find a teacher name and display his/her shcool information

// Declare header files
#include <iostream>
#include "Search.h"
using namespace std;

// Main function
int main() {

	// Locate and display teacher information using his/her name
	Search search;
	search.SearchByName("Teacher.txt", "Mr Rick");

	return 0;
}