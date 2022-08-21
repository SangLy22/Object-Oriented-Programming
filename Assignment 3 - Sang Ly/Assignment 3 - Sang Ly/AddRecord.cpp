// Declare header file
#include "AddRecord.h"
#include "WriteOutFile.h"
#include <iostream>
#include <vector>
using namespace std;

AddRecord::AddRecord(string name, string phone_num) {
	SetName(name);
	SetPhoneNum(phone_num);
}

void AddRecord::AddContactInfo() {

	// Declare vector
	vector<string> vect_name;
	vector<string> vect_phone_num;

	// Store name and phone number in 2 vector
	vect_name.push_back(GetName());
	vect_phone_num.push_back(GetPhoneNum());

	WriteOutFile write;
	write.WriteFile(vect_name, vect_phone_num, "Append");

	// Print success add
	cout << "Added: " << GetName() << " " << GetPhoneNum() << endl;
}

void AddRecord::SetName(string name) {

	// Set name to private variable
	Name = name;
}

string AddRecord::GetName() {

	// Retrieve name
	return Name;
}

void AddRecord::SetPhoneNum(string phone_num) {

	// Set phone number to private variable
	Phone_num = phone_num;
}

string AddRecord::GetPhoneNum() {

	// Retrieve phone number
	return Phone_num;
}