#include<stdio.h>
#include<string.h>
//To salt the password entered by user
void salting(char password[]);
int main(){
    char password[50];
    printf("Enter the password : ");
    scanf("%s", password);
    salting(password);
    return 0;
}
void salting(char password[]){
    char newpass[50];
    char salt[50] = "123";
    strcpy(newpass, password);
    strcat(newpass, salt);
    printf("The salted password is : %s", newpass);
}