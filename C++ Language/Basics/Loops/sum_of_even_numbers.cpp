#include <iostream>
// To print the sum of even number from 1 to n
using namespace std;

int main()
{
    int n;
    cout << "Enter the number :" << endl;
    cin >> n;
    // i is started from 0 because 0 is an prime number
    int i = 0, sum = 0;
    while (i <= n)
    {
        sum += i;
        i = i + 2;
    }
    cout << "The sum is :" << sum;
    return 0;
}