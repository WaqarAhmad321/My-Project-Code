#include<stdio.h>
//To check wether the character is present in the string or not
void checkChar(char str[], char ch);
int main(){
    char str[50] = "Waqar Ahmad";
    char ch;
    printf("Enter the character to check : ");
    scanf("%c", &ch);
    checkChar(str, ch);
    return 0;
}
void checkChar(char str[], char ch){
    for(int i=0; str[i] != '\0'; i++){
        if (ch == str[i]){
            printf("The character is present:)");
            return;
        }
    }
    printf("The character is not present:(");
}