#include<stdio.h>
#include<string.h>
//To count the occurrance of vowels in a string
int countConsonants(char str[]);
int main(){
    char str[100];
    printf("Enter the string : ");
    gets(str);
    printf("There are %d consonants in the string.", countConsonants(str));
    return 0;
}
int countConsonants(char str[]){
    int vowels, consonants;
    int count = 0;
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
    vowels = strlen(str);
    consonants = vowels - count;
    return consonants;
}