#include<stdio.h>

int main(){
    char str[50];
    char ch;
    int i = 0;
    printf("Enter the characters : ");
    while(ch != '\n'){
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    printf("The character is : %s", str);
    return 0;
}