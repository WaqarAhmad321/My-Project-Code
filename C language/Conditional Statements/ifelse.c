#include<stdio.h>
int main()
{
    // Conditional statements
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("You are an Adult. \n");
        printf("Thank You! \n");
    }
    else if(age > 13 && age < 18) {
        printf("You are a teenager. \n");
        printf("No thank you. \n");
    }
    else {
        printf("You are a Child. \n");
        printf("Tu chutti kr! \n");
    }
    
    return 0;

}