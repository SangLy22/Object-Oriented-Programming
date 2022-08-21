// Declare header files
#include "FahrenheitToCelsiusTemp.h"
#include <iostream>
using namespace std;

// Declare constructor
FahrenheitToCelsiusTemp::FahrenheitToCelsiusTemp(double input) {

	// Call set fahrenheit temp and convert temp functions
	SetFahTemp(input);
	ConvertTemp();
}

// Delcare set fahrenheit temp function
void FahrenheitToCelsiusTemp::SetFahTemp(double input) {

	// Store user input to fahenheit temp variable
	fah_temp = input;
}

// Declare get fahenheit temp function
double FahrenheitToCelsiusTemp::GetFahTemp() {

	// Retrieve fahenheit temp data
	return fah_temp;
}

// Declare convert temp function
void FahrenheitToCelsiusTemp::ConvertTemp() {

	// Declare variables
	double celsiusTemp;
	double fahrenheitTemp;

	// Call get fahrenheit temp function and store temperater into fah temp
	fahrenheitTemp = GetFahTemp();

	// Fahrenheit to Celsius calculation
	celsiusTemp = (fahrenheitTemp - 32) * (5 / 9);

	// Call Print function
	PrintTemp(fahrenheitTemp, celsiusTemp);
}

// Declare print function
void FahrenheitToCelsiusTemp::PrintTemp(double fah, double cel) {

	// Display converted result(s)
	cout << fah << " F is " << cel << " C" << endl;
}