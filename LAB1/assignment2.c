/*PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND
CALCULATE TOTAL AND PERCENTAGE*/

#include <stdio.h>

int main()

{

  int maths, english, hindi, science, computer, total;

  printf("enter the marks of maths--> \n");

  scanf("%d", &maths);

  printf("enter the marks of english--> \n");

  scanf("%d", &english);

  printf("enter the marks of hindi--> \n");

  scanf("%d", &hindi);

  printf("enter the marks of science--> \n");

  scanf("%d", &science);

  printf("enter the marks of computer--> \n");

  scanf("%d", &computer);

  total = maths + english + hindi + science + computer;

  printf("total marks is %d \n :", total);

  int percentage;

  percentage = total / 5;

  printf("percentage is %d \n :", percentage);

  return 0;
}