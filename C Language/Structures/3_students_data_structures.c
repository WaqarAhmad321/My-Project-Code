#include <stdio.h>
#include <string.h>
// To print the data of three students using structures
struct students
{
    char name[100];
    int roll;
    float marks;
};
int main()
{
    char std[100];
    struct students s1;
    strcpy(s1.name, "Waqar");
    s1.roll = 169;
    s1.marks = 144;
    struct students s2;
    strcpy(s2.name, "Ammar");
    s2.roll = 21;
    s2.marks = 144;
    struct students s3;
    strcpy(s3.name, "Umer");
    s3.roll = 131;
    s3.marks = 146;
    printf("Enter the name of student : ");
    gets(std);
    if (std == "s")
    {
        printf("The name of student 1 is : %s\n", s1.name);
        printf("The roll number of student 1 is : %d\n", s1.roll);
        printf("The marks of student 1 are : %f\n", s1.marks);
    }
    else if (std == "Ammar Hassan")
    {
        printf("The name of student 1 is : %s\n", s2.name);
        printf("The roll number of student 1 is : %d\n", s2.roll);
        printf("The marks of student 1 are : %f\n", s2.marks);
    }
    else if (std == "Umer Saeed")
    {
        printf("The name of student 1 is : %s\n", s3.name);
        printf("The roll number of student 1 is : %d\n", s3.roll);
        printf("The marks of student 1 are : %f\n", s3.marks);
    }
    else
    {
        printf("Invalid entry ! Enter the name of student from following :\n Ammar Hassan , Waqar Ahmad , Umer Saeed");
    }

    return 0;
}