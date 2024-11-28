/*PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT.*/

#include<stdio.h>
int main()
{
    long int n,q,c,sum=0;
    printf("enter a number n");
    scanf("%ld", &n);
    c=n;

    while(n>0)
    {
        q=n%10;
        sum=sum+q;
        sum=sum*10;
        n=n/10;

    }

    sum=sum/10;

    if(c==sum)
    {
        printf("the given number is a palindrom ");
    }

    else
    {
        printf("the given number is not a palindrom");
    }

 
}