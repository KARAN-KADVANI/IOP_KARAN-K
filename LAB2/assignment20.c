/*PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING
SWITCH-CASE.*/

#include <stdio.h>
int main()

{

    char ch;
    float a, b, result;
    printf("enter the operator : ");
    scanf("%c", &ch);

    printf("enter the value of operand a and b :");
    scanf("%f%f", &a, &b);

    switch (ch)
    {
    case '+':
        result = a + b;
        break;

    case '-':
        result = a - b;
        break;

    case '*':
        result = a * b;
        break;

    case '/':
        result = a / b;
        break;

    default:
        printf("not valid");
        break;
    }
    printf("RESULT = %f", result);
}