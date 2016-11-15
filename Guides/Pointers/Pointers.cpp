#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int number = 1;
	int *ptr;

	ptr = &number;

	cout << "Address of number: " << ptr << "\n";
	cout << "Value pointed by *ptr: " << *ptr << "\n";

	*ptr = 2;
	cout << "Value pointed by *ptr: " << *ptr << "\n";
	number = 3;
	cout << "Value pointed by *ptr: " << *ptr << "\n";

	int numbers[] = { 1,2,3,4,5 };
	ptr = numbers;
	for (int i = 0; i < 5; i++) {
		cout << *ptr++ << " ";
	}
	cout << "\n";

    return 0;
}

