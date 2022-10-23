#include <stdio.h>
// To interchange the values using pointers
void swap(int *a, int *b);
int main()
{
    int a, b;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("The value of a is %d and b is %d", a, b);
    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}