#pragma once

// Declare header files
#include <iostream>
#include <vector>
using namespace std;

class ReadInFile
{
public:

	// Declare vector of struct
	struct Contact {
		string name;
		string phone_num;
	};
	vector<Contact> contact_info;

	// Declare functions
	void ReadFile(string);
	void ParseString(string, int);
};

