#include "stdafx.h"
#include <iostream>

using namespace std;

int sum(int, int); // function prototype

int main()
{
	int a = 10;
	int b = 30;
	cout << sum(10, 20) << "\n";	// passing constant number to function
	cout << sum(a, b) << "\n";		// passing through the use of variables
    return 0;
}

/// summation function 
int sum(int a, int b)
{
	return a + b;
}