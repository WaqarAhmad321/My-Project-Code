#include<stdio.h>
//To print the address of variable by using pointers and functions
void address(int *i);
int main(){
    int i;
    printf("The address of i is %u\n", &i);
    address(&i);
    return 0;
}
void address(int *i){
    printf("The address of i is : %u\n",i);
}