/*PROGRAM TO CALCULATE FACTORIAL OF A NO*/

#include <stdio.h>
int main()
{
    int n;
    int fact = 1;
    printf("enter the value of n :->");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 1)
    {
        fact = fact * i;
    }

    printf("factorial of given number is : %d", fact);
    return 0;
}