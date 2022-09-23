#include<stdio.h>
int sum_average(int *n1,int *n2,int *sum,int *average);
int main(){
    int n1,n2,sum,average;
    printf("Enter the first number : ");
    scanf("%d", &n1);
    printf("Enter the second number : ");
    scanf("%d", &n2);
    sum_average(&n1,&n2,&sum,&average);
    printf("The sum of numbers is : %d\n",sum);
    printf("The average of numbers is : %d\n",average);
    

    return 0;
}
int sum_average(int *n1,int *n2,int *sum,int *average){
    *sum = *n1 + *n1;
    *average = (*n1 + *n1)/2;
}
