/*READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A
LIST OF NUMBERS READ.*/

#include<stdio.h>
int main()
{
   int n,sum=0;
   do
   {
      printf("enter any positive number :- ");
      scanf("%d",&n);

      sum=sum+n;
   } while (n>0);

   sum=sum-n;

   printf("sum of all positive numbers is :- %d",sum);
   
}