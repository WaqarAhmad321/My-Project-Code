#include<stdio.h>
//To print the value of variable using pointer to pointer (most repeated error : pptr)
int main(){
    int i=5;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("The value of i is %d\n", **pptr);

    return 0;
}