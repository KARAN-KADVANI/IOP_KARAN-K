/*READ A NUMBER N AND PRINT FACTOR OF N.(EX 28= 1,2,4,7,14,28)*/

#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the value of n -->");
    scanf("%d", &n);

    for(i=1 ; i<=n ; i++)
    {
       if(n%i==0)
       {
        printf("%d\n",i);
       }
    }
}