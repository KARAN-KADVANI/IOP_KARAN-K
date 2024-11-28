/*EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS .WRITE
A C PROGRAM TO CONVERT THIS INTO NUMBER OF DAY,HOURS AND
MINUTES*/

#include <stdio.h>

int main()

{

  int day, hours, min, sec, tsec = 31558150;

  day = tsec / 86400;

  tsec = tsec % 86400;

  hours = tsec / 3600;

  tsec = tsec % 3600;

  min = tsec / 60;

  tsec = tsec % 60;

  sec = tsec / 1;

  printf("earth takes %d days %d hours %d min %d sec for a complete revolution", day, hours, min, sec);

  return 0;
}