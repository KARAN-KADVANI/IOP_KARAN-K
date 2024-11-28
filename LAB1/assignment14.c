/* PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL,
LETTER, SMALL CASE LETTER, A DIGIT OR A SPECIAL SYMBOL*/

#include <stdio.h>
int main()
{
    /*
    you only need value of ASCII code
    97-122=SMALL CASE
    65-90=UPPER CASE
    48-57=THTE CHARACTER IS A DIGIT
    0-47,58-64,91-96,123-127=SPECIAL CHARACTER
    */

    char CH;
    printf("enter the character:-");
    scanf("%c", &CH);

    if (CH >= 97 && CH <= 122)

        printf("IT IS SMALL CASE LETTER");

    else if (CH >= 65 && CH <= 90)

        printf("IT IS CAPITAL CASE LETTER");

    else if (CH >= 48 && CH <= 57)

        printf("YOU HAVE ENTERED A DIGIT");

    else if ((CH >= 0 && CH <= 47) || (CH >= 58 && CH <= 64) || (CH >= 91 && CH <= 96) || (CH >= 123 && CH <= 127))

        printf("you have entered a special character");
    else
        printf("invalid data");
    return 0;
}
