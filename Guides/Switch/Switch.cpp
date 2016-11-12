#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	char input;
	cout << "Enter a char: ";
	cin >> input;
	switch (input) {
		case 'a':
			cout << "You had keyed in a\n";
			break;
		case '+':
			cout << "You had keyed in +\n";
			break;
		case '1':
			cout << "You had keyed in 1\n";
			break;
		default:
			cout << "You had keyed in a char which is not a, + or 1\n";
			break;
	}
	return 0;
}

