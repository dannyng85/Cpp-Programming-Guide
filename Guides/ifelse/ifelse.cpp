#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double value = 6;

	if (value < 5) {
		cout << "Value is less than 5\n";
	}

	if (value < 3) {
		cout << "Value is less than 3\n";
	}
	else{
		cout << "Value is larger than 3\n";
	}
	
	if (3 <= value && value <= 5) {
		cout << "Value is between 3 and 5\n";
	}
	else {
		cout << "Value is not between 3 and 5\n";
	}

	if (value == 4.5) {
		cout << "Value is 4.5\n";
	}
	else {
		cout << "Value is not 4.5\n";
	}

	if (value != 3) {
		cout << "Value is not 3\n";
	}
	else if(value == 3){
		cout << "Value is 3\n";
	}

	if (value == 3 || value == 4) {
		cout << "Value is 3 or 4\n";
	}
	else {
		cout << "Value is not 3 or 4\n";
	}

    return 0;
}