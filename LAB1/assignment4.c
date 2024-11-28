/*PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO
CENTIGRADE DEGREES*/

#include <stdio.h>

int main()

{

  int fahrenheit, celcius;

  printf("enter the temperature in fahrenheit :");

  scanf("%d", &fahrenheit);

  celcius = (fahrenheit - 32) * 5 / 9;

  printf("the temperature in celcius is %d", celcius);

  return 0;
}