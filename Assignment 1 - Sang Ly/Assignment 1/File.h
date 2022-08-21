#pragma once

// Declare header files
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Declare class 
class File
{
public:

	// Declare Struct
	struct Teacher {

		// Declare variable
		string name;
		string subject;
		int room_num;
	};

	// Declare vector
	vector<Teacher> info;

	// Declare functions
	void ReadFile(string);
	void Parse(string, int);
};