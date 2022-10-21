#include<stdio.h>
//Syntax to open and close a file 
int main(){
    //File open
    FILE *fptr;
    fptr = fopen("File.txt", "r");
    //File close
    fclose(fptr);
    return 0;
}