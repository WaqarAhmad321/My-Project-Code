#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    char guess[];
    int nguesses=1;
    char randomletter[] = 'A'(random() % 26);
    printf("The character is %c",randomletter);
    do{
        printf("Guess a character between A and Z\n");
        scanf("%c",&guess);
        if(guess>randomletter){
            printf("Lower character please!\n");
        }
        else if(guess<randomletter){
            printf("Higher character please!\n");
        }
        else{
            printf("You guessed it in %d attempts!\n",nguesses);
        }
        nguesses++;
    }while(guess!=randomletter);
    return 0;
}