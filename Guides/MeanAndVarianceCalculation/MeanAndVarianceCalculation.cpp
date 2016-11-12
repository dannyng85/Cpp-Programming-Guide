#include "stdafx.h"
#include <iostream>

using namespace std;

float square(float value) {
	return value * value;
}

int main()
{
	int count = 0;
	float value[20];
	while (count < 20) {
		double input;
		cout << "Enter Marks: ";
		cin >> input;
		if (input == 101) {
			break;
		}
		if (input <= 100 && input >= 0) {
			value[count] = input;
			count++;
		}
		else {
			cout << "value incorrect\n";
		}
	}
	float total = 0;
	for (int i = 0; i < count; i++) {
		total += value[i];
	}
	float mean = total / count;
	total = 0;
	for (int i = 0; i < count; i++) {
		total += square(value[i] - mean);
	}
	cout << "Mean: " << mean << "\n";
	cout << "Variance: " << total / (count) << "\n";
	return 0;
}