#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 5; i <= 55; i++)
    {
        sum += i;
    }
    printf("The sum of numbers is : %d", sum);
    return 0;
}