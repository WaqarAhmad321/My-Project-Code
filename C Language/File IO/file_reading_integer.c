#include <stdio.h>
// To read the content of file and print (integer)
int main()
{
    FILE *fptr;
    int num;
    fptr = fopen("file_reading.txt", "r");
    // fscanf is used to read the content of file and print it
    fscanf(fptr, "%d", &num);
    printf("The value of num is %d", num);
    // Closing the file is considered to be a good practice
    fclose(fptr);
    return 0;
}