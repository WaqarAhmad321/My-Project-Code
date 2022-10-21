#include<stdio.h>
//To write data into a file
int main(){
    FILE *fptr;
    fptr = fopen("file_writing(generated)", "w");
    //fprintf is used to write data into the file
    fprintf(fptr, "This is a text.");
    fclose(fptr);
    return 0;
} 