#include<stdio.h>
#include<conio.h>

int main(){
    char name[50], fathername[50];
    int marks, uni;
    printf("<****************Welcome to your Digital Student Counselor****************>\n");
    printf("What is your name : ");
    gets(name);
    printf("What is your father's name : ");
    gets(fathername);
    printf("What are your expected mark is Intermediate Part 1 : ");
    scanf("%d", &marks);
    if(marks>=450){
        printf("Good!Keep it up\n");}
    else if(marks>=400){
        printf("Not Bad!Keep it up!\n");
    }
    else if(marks>=350){
        printf("You need improvement!Keep it up\n");
    }
    else if(marks>=300){
        printf("You should have to work hard!Keep it up\n");
    }
    else{
        printf("Tell me your expected marks!other wise tu chutti kr\n");
    }
    printf("In which university you wanna go : 1)NUST 2)FAST 3)PUCIT 4)ITU 5)UET 6)PIEAS 7)GIKI 8)NFC 9)Foreign university 10)other plans\n");
    scanf("%d", &uni);
    printf("Good choice!!!\n");
    printf("<***************Thanks*******************>");
    getch();
    return 0;
}