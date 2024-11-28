/* PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT
USING HEADER FILE(<MATH.H>).
*/

#include <stdio.h>
int main()
{

    float base, exponent, result = 1;
    printf("enter the value of base and then exponent : ");
    scanf("%f%f", &base, &exponent);

    for (int i = 1; i <= exponent; i++)
    {
        result *= base;
    }

    printf("result is : %f", result);
}