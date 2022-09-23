#include<stdio.h>
int address(int *n);
int main() {
    int n;
    printf("The address of n is : %u\n",&n);
    address(&n);
    
    return 0;
}
int address(int *n) {
    printf("The address of n is : %u\n", n);
}