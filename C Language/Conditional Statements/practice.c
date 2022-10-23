#include <stdio.h>
// To check the numbers are equal or not
int main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    int b;
    printf("Enter the value of b : ");
    scanf("%d", &b);
    if (a == b)
    {
        printf("Number 1 and Number 2 are equal.");
    }
    else
    {
        printf("Number 1 and Number 2 are not equal.");
    }
    return 0;
}