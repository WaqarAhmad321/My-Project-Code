#include <stdio.h>
// typedef keyword is used to make alias (nick name) of the structure
typedef struct ICSstudents
{
    char name[100];
    char class[100];
    int roll;
    int marks;
} ics;
int main()
{
    ics s1 = {"Waqar Ahmad", "ICS", 169, 459};
    printf("The name of student is : %s\n", s1.name);
    printf("The class of student is : %s\n", s1.class);
    printf("The roll number of student is : %d\n", s1.roll);
    printf("The roll number of student is : %d\n", s1.marks);
    return 0;
}