#include<stdio.h>
//Arrow operator is used while using pointers in structures
struct students{
    char name[100];
    char class[10];
    int roll;
    float marks;
};
int main(){
    struct students s1 = {"Waqar Ahmad", "ICS", 169, 459};
    struct students *ptr = &s1;
    printf("The name of student is : %s\n", ptr->name);
    printf("The roll number of student is : %s\n", ptr->class);
    printf("The roll number of student is : %d\n", ptr->roll);
    printf("The marks of student is : %.0f\n", ptr->marks);
    return 0;
}