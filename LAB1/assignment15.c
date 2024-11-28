/*PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION*/

#include <stdio.h>
int main()
{
    int maths, english, science, computer, hindi, marks;

    printf("\n enter the marks of maths :-");
    scanf("%d", &maths);

    printf("\n enter the marks of english :-");
    scanf("%d", &english);

    printf("\n enter the marks of science :-");
    scanf("%d", &science);

    printf("\n enter the marks of computer :-");
    scanf("%d", &computer);

    printf("\n enter the marks of hindi :-");
    scanf("%d", &hindi);

    marks = (maths + english + science + computer + hindi) / 5;

    if (marks >= 90 && marks <= 100)
    {
        printf("grade A");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("grade B");
    }

    else if (marks >= 70 && marks < 80)
    {

        printf("grade C");
    }
    else if (marks >= 40 && marks < 70)
    {
        printf("grade D");
    }
    else if (marks < 40 && marks > 0)
    {
        printf("you failed");
    }
    else
    {
        printf("not valid marks");
    }
    return 0;
}
