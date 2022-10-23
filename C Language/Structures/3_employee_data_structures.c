#include <stdio.h>
#include <string.h>
// To print the data of 3 employees using structures
struct employee
{
    char name[100];
    int code;
    float salary;
};
int main()
{
    struct employee e1 = {"Jason Roy", 1718, 120000};
    struct employee e2 = {"John Flemming", 1122, 200000};
    struct employee e3 = {"Ali Ahmad", 1690, 2200000};
    printf("The name of first employee is : %s\n", e1.name);
    printf("The code of 1st employee is : %d\n", e1.code);
    printf("The salary of 1st employee is : %.0f\n", e1.salary);
    printf("<------------------------------------->\n");
    printf("The name of first employee is : %s\n", e2.name);
    printf("The code of 1st employee is : %d\n", e2.code);
    printf("The salary of 1st employee is : %.0f\n", e2.salary);
    printf("<------------------------------------->\n");
    printf("The name of first employee is : %s\n", e2.name);
    printf("The code of 1st employee is : %d\n", e2.code);
    printf("The salary of 1st employee is : %.0f\n", e2.salary);
    printf("<------------------------------------->\n");
    return 0;
}