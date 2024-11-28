/*READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE.*/

#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("enter the value of n");
    scanf("%d", &n);
    
    if(n<=1)
    {
        printf("entered number is neither even nor prime ");

    }

    else
    {
    for(i=2 ; i<n ; i+=1)
    {
        if(n%i==0)
        {
            flag=1;

        }
        break;
    }
    
    if(flag==1)
    {
        printf("the given number is a COMPOSITE number ");
    }

    else
    {
        printf("the given number is PRIME number");

    }
    }
    return 0;
}