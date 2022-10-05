#include<stdio.h>

int main(){
    int marks[5];
    int *ptr = &marks[0];
    //Input
    for(int i=0;i<5;i++){
        printf("%d index is : ",i);
        scanf("%d", (ptr+i));  //Can also be written as &marks[i] because array is also a pointer
    }
    //Output
    for(int i=0;i<5;i++){
        printf("%d index is %d\n", i, *(ptr+i));
    } 
    return 0;
}