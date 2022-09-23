#include<stdio.h>
/*Written by : Waqar Ahmad
  Date : 16/09/2022
  Location : Mars
  Output : To print the percentage of marks obtained by student and their grade in Fortnight exams*/
int main(){
    float Physics, Maths, Computer, Urdu, Pakstudies, English, sum, per;
    printf("Enter your marks in Physics : ");
     scanf("%f", &Physics);
    printf("Enter your marks in Computer : ");
     scanf("%f", &Computer);
    printf("Enter your marks in Maths : ");
     scanf("%f", &Maths);
    printf("Enter your marks in Urdu : ");
     scanf("%f", &Urdu);
    printf("Enter your marks in Pak Studies  : ");
     scanf("%f", &Pakstudies);
    printf("Enter your marks in English : ");
     scanf("%f", &English);
    sum = Physics+Maths+Computer+Urdu+Pakstudies+English;
    per = sum/175*100;
    if(per>100){
        printf("You entered wrong marks!!! Enter your obtained marks according to fortnight!!! ");
    }
    else if(per>=90){
        printf("Congratulations!!! You are Passed!!! Your percentage is %.02f and got A++ grade.",per);
    }
    else if(per>=80){
        printf("Congratulations!!! You are Passed!!! Your percentage is %.02f  and got A+ grade.",per);
    }
    else if(per>=70){
        printf("Good!!! You are Passed!!! Your percentage is %.02f  and got B grade.",per);
    }
    else if(per>=60){
        printf("Fair!!! You are Passed!!! Your percentage is %.02f  and got C grade.",per);
    }
    else if(per>=50){
        printf("Average!!! You are Passed!!! Your percentage is %.02f  and got D grade.",per);
    }
    else if(per>=40){
        printf("Keep it up!!! You are Passed!!! Your percentage is %.02f  and got E grade.",per);
    }
    else if(per<40){
        printf("Try next time!!! You are Failed!!!!!! Your percentage is %.02f. ",per);
    }
    return 0;
//All rights reserved!!!(Just for fun)
}