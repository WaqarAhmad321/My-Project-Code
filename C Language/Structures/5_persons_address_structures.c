#include <stdio.h>
// To print the addresses of 5 persons
struct addresses
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printadd(struct addresses add);

int main()
{
    struct addresses p1, p2, p3, p4, p5;
    // First person
    printf("Enter the House no of 1st person : ");
    scanf("%d", &p1.houseNo);
    printf("Enter the block no. : ");
    scanf("%d", &p1.block);
    printf("Enter the city : ");
    scanf("%s", p1.city);
    printf("Enter the state : ");
    scanf("%s", p1.state);
    printf("******Thanks*****\n");

    // Second person
    printf("Enter the House no of 2nd person : ");
    scanf("%d", &p2.houseNo);
    printf("Enter the block no. : ");
    scanf("%d", &p2.block);
    printf("Enter the city : ");
    scanf("%s", p2.city);
    printf("Enter the state : ");
    scanf("%s", p2.state);
    printf("******Thanks*****\n");

    // Third person
    printf("Enter the House no of 3nd person : ");
    scanf("%d", &p3.houseNo);
    printf("Enter the block no. : ");
    scanf("%d", &p3.block);
    printf("Enter the city : ");
    scanf("%s", p3.city);
    printf("Enter the state : ");
    scanf("%s", p3.state);
    printf("******Thanks*****\n");

    // Fourth person
    printf("Enter the House no of 4th person : ");
    scanf("%d", &p4.houseNo);
    printf("Enter the block no. : ");
    scanf("%d", &p4.block);
    printf("Enter the city : ");
    scanf("%s", p4.city);
    printf("Enter the state : ");
    scanf("%s", p4.state);
    printf("******Thanks*****\n");

    // Fifth person
    printf("Enter the House no of 5th person : ");
    scanf("%d", &p4.houseNo);
    printf("Enter the block no. : ");
    scanf("%d", &p4.block);
    printf("Enter the city : ");
    scanf("%s", p5.city);
    printf("Enter the state : ");
    scanf("%s", p5.state);
    printf("******Thanks*****\n");
    printadd(p1);
    printadd(p2);
    printadd(p3);
    printadd(p4);
    printadd(p5);

    return 0;
}
void printadd(struct addresses add)
{
    printf("The Address of person is %d %d %s %s", add.houseNo, add.block, add.city, add.state);
}