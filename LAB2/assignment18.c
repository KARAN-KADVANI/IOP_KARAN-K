/*PROGRAM TO READ THREE NOS. AND PRINT MAX
USING CONDITIONAL (? :) OPERATOR.*/

#include <stdio.h>
int main()

{
    int a, b, c, big;
    printf("enter the value of a,b and c :- ");
    scanf("%d%d%d", &a, &b, &c);

    big = a > b && a > c ? a : (b > a && b > c ? b : c);

    printf("max is : %d", big);
    return 0;
}