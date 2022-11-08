#include <iostream>
// Sytax for referencing variables
using namespace std;

int main()
{
    int a = 12;
    int &b = a;
    cout << "The value of b is " << b;
    return 0;
}