// Declare header files
#include "File.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

// Check if file exist - give error if file does not exist
// Otherwise read the content of  the file
void File::ReadFile(string file_name) {

	// Declare varialbes
	ifstream my_file;
	string line_from_file = "";
	int count = 0;

	// Open file
	my_file.open(file_name);

	// Check if file exist
	if (!my_file) {
		cout << "Error file does not exist" << endl;
	}
	else {

		// Read in file line by line
		// Call parse function
		while (!my_file.eof()) {
			getline(my_file, line_from_file);

			if (line_from_file != "") {
				Parse(line_from_file, count++);
			}
			else { break; }
		}
	}

	// Close file
	my_file.close();
}

// Parse through the string and seperate words by ',' 
void File::Parse(string line, int count) {
	
	// Declare variables
	char dil = ',';
	bool teacher_name = true, subject = false, room_num = false;
	string temp_teacher_name;
	string temp_subject;
	string temp_room_num;

	// Parsing through string and seperate into three variables
	// Teacher name, subject and room number
	// Store variables in vector
	for (int i = 0; i < line.size(); i++) {
		if (teacher_name) {
			if (line[i] != dil) {
				temp_teacher_name += line[i];
			}
			else {
				teacher_name = false;
				subject = true;
			}
		}
		else if (subject) {
			if (line[i] != dil) {
				temp_subject += line[i];
			}
			else {
				subject = false;
				room_num = true;
			}
		}
		else if(room_num) {
			if (line[i] != dil) {
				temp_room_num += line[i];
			}
			else {
				room_num = false;
			}
		}
	}

	// Put variables value into vector
	// Convert string to int using istringstream
	info.push_back(Teacher());
	info[count].name = temp_teacher_name;
	info[count].subject = temp_subject;
	
	istringstream stream(temp_room_num);
	int x = 0;
	stream >> x;
	info[count].room_num = x;
}