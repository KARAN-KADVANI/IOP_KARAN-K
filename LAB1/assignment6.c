/*. PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD
VARIABLE*/

#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the value of a :\nenter the value of b :");
    scanf("%d%d", &a, &b);

    a = a + b;

    b = a - b;

    a = a - b;

    printf("swaped value of a is :%d\nswaped value of b is :%d\n", a, b);
}