#include "stdafx.h"
#include <iostream>

using namespace std;

int a = 1;

void functionWithNormalVariable() {
	int a = 1;
	cout << a << "\n";
	a++;
}

void functionWithStaticVariable() {
	static int a = 1;
	cout << a << "\n";
	a++;
}

void functionWithGlobalVariable() {
	cout << a << "\n";
	a++;
}

int main()
{
	cout << "Global Variable\n";

	cout << a << "\n";
	int a = 2;

	cout << "Local Variable\n";
	cout << a << "\n";

	cout << "Calling function without static variable\n";
	functionWithNormalVariable();
	functionWithNormalVariable();
	functionWithNormalVariable();

	cout << "Calling function with static variable\n";
	functionWithStaticVariable();
	functionWithStaticVariable();
	functionWithStaticVariable();

	cout << "Calling function with global variable\n";
	functionWithGlobalVariable();
	functionWithGlobalVariable();
	functionWithGlobalVariable();
	return 0;
}

