/*PROGRAM TO CALCULATE GROSS SALARY*/

#include <stdio.h>

int main()

{

  int BS, IT, OT, SA, GROSS_SALARY; // BS=basic salary,IT=income tax,OT=overtime,SA=special allowances

  printf("enter value of BS-->");

  scanf("%d", &BS);

  printf("enter value of IT-->");

  scanf("%d", &IT);

  printf("enter value of OT-->");

  scanf("%d", &OT);

  printf("enter value of SA-->");

  scanf("%d", &SA);

  GROSS_SALARY = BS + OT + IT + SA;

  printf("GROSS SALARY IS %d", GROSS_SALARY);

  return 0;
}
