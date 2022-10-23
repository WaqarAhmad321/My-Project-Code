#include <stdio.h>
void printNamaste();
void printBonjour();
int main()
{
    char ch;
    printf("Enter i for indian and f for french : ");
    scanf("%c", &ch);
    if (ch == 'i')
    {
        printNamaste();
    }
    else
    {
        printBonjour();
    }
    return 0;
}
void printNamaste()
{
    printf("Namaste!");
}
void printBonjour()
{
    printf("Bonjour!");
}