// Declare header files
#include "ReadInFile.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void ReadInFile::ReadFile(string file_name) {

	// Declare variable
	int count = 0;

	string file_data;

	// Open file
	fstream my_file;
	my_file.open(file_name);

	// Check if file exist
	// Display error if file does not exist
	// Otherwise store file data
	// Send file data to string parse function
	if (!my_file) {
		cout << "Error! File does not exist" << endl;
	}
	else {
		while (!my_file.eof()) {
			getline(my_file, file_data);
			if (file_data != "") {
				ParseString(file_data, count++);
			}
			else {
				break;
			}
		}
	}

	// Close file
	my_file.close();
}

void ReadInFile::ParseString(string str, int count) {

	// Delcare variables
	string temp_name;
	string temp_phone_num;

	char dil = ',';

	// Seperate full string into name and phone number
	// Find "dil" position
	size_t pos = str.find_first_of(dil);
	temp_name = str.substr(0, pos);
	temp_phone_num = str.substr(pos + 1);

	// Store into vector of struct
	contact_info.push_back(Contact());
	contact_info[count].name = temp_name;
	contact_info[count].phone_num = temp_phone_num;

}