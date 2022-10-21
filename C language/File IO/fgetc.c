#include<stdio.h>
//To read character from the file and print it
int main(){
    FILE *fptr;
    fptr = fopen("fgetc.txt", "r");
    char c;
    //fgetc is used to read character 
    c = fgetc(fptr);
    printf("The character is : %c\n", c);
    fclose(fptr);
    return 0;
}