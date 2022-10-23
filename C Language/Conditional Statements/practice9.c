#include <stdio.h>
int main()
{
  // To check days in a week.
  int day;
  printf("Enter the day(1-7) : ");
  scanf("%d", &day);

  switch (day)
  {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;

  default:
    printf("It is not a day.");

    break;
  }

  return 0;
}