#include <stdio.h>
// To generate the table of any number in a text file
int main()
{
    FILE *fptr;
    fptr = fopen("table_write.txt", "w");
    int n;
    printf("Enter the number you want the table of : ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        fprintf(fptr, "%d * %d = %d\n", n, i, n * i);
    }
    printf("Successfully generated the table of %d in table_write.txt", n);
    fclose(fptr);
    return 0;
}