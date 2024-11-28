/*PROGRAM TO READ TWO NOS. AND PERFORM SPECIFIC TASK (USING
ARITHMETIC OPERATOR)AND THIS PERFORM USING SWITCH-CASE.(CASE
IN CHAR FORM).
*/

#include <stdio.h>
int main()

{

    char ch;
    float a, b, result;
    printf("enter the operator's first letter (+p,-m,*M,/d) : ");
    scanf("%c", &ch);

    printf("enter the value of operand a and b :");
    scanf("%f%f", &a, &b);

    switch (ch)
    {
    case 'p':
        result = a + b;
        break;

    case 'm':
        result = a - b;
        break;

    case 'M':
        result = a * b;
        break;

    case 'd':
        result = a / b;
        break;
    }
    printf("RESULT = %f", result);
}