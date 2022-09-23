#include<stdio.h>
// To check the grade of the student
int main(){
    int marks;
    printf("Enter the marks of the student : ");
    scanf("%d", &marks);
    if(marks < 30){
        printf("The student has C grade.");
    }
    else if(marks >= 30 && marks < 70){
        printf("The student has B grade.");
    }
    else if(marks >= 70 && marks < 90){
        printf("The student has A grade.");
    }
    else{
        printf("The student has A+ grade.");
    }
    return 0;
}