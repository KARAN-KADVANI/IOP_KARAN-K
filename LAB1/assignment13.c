/*PROGRAM TO CHECK WHETHER A NO. IS EVEN OR ODD*/

#include <stdio.h>
int main()
{
    int a;
    printf("enter the value of a :->");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("given number is even : %d", a);
    }
    else
        printf("given number is odd");

    return 0;
}