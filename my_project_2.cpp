#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << showpos << setw(8) << right << 4 << endl;
    cout << setw(14) << showpos << internal << fixed << setprecision(2) << -67.09124 << endl;
    cout << showpos << setw(8) << right << 235 << endl;

}
