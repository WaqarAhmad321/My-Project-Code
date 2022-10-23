#include <stdio.h>
// To print the table of any number
int main()
{
    int n, i;
    printf("Enter the number : ");
    scanf("%d \n", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d \n", i * n);
    }
    return 0;
}