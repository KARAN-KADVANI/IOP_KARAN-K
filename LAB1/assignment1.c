// PROGRAM TO CALCULATE SIMPLE INTEREST

#include <stdio.h>

int main()

{

  int P, R, T, SI; // P=principal,R=rate,T=time,SI=simple interest

  printf("enter value of P,R,T");

//taking value of P,R and T from user.
  scanf("%d%d%d", &P, &R, &T);

//formula of simple interest
  SI = (P * R * T) / 100;

//to print value of simple interest
  printf("value of simple interest is %d", SI);

  return 0;
}
