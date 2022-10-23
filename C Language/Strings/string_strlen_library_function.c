#include<stdio.h>
#include<string.h>
//To print the length of the string "excluding" the null character
int main(){
    char *str = "Waqar";
    int a = strlen(str);
    printf("The length of string is %d.", a);
    return 0;
}