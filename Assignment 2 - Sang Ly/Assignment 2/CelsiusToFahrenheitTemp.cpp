// Declare header files
#include "CelsiusToFahrenheitTemp.h"
#include <iostream>
using namespace std;

// Declare constructor
CelsiusToFahrenheitTemp::CelsiusToFahrenheitTemp(double input) {

	// Call set celsius temp and convert temp function
	SetCelTemp(input);
	ConvertTemp();
}

// Declare set celsuis temp function
void CelsiusToFahrenheitTemp::SetCelTemp(double input) {

	// Store input into celsius temp variable
	cel_temp = input;
}

// Declare get celsius temp function
double CelsiusToFahrenheitTemp::GetCelTemp() {

	// Retrieve celsius data
	return cel_temp;
}

// Declare convert celsius to fahrenheit temp function
void CelsiusToFahrenheitTemp::ConvertTemp() {

	// Declare variables
	double celsius_temp;
	double fahrenheit_temp;

	// Call get celsius temp function and store in celsius temp variable
	celsius_temp = GetCelTemp();

	// Calculate fahrenheit temperature
	fahrenheit_temp = (1.8 * celsius_temp) + 32;

	// Call print function
	PrintTemp(celsius_temp, fahrenheit_temp);
}

// Declare Print temperature function
void CelsiusToFahrenheitTemp::PrintTemp(double cel, double fah) {

	// Print converted result
	cout << cel << " C is " << fah << " F" << endl;
}