#include <stdio.h>
// To calculate the sum of two vectors
struct vectors
{
    int x;
    int y;
};

int calcSum(struct vectors v1, struct vectors v2, struct vectors sum);

int main()
{
    struct vectors sum = {0};
    struct vectors v1 = {3, 5};
    struct vectors v2 = {2, 4};
    calcSum(v1, v2, sum);
    return 0;
}
int calcSum(struct vectors v1, struct vectors v2, struct vectors sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("The sum of x-vectors is : %d\n", sum.x);
    printf("The sum of y-vector is : %d\n", sum.y);
}
