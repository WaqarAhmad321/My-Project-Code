#include <iostream>
// 321...n
// 321...n
// 321...n
// .
// .
// .
// n
using namespace std;

int main()
{
    int n;
    cout << "Enter the number :" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n - j + 1;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}