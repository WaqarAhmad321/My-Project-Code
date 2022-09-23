#include<stdio.h>
int main(){
    //To find the greatest number
  int number_1,number_2,number_3;
  printf("Enter the first number : ");
  scanf("%d", &number_1);
  printf("Enter the second number : ");
  scanf("%d", &number_2);
  printf("Enter the third number : ");
  scanf("%d", &number_2);
  if(number_1 > number_2 ){
    printf("First is the greatest.");
  }
  else if(number_2>number_1 || number_2>number_3){
    printf("Second is the greatest.");
  }
  else{
    printf("Third is the greatest.");
  }
  return 0;
    
}