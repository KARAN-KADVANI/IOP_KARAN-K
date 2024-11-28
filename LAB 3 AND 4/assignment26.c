/*PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N.*/


#include<stdio.h>
int main()
{
    int i=0,n,sumE=0,sumO=0;
    printf("enter the value of n :- ");
    scanf("%d",&n);

    for( i=0 ; i<=n ; i++);
    {
        if(i%2==0)
        {
            sumE=sumE+i;
            printf("the sum of even numbers is : %d",sumE);

        }

        else
        {
            sumO=sumO+i;
            printf("the sum of odd numbers is : %d",sumO);
            
        }
    }
}