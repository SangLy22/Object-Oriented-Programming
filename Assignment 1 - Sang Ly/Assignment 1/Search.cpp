// Declare header files
#include "Search.h"

// Declare search by name function
// Loop through teacher vector for matching name
void Search::SearchByName(string file, string teacher_name) {
	
	// Declare variable
	File search;
	search.ReadFile(file);

	// Loop through vector looking for matching name
	// Call print function
	for (int i = 0; i < search.info.size(); i++) {
		if (search.info[i].name == teacher_name) {
			cout << "Teacher: " << search.info[i].name << endl;
			cout << "Location: " << search.info[i].room_num << endl;
			cout << "Subject: " << search.info[i].subject << endl;
		}
	}
}