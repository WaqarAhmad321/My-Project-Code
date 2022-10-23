#include <stdio.h>
#include <math.h>
int printSquare(int n);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    float s = printSquare(n);
    printf("The Square of number is : %f", s);
    return 0;
}
int printSquare(int n)
{
    return pow(n, 2);
}