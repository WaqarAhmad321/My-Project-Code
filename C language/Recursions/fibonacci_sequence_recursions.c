#include<stdio.h>
//To find the sum of n fibonacci number
int fib(int n);
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The sum of squence is : %d",fib(n));
    return 0;
}
//Formula to calculate fibnocci sum is fib(n-1) + fib(n-2)
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibo = fib(n-1) + fib (n-2);
    return fibo;
}