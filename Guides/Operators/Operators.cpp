#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double number1 = 10;
	double number2 = 3;
	double number3 = number1 + number2;
	cout << number3 << "\n";
	cout << number1 - number2 << "\n";
	cout << number1 * number2 << "\n";
	cout << number1 / number2 << "\n";
	cout << number1 + 2 * number2 << "\n";
	cout << (number1 + 2) * number2 << "\n";
	return 0;
}