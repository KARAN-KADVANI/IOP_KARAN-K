/*READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF
N*/

#include<stdio.h>
int main()
{
    int n,sum=0;

    printf("enter the value of n : ");
    scanf("%d",&n);

    while(n>=10)
    {
        
       
        while(n>0)
        {
            sum=sum+n%10;
            n/=10;
        }
        n=sum;
    }

    printf("\n%d",n);

    return 0;
    
}