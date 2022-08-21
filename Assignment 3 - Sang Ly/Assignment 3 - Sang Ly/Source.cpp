// Assignment 3
// Sang Ly

// Develop a program to View, Add, Edit and Delete contact from phone book

// Declare header file
#include <iostream>
#include "ReadInFile.h"
#include "ViewRecord.h"
#include "AddRecord.h"
#include "EditRecord.h"
#include "DeleteRecord.h"
using namespace std;

int main() {
	
	AddRecord add("Wilson Park", "+1(114)558-4474");
	add.AddContactInfo();

	cout << endl << endl;

	ViewRecord view;
	view.ViewRecordInfo();

	cout << endl << endl;

	EditRecord edit("Wilson Park", "", "Tim", "");
	edit.EditContact();

	cout << endl << endl;

	view.ViewRecordInfo();

	cout << endl << endl;

	DeleteRecord del("Tim", "");
	del.DeleteContact();

	cout << endl << endl;

	view.ViewRecordInfo();

	cout << endl << endl;

	return 0;
}