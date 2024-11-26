#include <iostream>
#include <iomanip>
#include "windows.h"
#define _USE_MATH_DEFINES
#include "math.h"
using namespace std;
double func_a(double y, double c, double x, double z)
{
	return(y != 0 && (x + y) > 0) ? -1 * 4 * z * (pow(pow(x + y, 2) / (y * y), 3) - abs(3 * y + 5 * pow(x, -1))) + exp(3) : 0;

	SetConsoleOutputCP(1251);
	double x, c, y, a, z;
	cout << "Введіть x, c, y, a, z" << endl;
	cin >> x >> c >> y >> a >> z;
		cout << "C = " << fixed << setprecision(2) << func_c(func_a(x, c, y, z), func_b(x, c, y, a, z)) << endl;
}