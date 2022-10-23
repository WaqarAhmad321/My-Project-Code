#include <stdio.h>
int main()
{
    int age = 64;
    int *ptr = &age;
    printf("The value of age is : %d\n", *ptr);
    printf("The value of age is : %d\n", *(&age));
    printf("The address of age is : %u\n", &age);
    printf("The address of age is : %u\n", &ptr);
    puts("The");

    return 0;
}