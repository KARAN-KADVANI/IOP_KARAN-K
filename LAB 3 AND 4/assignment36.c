/*PROGRAM TO PRINT 1,3,5,7,9………N.*/

#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n :-");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2)
    {
        printf("%d\n", i);
    }
}