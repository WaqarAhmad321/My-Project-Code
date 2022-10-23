#include <stdio.h>
int printCount(int arr[], int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    printCount(arr, 6);
    return 0;
}
int printCount(int arr[], int n)
{
    for (int i; i < n; i++)
    {
        if (n != 0)
        {
            printf("There are %d odd numbers", n);
        }
    }
}