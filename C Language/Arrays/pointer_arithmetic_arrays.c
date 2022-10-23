#include <stdio.h>
// The address of pointer increases and decreases according to data type using arithmetic operater(+ - only)
// Pointers can also be substract and compared with each other
int main()
{
    int age = 22;
    int _age = 22;
    int *ptr = &age;
    int *_ptr = &_age;
    printf("The address of pointer is %u\n", ptr);
    ptr++;
    printf("The address of pointer is %u\n", ptr);
    printf("The substraction of pointers is %d\n", ptr - _ptr);
    printf("The comparison of pointers is %d\n", ptr == _ptr);
}