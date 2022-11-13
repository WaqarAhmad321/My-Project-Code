#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "Enter a character :" << endl;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "It is in lower case.";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "It is in uppercase.";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "It is numeric.";
    }
    return 0;
}