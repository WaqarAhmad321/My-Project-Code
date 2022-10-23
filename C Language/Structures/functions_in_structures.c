#include <stdio.h>
struct employee
{
    char name[100];
    int code;
    int salary;
};
void printInfo(struct employee e1);

int main()
{
    struct employee e1 = {"Haris Khan", 1660, 4000000};
    printInfo(e1);
    return 0;
}
void printInfo(struct employee e1)
{
    printf("The information of the employee :\n");
    printf("The name of employee is : %s\n", e1.name);
    printf("The code of employee is : %d\n", e1.code);
    printf("The salary of employee is : %d\n", e1.salary);
}