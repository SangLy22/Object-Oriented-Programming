// Delcare header file
#include "ViewRecord.h"
#include "ReadInFile.h"
#include <iostream>
using namespace std;

void ViewRecord::ViewRecordInfo() {

	// Delcare variable
	ReadInFile read;

	// Access read file class
	// Get name and phone number from read file class
	// And sent to print function
	read.ReadFile("Phone.txt");

	for (int i = 0; i < read.contact_info.size(); i++) {
		PrintRecord(read.contact_info[i].name, read.contact_info[i].phone_num);
	}
}

void ViewRecord::PrintRecord(string name, string phone_num) {

	// Print name and phone number
	cout << name << " " << phone_num << endl;
}
