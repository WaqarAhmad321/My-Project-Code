#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("3_integer_read.txt", "r");
    int n1,n2,n3;
    fscanf(fptr, "%d %d %d", &n1, &n2, &n3);
    printf("The first integer is %d.\n", n1);
    printf("The second integer is %d.\n", n2);
    printf("The third integer is %d.", n3);
    fclose(fptr);
    return 0;
}