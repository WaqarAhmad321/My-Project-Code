#include <stdio.h>
int printfact(int n);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    return 0;
}
int printfact(int n)
{
    int fact;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        printf("The factorial of number is : ", printfact(fact * (n - 1)));
    }
}