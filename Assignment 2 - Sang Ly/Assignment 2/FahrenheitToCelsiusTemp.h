#pragma once

// Declare header files
#include <iostream>
using namespace std;

// Converting from fahrenheit to celsius class 
class FahrenheitToCelsiusTemp
{
public:

	// Declare constructor
	FahrenheitToCelsiusTemp(double);

	// Declre functions
	void SetFahTemp(double);
	double GetFahTemp();
	void ConvertTemp();
	void PrintTemp(double, double);

private:

	// Declare variable
	double fah_temp;
};