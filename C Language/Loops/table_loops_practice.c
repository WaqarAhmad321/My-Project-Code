#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    // To print the table
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", i * n);
    }
    // To print the table in reverse order
    for (int i = 10; i; i--)
    {
        printf("%d \n", i * n);
    }

    return 0;
}
