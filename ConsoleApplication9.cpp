#include <iostream>
#include <iomanip>
#include "windows.h"
#define _USE_MATH_DEFINES
#include "math.h"
using namespace std;
double func_a(double y, double c, double x, double z)
{
	return(y != 0 && (x + y) > 0) ? -1 * 4 * z * (pow(pow(x + y, 2) / (y * y), 3) - abs(3 * y + 5 * pow(x, -1))) + exp(3) : 0;
}
double func_b(double x, double c, double y,double a, double z)
{
	return (x != 0 && (pow(pow(x, 2) + a - pow(y, 2) * pow(sin((x + z) / x), 3), 1 / 2.))>0) ? pow(pow(x, 2) + a - pow(y, 2)*pow(sin((x+z)/x),3),1/2.)+sin((3*M_PI)/20) : 0;
}
double func_c(double a, double b)
{
	return  a + b;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, c, y, a, z;
	cout << "Введіть x, c, y, a, z" << endl;
	cin >> x >> c >> y >> a >> z;
	cout << "A = " << fixed << setprecision(2) << func_a(x, c, y, z) << endl;
	cout << "B = " << fixed << setprecision(2) << func_b(x, c, y, a, z) << endl;
	cout << "C = " << fixed << setprecision(2) << func_c(func_a(x, c, y, z), func_b(x, c, y, a, z)) << endl;
}