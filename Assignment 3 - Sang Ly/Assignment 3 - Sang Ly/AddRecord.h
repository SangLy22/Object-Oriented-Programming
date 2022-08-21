#pragma once

// Declare header file
#include <iostream>
using namespace std;

class AddRecord
{
public:

	// Declare functions
	AddRecord(string, string);
	
	void AddContactInfo();
	void SetName(string);
	void SetPhoneNum(string);
	
	string GetName();
	string GetPhoneNum();

private:

	// Declare variable
	string Name;
	string Phone_num;
};

