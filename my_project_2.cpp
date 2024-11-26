#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    cout << setw(14) << showpos << internal << fixed << setprecision(2) << -67.09124 << endl;
    cout << showpos << setw(8) << right << 235 << endl;

    cout  << right << showpos << setprecision(2) << -121.0 << endl;
    cout << showpos<< dec << +1  << +24 << endl;
    cout << "String1" << '\n'<< '\t' << "String2" << '\n' << setw(23) << "String3" << endl;
 
}
