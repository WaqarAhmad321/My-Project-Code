#include <stdio.h>
// To print the factorial using forloop
int main()
{
    int n, i, factorial = 1;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("The factorial of number is : %d", factorial);
}