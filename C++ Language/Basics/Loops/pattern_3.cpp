#include <iostream>
// 123...n
// 123...n
// 123...n
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
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}