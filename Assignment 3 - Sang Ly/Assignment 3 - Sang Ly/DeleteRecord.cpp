// Declare header files
#include "DeleteRecord.h"
#include "ReadInFile.h"
#include "WriteOutFile.h"
#include <iostream>
#include <vector>
using namespace std;

DeleteRecord::DeleteRecord(string name, string phone_num) {

	// Call Set delete contact
	SetDeleteContact(name, phone_num);
}

void DeleteRecord::DeleteContact() {

	// Declare variable
	ReadInFile read;
	read.ReadFile("Phone.txt");

	string delete_name = GetName();
	string delete_phone_num = GetPhoneNum();

	// Declare vector
	vector<string> vect_name;
	vector<string> vect_phone_num;

	// Search for match
	for (int i = 0; i < read.contact_info.size(); i++) {
		if (read.contact_info[i].name == delete_name || read.contact_info[i].phone_num == delete_phone_num) {}
		else {
			vect_name.push_back(read.contact_info[i].name);
			vect_phone_num.push_back(read.contact_info[i].phone_num);
		}
	}

	cout << "Delete: " << delete_name << " " << delete_phone_num;

	// Call write to file
	WriteOutFile write;
	write.WriteFile(vect_name, vect_phone_num, "New");
}

void DeleteRecord::SetDeleteContact(string name, string phone_num) {

	// Store name and phone number to private variables
	Name = name;
	Phone_num = phone_num;
}

string DeleteRecord::GetName() {

	// Retrieve name
	return Name;
}

string DeleteRecord::GetPhoneNum() {
	
	// Retrieve phone number
	return Phone_num;
}
