#include <stdio.h>
// To check whether the number is divisible or not!!!
int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d", &number);
    if (number % 97 == 0)
    {
        printf("It is divisible by 97.");
    }
    else
    {
        printf("It is not divisible by 97.");
    }
    return 0;
}