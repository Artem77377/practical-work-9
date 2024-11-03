#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << showpos << setw(8) << right << 4 << endl;
    cout << setw(14) << showpos << internal << fixed << setprecision(2) << -67.09124 << endl;
    cout << showpos << setw(8) << right << 235 << endl;
    cout << hex << 2209 << endl;
    cout  << right << showpos << setprecision(2) << -121.0 << endl;
    cout << showpos<< dec << +1  << +24 << endl;
    cout << "String1" << '\n'<< '\t' << "String2" << '\n' << setw(23) << "String3" << endl;
    cout << setw(15) <<"String1" << '\n' << "String2" << endl;
    cout << 3;
    cout << "*";
}
