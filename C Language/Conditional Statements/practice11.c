#include <stdio.h>
// To calculate the area of rectangle
int main()
{
    float length, breadth;
    printf("Enter the length of rectangle : ");
    scanf("%d", &length);
    printf("Enter the breadth of rectangle : ");
    scanf("%d", &breadth);
    printf("Area of the rectangle is : %f", length * breadth);
    return 0;
}