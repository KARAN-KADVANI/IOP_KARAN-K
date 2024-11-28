/*PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL
CASE LETTER OR NOT USING CONDATIONAL OPERATOR*/

#include <stdio.h>
int main()

{
    char ch,number;
    printf("enter the letter :-");
    scanf("%c", &ch);

    number= ch>97&&ch<122 ? printf("yes , small case ch"):printf("no , not a small case");
}