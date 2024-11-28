/*PROGRAM TO PRINT 2,4,6,8,10,12………N.*/

#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n :-");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2)
    {
        printf("%d\n", i);
    }
}