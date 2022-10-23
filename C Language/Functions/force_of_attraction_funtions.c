#include <stdio.h>
float force(float mass);
int main()
{
    int mass;
    printf("Enter the mass of body : ");
    scanf("%d", &mass);
    printf("The force of attraction is %.01f", force(mass));
    return 0;
}
float force(float mass)
{
    float result;
    result = mass * 9.8;
    return result;
}
