#include <stdio.h>
// To store the account information of a person using structures while using typedef
typedef struct BankAccount
{
    int accountNo;
    char name[100];
    int code;
} acc;

int main()
{
    acc ac1 = {12345, "Waqar Ahmad", 2045};
    printf("The account number is : %d\n", ac1.accountNo);
    printf("The Name of person is : %s\n", ac1.name);
    printf("The code of account is : %d\n", ac1.code);
    return 0;
}