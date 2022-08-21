// Assignment 2
// Sang Ly

// Develop a program converting celsius to fahrenheit and fahrenheit to celsius

// Declare header files
#include <iostream>
#include "CelsiusToFahrenheitTemp.h"
#include "FahrenheitToCelsiusTemp.h"
using namespace std;

// Declare main function
int main() {

	// Call fahrenheit to celsius class
	FahrenheitToCelsiusTemp(32);
	
	// Call celsius to fahrenheit class
	CelsiusToFahrenheitTemp(0);

	return 0;
}