#include <stdio.h>
int factorial(int n);
// To find the factorial of number
int main()
{
    int n;
    printf("Enter the number to find factorial : ");
    scanf("%d", &n);
    printf("The factorial of %d is %d", n, factorial(n));
    return 0;
}
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        int fact;
        fact = n * factorial(n - 1);
        return fact;
    }
}