#include<stdio.h>
int main(){
    //To catogrize the height of man
  int height;
  printf("Enter the height of man : ");
  scanf("%d", &height);
  if(height < 150){
    printf("The person is dwarf.");
  }
  else if(height >= 150 && height <= 250){
    printf("The height of person is normal.");
  } 
  else{
    printf("The height of person is tall.");
  }

  return 0;
    
}