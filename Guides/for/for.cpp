#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int value[] = {0,10,20,30,40,50,60,70,80,90}; // Array
	int sum = 0;
	for (int i = 0; i < 10; i++) { // for loop
		cout << value[i] << "\n";
		sum = sum + value[i];
	}
	cout << sum << "\n";
    return 0;
}

