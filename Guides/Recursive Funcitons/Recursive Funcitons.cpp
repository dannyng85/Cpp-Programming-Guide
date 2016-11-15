#include "stdafx.h"
#include <iostream>

using namespace std;

int factorial(int value) {
	int total;
	if (value <= 1) {
		return 1;
	}
	else {
		total = value * factorial(value - 1);
		return total;
	}
}

int main()
{
	int number;
	cout << "Enter a number for factorial calculation: ";
	cin >> number;
	if (number >= 0) {
		cout << "Factorial of input is: " << factorial(number) << "\n";
	}
	else {
		cout << "Number entered is not valid.\n";
	}
	return 0;
}

