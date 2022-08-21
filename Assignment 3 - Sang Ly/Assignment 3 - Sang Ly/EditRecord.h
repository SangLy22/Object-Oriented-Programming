#pragma once
// Declare header file
#include <iostream>
using namespace std;

class EditRecord
{
public:

	// Declare function
	EditRecord(string, string, string, string);

	void EditContact();
	void SetOldContact(string, string);
	void SetNewContact(string, string);

	string GetOldName();
	string GetOldPhoneNum();
	string GetNewName();
	string GetNewPhoneNum();

private:

	// Declare variable
	string Old_name;
	string Old_phone_num;
	string New_name;
	string New_phone_num;
};

