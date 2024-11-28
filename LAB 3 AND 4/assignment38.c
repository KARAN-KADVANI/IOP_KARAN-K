/*PROGRAM TO PRINT 1,4,9,16,25,………N.*/

#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n :-");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 1)
    {
        printf("%d\n", i * i);
    }
}