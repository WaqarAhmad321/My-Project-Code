#include<stdio.h>
//To print the data of student using structues and making functions of it
struct student{
    char name[100];
    char class[100];
    int roll;
    int marks;
};

void printInfo(struct student s1);

int main(){
    struct student s1 = {"Waqar Ahmad", "ICS", 169, 459};
    printInfo(s1);
    return 0;
}

void printInfo(struct student s1){
    printf("The name of student is : %s\n", s1.name);
    printf("The class of student is : %s\n", s1.class);
    printf("The roll number of student is : %d\n", s1.roll);
    printf("The roll number of student is : %d\n", s1.marks);
}
