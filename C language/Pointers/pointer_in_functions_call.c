#include<stdio.h>
//To print the value using call by value
int square(int n);
int main(){
    int n=4;
    printf("The square of n is %d", square(n));
    return 0;
}
int square(int n){
    n = n * n; 
    return n;
}
// To print the value using call by address of variable as argument
int _square(int *n);
int main(){
    int n=4;
    printf("The square of n is %d", _square(&n));
}
int _square(int *n){
    *n = (*n) * (*n);
    return *n;
}