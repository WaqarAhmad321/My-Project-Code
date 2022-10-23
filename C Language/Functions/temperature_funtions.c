#include <stdio.h>
// To convert temperature from cel to far using functions
int conversion(int temp);
int main()
{
    int temp;
    printf("Enter the temperature : ");
    scanf("%d", &temp);
    printf("The temperature in Celsius is : %dC ", conversion(temp));
    return 0;
}
int conversion(int temp)
{
    int result;
    result = (temp * 9 / 5) + 32;
    return result;
}