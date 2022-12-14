#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
/*Written by : Waqar Ahmad
  Date : 06/09/2022
  Location : Mars
  Output : Number guessing game*/
int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    do
    {
        printf("Guess a number between 1 and 100 \n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You guessed it in %d attempts!\n", nguesses);
        }
        nguesses++;
    } while (guess != number);
    getch();
    return 0;
}