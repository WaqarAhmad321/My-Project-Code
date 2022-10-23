// Online C compiler to run C program online
#include <stdio.h>
float circleArea(float rad);
float rectangleArea(float a, float b);
float squareArea(float side);

int main()
{
    // Area of Circle
    float rad;
    printf("Enter Radius:");
    scanf("%f", &rad);
    printf("Area of CIRCLE is:%f\n", circleArea(rad));

    printf("<*****************Thanks*****************>\n");

    // Area of Reatangle
    float a, b;
    printf("Enter Length:");
    scanf("%f", &a);
    printf("Enter Width:");
    scanf("%f", &b);
    printf("Area of RECTANGLE is:%f\n", rectangleArea(a, b));

    printf("<....................Thanks....................\n>");

    // Area of Square
    float side;
    printf("Enter Side:");
    scanf("%f", &side);
    printf("Area of SQUARE is:%f\n", squareArea(side));

    printf("<....................Thanks....................>");

    return 0;
}
float circleArea(float rad)
{
    return 3.14 * rad * rad;
}
float rectangleArea(float a, float b)
{
    return a * b;
}
float squareArea(float side)
{
    return side * side;
}