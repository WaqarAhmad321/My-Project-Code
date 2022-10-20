# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <conio.h>
//Written by : Waqar Ahmad
//Date : 19/10/2022
//Location : Mars
int RockPaperScissor(char you, char comp);

int main(){
    char you, comp;
    printf("<***************Welcome to Rock Paper Scissor************>\n");
    printf("Enter 'r' for rock, 'p' for paper and 's' for scissor : ");
    scanf("%c", &you);
    srand(time(0));
    int number = rand()%100 + 1;
    if (number > 33) 
    {
        comp = 'r';
    }
    else if (number < 33 && number > 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 's';    
    }
    int result = RockPaperScissor(you,comp);
    printf("You chose '%c' and computer chose '%c'.\n", you, comp);
    if (result == 0)
    {
        printf("Game Drawn (: \n"); 
    }
    else if (result == 1)
    {
        printf("You won (: \n");
    }
    else{
        printf("You Lose (: \n");s
    }
    printf("<******************Thanks********************>");
    getch();
    return 0;
}

int RockPaperScissor(char you, char comp){
    if (you == comp) {
        return 0;
    }
    if (you == 'r' && comp == 'p') 
    {
        return -1;
    }
    else if (you == 'p' && comp == 'r') 
    {
        return 1;
    }
    if (you == 'r' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'r') 
    {
        return -1;
    }
    if (you == 'p' && comp == 's')
    {
        return -1;
    }
    else if (you == 's' && comp == 'p')
    {
        return 1;
    }
    else{
        printf("Invalid entry! Play according to rules...");
    }
}