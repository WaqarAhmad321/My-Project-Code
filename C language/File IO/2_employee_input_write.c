#include<stdio.h>
typedef struct employees{
    char name[100];
    int salary;
} emp;
int main(){
    FILE *fptr;
    fptr = fopen("2_employee_input_write.txt", "w");
    emp e1;
    emp e2;
    printf("Enter the name of first employee : ");
    gets(e1.name);
    printf("Enter the salary of first employee : ");
    scanf("%d", &e1.salary);
    printf("Enter the name of second employee : ");
    scanf("%s", e2.name);
    printf("Enter the salary of second employee : ");
    scanf("%d", &e2.salary);
    fprintf(fptr , "%s, %d\n", e1.name, e1.salary);
    fprintf(fptr , "%s, %d", e2.name, e2.salary);
    printf("The information of the employees is successfully written.");
    f(close);

    return 0;
}