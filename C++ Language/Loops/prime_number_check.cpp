#include <iostream>
// To check wether the number is prime or not for a spefic number using loops
using namespace std;

int main()
{
    int n;
    cout << "Enter the number :" << endl;
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "It is not prime for " << i << endl;
        }
        else
        {
            cout << "It is prime for " << i << endl;
        }
        i++;
    }
    return 0;
}