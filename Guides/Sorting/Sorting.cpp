// Sorting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int values[] = { 0,3,4,5,7,9,8,1,2,6 };
	for (int i = 0; i < 10; i++) {
		cout << values[i] << " ";
	}
	cout << "\n";
	bool notSorted = true;
	while (notSorted) {
		notSorted = false;
		for (int i = 1; i < 10; i++) {
			if (values[i - 1] > values[i]) {
				int temp = values[i - 1];
				values[i - 1] = values[i];
				values[i] = temp;
				notSorted = true;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << values[i] << " ";
	}
	cout << "\n";
    return 0;
}


