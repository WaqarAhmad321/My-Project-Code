#include <stdio.h>
// Reading a file to check either it exists or not
int main()
{
    FILE *fptr;
    fptr = fopen("reading_file_file_IO.txt", "r");
    // If the file doesn't exist then NULL will be entered into the file
    if (fptr == NULL)
    {
        printf("File does'nt exist.");
    }
    // If the file exist then we can read it without any change
    else
    {
        printf("File exists.");
    }
    // File should be closed after using it because it uses resources
    fclose(fptr);
    return 0;
}