#include<stdio.h>
int type(int temp);
int main(){
    int temp;
    printf("Enter the temperature : ");
    scanf("%d",&temp);
    printf("The temperature is %c",type(temp));

    return 0;
}
int type(int temp){
    if(temp >= 0 || temp <= 38){
        printf("The temperature is cold.");
    }
    else if(temp > 38 || temp >= 50){
        printf("The temperature is hot.");
    }
    else{
        printf("The temperature is extremely hot.");
    }
}
