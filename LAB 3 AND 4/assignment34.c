/*PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…)*/

#include<stdio.h>
int main()
{
    int n,a=0,b=1,sum=0;

    printf("enter n : ");
    scanf("%d",&n);

    if(n==1)
    {
        printf("%d\t",a);
    }

    else if(n==2)
    {
        printf("%d",b);
    }
    else 
    {

    printf("%d\t%d\t",a,b);


    for(int i=1 ; i<=n-2 ; i++)
    {
        sum=a+b;
        a=b;
        b=sum;

        printf("%d\t",sum);


    }
    }

}