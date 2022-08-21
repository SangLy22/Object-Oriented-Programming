#pragma once

// Declare header files
#include <iostream>
using namespace std;

// Declare Celsius to Fahrenheit temp class
class CelsiusToFahrenheitTemp
{
public:

	// Declare constructor
	CelsiusToFahrenheitTemp(double);

	// Declare functions
	void SetCelTemp(double);
	double GetCelTemp();
	void ConvertTemp();
	void PrintTemp(double, double);

private:

	// Declare variable
	double cel_temp;
};