/*PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N.*/

#include<stdio.h>
int main()
{
    float i,n,x=1,y,sum=0;
    printf("enter the value of n upto which you want sum :-");
    scanf("%f", &n);

    for(i=1 ; i<=n ; i++)
    {
        x=x*i;
        y=i/x;
        sum=sum+y;

    }

    printf("sum of n terms is %f",sum);
}
