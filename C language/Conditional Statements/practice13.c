#include<stdio.h>
// To check the input character is uppercase or not
int main(){
    char alphabet;
    printf("Enter the character : ");
    scanf("%c", &alphabet);
    if(alphabet >= 'A' && alphabet <= 'Z'){
        printf("It is an Upper case character.");
    }
    else if(alphabet >= 'a' && alphabet <= 'z'){
        printf("It is a Lower case character.");
    }
    else{
        printf("Invalid input! The input is not alphabet.");
    }
    return 0;
}
