/* PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME*/

#include <stdio.h>
int main()

{
    int hours, min, sec, tsec;
    printf("enter total seconds :- ");
    scanf("%d", &tsec);

    hours = tsec / 3600;

    tsec = tsec % 3600;

    min = tsec / 60;

    tsec = tsec % 60;

    sec = tsec / 1;

    printf("%d hours %d min %d sec", hours, min, sec);
    return 0;
}