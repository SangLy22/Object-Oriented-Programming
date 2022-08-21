#pragma once
// Declare header files
#include <iostream>
using namespace std;

class DeleteRecord
{
public:

	// Declare function
	DeleteRecord(string, string);
	
	void DeleteContact();
	void SetDeleteContact(string, string);

	string GetName();
	string GetPhoneNum();

private:
	string Name;
	string Phone_num;
};

