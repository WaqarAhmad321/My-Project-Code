#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *ptr;
    ptr = (float *)malloc(5 * sizeof(float));
    for (int i = 1; i <= 5; i++)
    {
        printf("Enter the value of %d element : ", i);
        scanf("%f", &ptr[i]);
    }
    for (int i = 1; i <= 5; i++)
    {
        printf("The value of %d element is %.1f", i, ptr[i]);
    }

    return 0;
}