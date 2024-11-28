/*PROGRAM TO PRINT TABLE OF ANY NO.
 */

#include <stdio.h>
int main()
{

    // n is the number whose table you want
    int n;

    printf("enter the value of n :-");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {

        // n*i gives product where n is constant and i is increasing by loop every times
        printf("%d \n", n * i);
    }
}