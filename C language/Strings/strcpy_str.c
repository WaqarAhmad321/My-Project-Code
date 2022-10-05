#include<stdio.h>
#include<string.h>
//To copy the content of first string into second string
int main(){
    char *str1 = "Hello World!";
    char str2[20] = "World Hello!";
    strcpy(str2, str1);
    printf("The second string is now %s", str2);
    return 0;
}