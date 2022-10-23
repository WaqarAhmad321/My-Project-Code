#include <stdio.h>

int main()
{
    float marks[5], sum, per;
    printf("Enter your marks in Physics : ");
    scanf("%f", &marks[0]);
    printf("Enter your marks in Computer : ");
    scanf("%f", &marks[1]);
    printf("Enter your marks in Maths : ");
    scanf("%f", &marks[2]);
    printf("Enter your marks in Urdu : ");
    scanf("%f", &marks[3]);
    printf("Enter your marks in Pak Studies  : ");
    scanf("%f", &marks[4]);
    printf("Enter your marks in English : ");
    scanf("%f", &marks[5]);
    sum = marks[0] + marks[2] + marks[3] + marks[4] + marks[5];
    per = sum / 175 * 100;
    if (per > 100)
    {
        printf("You entered wrong marks!!! Enter your obtained marks according to fortnight!!! ");
    }
    else if (per >= 90)
    {
        printf("Congratulations!!! You are Passed!!! Your percentage is %.02f and got A++ grade.", per);
    }
    else if (per >= 80)
    {
        printf("Congratulations!!! You are Passed!!! Your percentage is %.02f  and got A+ grade.", per);
    }
    else if (per >= 70)
    {
        printf("Good!!! You are Passed!!! Your percentage is %.02f  and got B grade.", per);
    }
    else if (per >= 60)
    {
        printf("Fair!!! You are Passed!!! Your percentage is %.02f  and got C grade.", per);
    }
    else if (per >= 50)
    {
        printf("Average!!! You are Passed!!! Your percentage is %.02f  and got D grade.", per);
    }
    else if (per >= 40)
    {
        printf("Keep it up!!! You are Passed!!! Your percentage is %.02f  and got E grade.", per);
    }
    else if (per < 40)
    {
        printf("Try next time!!! You are Failed!!!!!! Your percentage is %.02f. ", per);
    }
    return 0;
    // All rights reserved!!!(Just for fun)
}
