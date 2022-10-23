#include <stdio.h>
#define gst 0.18
// To print the final of 3 items with gst using arrays
int main()
{
    float price[3], final_price;
    printf("Enter the price of first item : ");
    scanf("%f", &price[0]);
    printf("Enter the price of second item : ");
    scanf("%f", &price[1]);
    printf("Enter the price of third item : ");
    scanf("%f", &price[2]);
    printf("The final cost of first item is : %0.2f\n", price[0] + (gst * price[0]));
    printf("The final cost of first item is : %0.2f\n", price[1] + (gst * price[1]));
    printf("The final cost of first item is : %0.2f\n", price[2] + (gst * price[2]));
    return 0;
}