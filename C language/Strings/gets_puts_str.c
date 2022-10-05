#include<stdio.h>

int main(){
    char str[50];
    printf("Enter your name:");
    //Gets function is used to input a string
    gets(str);
    //Puts function is used to output a string
    puts(str);
    //string can also be print as
    printf("Your name is %s.",str);
    
}