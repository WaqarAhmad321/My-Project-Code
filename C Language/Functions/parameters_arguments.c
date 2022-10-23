#include <stdio.h>
float SquareArea(float side); // Function prototype
float RectangleArea(float a, float b);
float CircleArea(float rad);
int main()
{
    float side = 3;
    printf("The Area of Square is : %f ", SquareArea(side));

    return 0;
}
float SquareArea(float side)
{
    return side * side;
}