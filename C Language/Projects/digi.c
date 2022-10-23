#include <stdio.h>
#include <conio.h>
/*Written by : Waqar Ahmad
  Date : 06/09/2022
  Location : Mars
  Output : Digital Counselor*/
int main()
{
  char name[50], fathername[50], prof[50], aimbition[100];
  int marks[100], uni;
  FILE *fptr;
  fptr = fopen("digi.txt", "w");
  printf("<****************Welcome to Data Storage System****************>\n");
  printf("Name of the student : ");
  gets(name);
  printf("Father's Name : ");
  gets(fathername);
  printf("Father's Profession : ");
  gets(prof);
  printf("Marks in Matriculation : ");
  scanf("%d", &marks[1]);
  printf("Marks in Intermediate Part I : ");
  scanf("%d", &marks[2]);
  fprintf(fptr, "(i) Student Name :  %s\n\n", name);
  fprintf(fptr, "(ii) Father name : %s\n\n", fathername);
  fprintf(fptr, "(iii) Father's Profession : %s\n\n", prof);
  fprintf(fptr, "(iv) Marks in Matriculation : %d\n\n", marks[1]);
  fprintf(fptr, "(v) Marks in Intermediate Part I : %d\n\n", marks[2]);

  return 0;
}