#include<stdio.h>
#include<string.h>
//To compare the strings entered by the user using strcmp library function
int main(){
    char str1[20],str2[20];
    printf("enter first string : ");
    gets(str1);
    printf("enter second string : ");
    gets(str2);
    int a;
    a = strcmp(str2,str1);
    printf("The comparision is : %d", a);
    return 0;
}