/*PROGRAM TO REVERSE OF A GIVEN NO.*/

#include<stdio.h>
int main()
{
    long int n,q,sum=0;
    printf("enter a number n");
    scanf("%ld", &n);

   int c=n;
    
    while(n>0)
    {
        q=n%10;
        sum=sum+q;
        sum=sum*10;
        n=n/10;

    }

        sum=sum/10;//because it is printing 10 times the reverse of original number 

        printf("reverse of %d is : %d",c,sum);
}