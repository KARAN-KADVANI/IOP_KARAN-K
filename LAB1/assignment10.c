/*WRITE A C PROGRAM TO CALCULATE THE CUT OFF
MARK OF A STUDENT USING THE FORMULA*/

#include <stdio.h>
int main()
{
    int M, P, C, E, CM;

    printf("enter your maths marks : ");
    scanf("%d", &M);

    printf("enter your physics marks : ");
    scanf("%d", &P);

    printf("enter your entrance exam marks : ");
    scanf("%d", &E);

    printf("enter your chemistry marks : ");
    scanf("%d", &C);

    CM = M / 2 + C / 2 + P / 2 + E;

    printf("YOUR CUTOFF MARKS IS : %d", CM);
}