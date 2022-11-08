#include <iostream>
using namespace std;
// To print the sum of two numbers
int main()
{
    int num1, num2;
    cout << "Enter the first number : \n"; // << is called Insertion operator
    cin >> num1;
    cout << "Enter the second number : \n"; // >> is called Extraction operator
    cin >> num2;
    cout << "The sum of numbers is : " << num1 + num2;

    return 0;
}