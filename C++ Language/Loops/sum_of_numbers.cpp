#include <iostream>
// To print the sum of numbers from 1 to n
using namespace std;

int main()
{
    int n;
    cout << "Enter the number :" << endl;
    cin >> n;
    int i = 1, sum = 0;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << "The sum of numbers is " << sum << endl;
    return 0;
}