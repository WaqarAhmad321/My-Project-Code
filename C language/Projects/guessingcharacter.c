#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int square(){
    char randomletter[26],guess;
    int nguesses=1;
    randomletter[26] = "abcdefghijklmnopqrstuvwxyz"(rand() % 26);
    printf("The character is %s",randomletter);
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