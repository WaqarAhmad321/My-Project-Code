#include<stdio.h>
//To calculate the sum of n natural numbers
int sum(int n);
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The sum is : %d ",sum(n));
    return 0;
}
//Formula of to find sum is sum(n-1) + n
int sum(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int sum_1 = sum(n-1);
    int sum_2 = sum_1 + n;
    return sum_2;

}