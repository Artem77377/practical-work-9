﻿#include <iostream>
#include <iomanip>
using namespace std;
#include "math.h"
#include "windows.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, y, x1, x2, h,c;
	cout << "Введіть [x1; x2] та крок h\n";
	cin >> x1 >> x2 >> h;
	x = x1;
	while (x <= x2 + h)
	{
		y = (log(pow(x, 2)) + pow(x, 2) + 2);
		cout << setw(10) << "x = " << x << setw(15) << "y = " << y << endl;
		x += h;
	}
	cout << "****************DO_WHILE***************" << endl;
	x = x1;
		x = x1;
	do
	{
		y = (log(pow(x, 2)) + pow(x, 2) + 2);
		cout << setw(10) << "x = " << x << setw(15) << "y = " << y << endl;
		x += h;
	} while (x <= x2 + h);
	c = sin(27);
		cout << c;
}