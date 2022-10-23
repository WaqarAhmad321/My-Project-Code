#include <stdio.h>

int main()
{
    // To print the numbers from 0 to 10
    int a = 0;
    while (a <= 10)
    {
        printf("%d\n", a);
        a++;
    }
    // To print the numbers from 10 to 20
    int a = 0;
    while (a <= 20)
    {
        if (a >= 10)
        {
            printf("The value of a is : %d\n ", a);
        }
        a++;
    }
    // To print the sum the of natural numbers
    int n = 10, i = 1, sum = 0;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("The sum is : %d ", sum);

    return 0;
}