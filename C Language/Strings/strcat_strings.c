#include<stdio.h>
#include<string.h> 
//To copy (concatinate) the contents of one string into another
int main(){
    //The size of target string must be written to execute program
    char str1[20] = "Hello";
    char *str2 = "Waqar";
    strcat(str1, str2);
    printf("The str1 is now %s", str1);
    return 0;
    
}
