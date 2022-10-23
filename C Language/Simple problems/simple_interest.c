#include <stdio.h>
int main()
{
    int principle, rate, years, simpleinterest;
    printf("Enter the principle value : ");
    scanf("%d", principle);
    printf("Enter the rate of interest : ");
    scanf("%d", rate);
    printf("Enter the value of interest : ");
    scanf("%d", years);
    simpleinterest = (principle * rate * years) / 100;
    printf("The simple interest is : %d ", simpleinterest);
}