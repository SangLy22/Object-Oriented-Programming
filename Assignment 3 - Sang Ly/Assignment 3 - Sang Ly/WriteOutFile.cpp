// Declare header files
#include "WriteOutFile.h"
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

void WriteOutFile::WriteFile(vector<string> name, vector<string> phone_num, string reason) {

	// Declare variable
	ofstream out_file;
	
	// Check if both vector have equal size
	// Append or create new file
	if (name.size() == phone_num.size()) {
		if (reason == "Append") {
			out_file.open("Phone.txt", ios::app);
		}
		else if (reason == "New") {
			out_file.open("Phone.txt");
		}
		else {
			cout << "Error! Can't write to file" << endl;
		}
	}
	else {
		cout << "Error!" << endl;
	}

	for (int i = 0; i < name.size(); i++) {
		out_file << name[i] << "," << phone_num[i] << endl;
	}

	// Close file
	out_file.close();
}
