#include <iostream>

using namespace std;

int main()
{
    int a, b, temp;
    cout << "Enter first number :" << endl;
    cin >> a;
    cout << "Enter second number :" << endl;
    cin >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "The value of a is : " << a << endl;
    cout << "The value of b is : " << b << endl;
    return 0;
}