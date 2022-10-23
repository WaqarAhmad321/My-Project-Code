#include<stdio.h>
//To input and print the string
int main(){
    //The size of the string should be entered
    char str[20];
    printf("Enter your name: ");
    scanf("%s", str);
    printf("Your name is %s.", str);
    return 0;
}