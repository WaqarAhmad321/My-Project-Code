#include<stdio.h>
//To print all characters of string using loop
void printString(char arr[]);
int main(){
    char firstName[10] = "Waqar";
    char lastName[10] = "Ahmad";
    // printf("Enter your first name : ");
    // gets(firstName);
    // printf("Enter your second name : ");
    // gets(lastName);
    printString(firstName);
    printString(lastName);
    return 0;
}
void printString(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}