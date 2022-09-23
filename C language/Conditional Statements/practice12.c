#include<stdio.h>
// To calculate the area of cicle and the height of circle
int main(){
    float pi, radius;
    printf("Enter the value of pi : \n");
    scanf("%d", &pi);
    printf("Enter the radius of circle : \n");
    scanf("%d", &radius);
    // printf("Area of the cicle is : %f\n", pi * radius * radius);
    float height;
    printf("Enter the height of cylinder : \n");
    scanf("%d", &height);
    printf("Volume of the cyclinder is : \n%d", pi * radius * radius * height);
    return 0;
}