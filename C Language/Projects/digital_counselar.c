#include <stdio.h>
#include <conio.h>
/*Written by : Waqar Ahmad
  Date : 06/09/2022
  Location : Mars
  Output : Digital Counselor*/
int main()
{
    char name[50], fathername[50];
    int marks[100], uni;
    printf("<****************Welcome to your Digital Student Counselor****************>\n");
    printf("What is your name : ");
    gets(name);
    printf("What is your father's name : ");
    gets(fathername);
    printf("How many marks did you get in matric : ");
    scanf("%d", &marks[1]);
    printf("What are your expected mark is Intermediate Part 1 : ");
    scanf("%d", &marks[2]);
    if (marks[2] >= 505)
    {
        printf("Enter your actual marks your expecting !");
    }
    else if (marks[2] >= 450)
    {
        printf("Good!Keep it up\n");
    }
    else if (marks[2] >= 400)
    {
        printf("Not Bad!Keep it up!\n");
    }
    else if (marks[2] >= 350)
    {
        printf("You need improvement!Keep it up\n");
    }
    else if (marks[2] >= 300)
    {
        printf("You should have to work hard!Keep it up\n");
    }
    else
    {
        printf("Tell me your expected marks!other wise tu chutti kr\n");
    }
    printf("In which university you wanna go :\n 1)NUST 2)FAST 3)PUCIT 4)ITU 5)UET 6)PIEAS 7)GIKI 8)NFC 9)Foreign university 10)other plans\n");
    scanf("%d", &uni);
    printf("Good choice!!!\n");
    printf("<***************Thanks*******************>");
    getch();

    return 0;
}