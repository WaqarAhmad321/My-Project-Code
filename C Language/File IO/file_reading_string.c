#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("file_reading_string.txt", "r");
    int str[100];
    fscanf(fptr, "%s", str);
    printf("%s", str);
    fclose(fptr);
    return 0;
}