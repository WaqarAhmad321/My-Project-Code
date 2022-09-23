#include<stdio.h>
//To print the table of the number
int main(){
    int number, i;
    printf("Enter the number : ");
    scanf("%d", &number);
    for(i<=1;i<=10;i++){
        printf(i*number);
    }
    return 0;
}