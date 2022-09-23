#include<stdio.h>
float SquareArea(float side);
float CircleArea(float rad);
float RectangleArea(float length,float breadth);
int main(){
    float side, rad, length, breadth;
    printf("Enter the length of side of square : ");
    scanf("%f",&side);
    printf("The Area of Square is : %.02fcm \n",SquareArea(side));
    printf("Enter the lenth of rectangle : ");
    scanf("%f",&length);
    printf("Enter the breadth of rectangle : ");
    scanf("%f",&breadth);
    printf("The Area of Rectangle is : %.02fcm \n",RectangleArea(length,breadth));
    printf("Enter the radius of circle : ");
    scanf("%f",&rad);
    printf("The Area of Circle is : %.02fcm \n", CircleArea(rad)); 
    return 0;
}float SquareArea(float side){
    return side * side;
}
float CircleArea(float rad){
    return 3.14 * rad * rad;
}
float RectangleArea(float length,float breadth){
    return length * breadth;
}