/* PROGRAM TO CALCULATE AREA OF A TRIANGLE*/

#include <stdio.h>

int main()

{

  int base, height;

  printf("enter the value of base-->");

  scanf("%d", &base);

  printf("enter the value of height-->");

  scanf("%d", &height);

  int area;

  area = 0.5 * base * height;

  printf("area the triangle is : %d", area);

  return 0;
}