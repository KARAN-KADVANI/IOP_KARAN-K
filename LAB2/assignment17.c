/*PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICAL
OPERATOR.(&&)*/

#include <stdio.h>
int main()

{
    int a, b, c;

    printf("enter the value of a");
    scanf("%d", &a);

    printf("enter the value of b");
    scanf("%d", &b);

    printf("enter the value of c");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("max is : %d", a);
    }

    else if (b > c && b > a)
    {
        printf("max is : %d", b);
    }

    else
    {
        printf("max is %d", c);
    }

    return 0;
}