// Declare header files
#include "SortArray.h"
#include <iostream>
using namespace std;

// Declare gobal array
int unsorted_arr[] = { 8,44,11,54,87,21,2,15,48,12,448,5151,15,475,688,155,55,10,19,84 };

void SortArray::SortArr() {

	// Declare variable
	int temp_int;

	// Call print function to print unsorted array
	PrintArr("Unsorted Array: ");

	// Looping through array and sort in descending order
	for (int i = 0; i < 20; i++) {
		for (int j = (i + 1); j < 20; j++) {
			if (unsorted_arr[i] <= unsorted_arr[j]) {
				temp_int = unsorted_arr[i];
				unsorted_arr[i] = unsorted_arr[j];
				unsorted_arr[j] = temp_int;
			}
		}
	}

	// Call print function to print sorted array
	PrintArr("Sorted Array: ");
}

void SortArray::PrintArr(string str) {
	
	// Print every element in array
	cout << str;
	for (int i = 0; i < 20; i++) {
		cout << unsorted_arr[i] << " ";
	}
	cout << endl;
}