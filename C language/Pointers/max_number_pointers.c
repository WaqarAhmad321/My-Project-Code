#include<stdio.h>
//To print the maximum value between two numbers using pointers
int main(){
    int a,b;
    int *ptra = &a;
    int *ptrb = &b;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    if( *ptra > *ptrb){
        printf("The value of a is greater than b.");
    }
    else{
        printf("The value of b is greater than a.");
    }
    return 0;
}