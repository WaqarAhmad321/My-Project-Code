#include <iostream>

using namespace std;

int main()
{
    int a = 34;
    cout << "The value of a is " << a << endl;
    a = 23;
    cout << "The value of a is " << a << endl;
    const int b = 12; // The value of constant b can never be modified
    cout << "The value of b is " << b << endl;
    return 0;
}