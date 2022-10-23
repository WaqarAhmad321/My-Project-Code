#include <stdio.h>
// To print the address and value of the variable using pointers
int main()
{
    int a = 6;
    int *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The value of is %d", *ptr);
    return 0;
}