#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 1, b = 23, c = 456, d = 7890;
    // Manipulators in C++ are like field width specifier in C
    cout << "The value of a is " << setw(4) << a << endl;
    cout << "The value of a is " << setw(4) << b << endl;
    cout << "The value of b is " << setw(4) << c << endl;
    cout << "The value of d is " << setw(4) << d << endl;

    return 0;
}