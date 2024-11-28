/*PROGRAM TO SWAP TOW VARIABLES USING THIRD VARIABLE*/

#include <stdio.h>
int main()

{
    int a, b, c;
    printf("enter the value of a :\nenter the value of b :\n");
    scanf("%d%d", &a, &b);

    c = a;
    a = b;
    b = c;

    printf("swaped value of a is : %d\nand swaped value of b is : %d\n", a, b);
}
