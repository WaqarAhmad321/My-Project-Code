#include<stdio.h>
#include<string.h>
//Usage of arrays in structures to store data in array notation
//Arrays should be used in main function to store data like s1 s2 s3...
struct ICS{
    char name[100];
    int roll;
    float marks;
};
int main(){
    struct ICS student[0];
    strcpy(student[0].name, "Waqar");
    student[0].roll = 169;
    student[0].marks = 459;
    printf("The Name of student is : %s\n", student[0].name);
    printf("The Roll number of student is : %d\n", student[0].roll);
    printf("The Marks of student are : %.0f\n", student[0].marks);
    return 0;
}