// Declare header files
#include "EditRecord.h"
#include "ReadInFile.h"
#include "WriteOutFile.h"
#include <iostream>
#include <vector>
using namespace std;

EditRecord::EditRecord(string old_name, string old_phone_num, string new_name, string new_phone_num) {

	// Call set old and new contact function
	SetOldContact(old_name, old_phone_num);
	SetNewContact(new_name, new_phone_num);
}

void EditRecord::EditContact() {

	// Declare variables
	WriteOutFile write;

	ReadInFile read;
	read.ReadFile("Phone.txt");

	string temp_old_name = GetOldName();
	string temp_old_phone_num = GetOldPhoneNum();
	string temp_new_name = GetNewName();
	string temp_new_phone_num = GetNewPhoneNum();

	bool bool_match = false;

	// Declare vector
	vector<string> name;
	vector<string> phone_num;

	// Search for matching record to edit
	for (int i = 0; i < read.contact_info.size(); i++) {
		if (!bool_match) {
			if (read.contact_info[i].name == temp_old_name || read.contact_info[i].phone_num == temp_old_phone_num) {

				// Edit name - keep old phone number
				if (temp_new_name != "" && temp_new_phone_num == "") {
					name.push_back(temp_new_name);
					phone_num.push_back(read.contact_info[i].phone_num);

					cout << "Old name: " << temp_old_name << endl;
					cout << "New name: " << temp_new_name << endl;
				}
				// Edit phone number - keep old name
				else if (temp_new_name == "" && temp_new_phone_num != "") {
					name.push_back(read.contact_info[i].name);
					phone_num.push_back(temp_new_phone_num);

					cout << "Old phone number: " << temp_old_phone_num << endl;
					cout << "New phone number: " << temp_new_phone_num << endl;
				}
				// Edit both name and phone number
				else if(temp_new_name != "" && temp_new_phone_num != "") {
					name.push_back(temp_new_name);
					phone_num.push_back(temp_new_phone_num);

					cout << "Old name: " << temp_old_name << endl;
					cout << "Old phone number: " << temp_old_phone_num << endl;
					cout << "New name: " << temp_new_name << endl;
					cout << "New phone number: " << temp_new_phone_num << endl;
				}
				bool_match = true;
			}
			else {
				name.push_back(read.contact_info[i].name);
				phone_num.push_back(read.contact_info[i].phone_num);
			}
		}
		else {
			name.push_back(read.contact_info[i].name);
			phone_num.push_back(read.contact_info[i].phone_num);
		}
	}

	// Pass vector data to write file
	write.WriteFile(name, phone_num, "New");
}

void EditRecord::SetOldContact(string name, string phone_num) {

	// Store old name and phone number in private variable
	Old_name = name;
	Old_phone_num = phone_num;
}

void EditRecord::SetNewContact(string name, string phone_num) {

	// Store new name and phone number in private variable
	New_name = name;
	New_phone_num = phone_num;
}

string EditRecord::GetOldName() {

	// Retrieve old name
	return Old_name;
}

string EditRecord::GetOldPhoneNum() {

	// Retrieve old phone number
	return Old_phone_num;
}

string EditRecord::GetNewName() {

	// Retrieve new name
	return New_name;
}

string EditRecord::GetNewPhoneNum() {

	// Retrieve new phone number
	return New_phone_num;
}

