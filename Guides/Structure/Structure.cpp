#include "stdafx.h"
#include <iostream>

using namespace std;

struct Point {
	int x;
	int y;
};


Point Sum(Point v1, Point v2) {
	Point total;
	total.x = v1.x + v2.x;
	total.y = v1.y + v2.y;
	return total;
}

int main()
{
	Point a;
	a.x = 1;
	a.y = 2;

	Point b;
	Point *ptr;
	ptr = &b;
	ptr->x = 3;
	ptr->y = 4;

	Point c = Sum(a, b);
	cout << a.x << " " << a.y << "\n";
	cout << b.x << " " << b.y << "\n";
	cout << c.x << " " << c.y << "\n";

	return 0;
}

