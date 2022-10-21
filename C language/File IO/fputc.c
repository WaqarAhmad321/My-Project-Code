#include<stdio.h>
//To write a character into the file 
int main(){
    FILE *fptr;
    fptr = fopen("fputc.txt", "r");
    char c = 'c';
    fputc(c, fptr);
    fclose(fptr);
    return 0;
}