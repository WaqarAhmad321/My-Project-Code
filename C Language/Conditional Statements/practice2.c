#include <stdio.h>
int main()
{
    // To check given number is even or odd integer
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("It is an even integer.");
    }
    else
    {
        printf("It is an odd integer.");
    }
    return 0;
}