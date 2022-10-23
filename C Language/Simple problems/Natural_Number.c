#include <stdio.h>
// To find whether the number is natural or not using conditional statements
int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d", &number);
    if (number >= 1)
    {
        printf("It is a Natural number.");
    }
    else if (number >= 'a' && number <= 'z')
    {
        printf("It is not a Natural number.");
    }
    else
    {
        printf("It is not a number.");
    }
    return 0;
}