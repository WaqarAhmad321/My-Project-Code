#include<stdio.h>
//To count the occurrance of vowels in a string
int countVowel(char str[]);
int main(){
    char str[100];
    printf("Enter the string : ");
    gets(str);
    printf("There are %d vowels in the string.", countVowel(str));
    return 0;
}
int countVowel(char str[]){
    int count = 0;
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
    return count;
}