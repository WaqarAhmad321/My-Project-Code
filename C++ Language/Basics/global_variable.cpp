#include <iostream>
// To use global variable in local function
using namespace std;
int c = 45;
int main()
{
    int c = 34;
    cout << "The value of local c is " << c << endl;
    cout << "The value of global c is " << ::c; // :: is called scope resolution operator
    return 0;
}