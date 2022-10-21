#include<stdio.h>
#include<conio.h>
//Simple decleration and initization of structures
struct student{
    char name[100];
    int roll;
    float marks;
};
int main(){
    struct student s1;
    printf("Enter the name of student : ");
    gets(s1.name);
    printf("Enter the roll number of student : ");
    scanf("%d", &s1.roll);
    printf("Enter the marks of student : ");
    scanf("%f", &s1.marks);
    printf("The name of student is : %s\n", s1.name);
    printf("The roll number of student is : %d\n", s1.roll);
    printf("The marks of student is : %.2f\n", s1.marks);
    getch();
    return 0;
}