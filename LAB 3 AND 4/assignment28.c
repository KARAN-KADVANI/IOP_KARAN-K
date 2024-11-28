/*PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT.
*/
#include<stdio.h>
int main()
{
    int n,q,c,sum=0;
    printf("enter any number n --> ");
    scanf("%d", &n);
    c=n;

    while(n>0)
    {
        q=n%10;
        sum=sum+(q*q*q);

        n=n/10;
        


    }

    if(sum==c)
    {
        printf("the given number is an ARMSTRONG number");
    }
    else
    {
        printf("the given number is not an ARMSTRONG number ");


    }
}