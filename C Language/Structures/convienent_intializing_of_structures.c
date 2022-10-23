#include <stdio.h>
// Easy way to initialize the structures
struct students
{
    char name[100];
    char class[10];
    int roll;
    float marks;
};
int main()
{
    // The order of initialization should be according to above structure to store correct data
    struct students s1 = {"Waqar Ahmad", "ICS", 169, 459};
    printf("The name of student is : %s\n", s1.name);
    printf("The class of student is : %s\n", s1.class);
    printf("The roll of student is : %d\n", s1.roll);
    printf("The name of student is : %.0f\n", s1.marks);
    return 0;
}