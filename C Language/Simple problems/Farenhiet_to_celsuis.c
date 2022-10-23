#include <stdio.h>
// To convert the temperature from far to cel
int main()
{
    float temperature, conversion;
    printf("Enter the temperature in farenhiet :");
    scanf("%f", &temperature);
    conversion = (temperature * 9 / 5) + 32;
    printf("The temperature in Celsius is : %f", conversion);
}