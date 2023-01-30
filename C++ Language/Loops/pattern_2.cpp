#include <iostream>
// 111...n
// 222...n
// 333...n
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
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}