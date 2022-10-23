#include <stdio.h>
int main()
{
  // To check whether you can vote or not
  int age;
  printf("Enter your age : ");
  scanf("%d", &age);
  if (age >= 18)
  {
    printf("You are eligible for casting your vote.");
  }
  else
  {
    printf("You are not eligible for casting your vote.");
  }
  return 0;
}