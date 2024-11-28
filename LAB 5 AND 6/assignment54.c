/*PROGRAM TO RED AND ARRAY OF 10 INTEGER AND PRINT SUM OF NUMBERS.*/

#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the size of the array : ");
    scanf("%d",&n);

    int a[n];
    for(int i=0 ; i<n ; i++)
    {
        printf("enter the array element %d : ",i+1);
        scanf("%d", &a[i]);
    }

    for(int i=0 ; i<n ; i++)
    {
        sum=sum+a[i];
    }
    
    printf("sum of the %d elements of array is %d:",n,sum);
}