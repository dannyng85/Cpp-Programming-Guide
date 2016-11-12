#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double valueArray[] = { 1.1, 1.2, 1.3 }; // Array of double with initializer
	int a[] = { 10, 20 }; // Array of int with initializer
	int b[3]; // Array of int without initializer
	b[0] = 1; // Access 1st element of array
	b[1] = 2;
	b[2] = 3;
	char string[] = "Test"; // Array of char

	cout << string << "\n"; // Displaying string
	cout << string[1] << "\n"; // Displaying a char of string
	cout << a[0] << "\n"; // Displaying the first element of the array
	cout << b[2] << "\n"; // Displaying the third element of the array

    return 0;
}

