#include <stdio.h>

int main()
{
    int asterisks;
    for (int i = 1; i <= 4; i++)
    {
        printf("****\n");
        for (int i = 1; i <= 3; i++)
        {
            printf("*");
        }
    }
    return 0;
}