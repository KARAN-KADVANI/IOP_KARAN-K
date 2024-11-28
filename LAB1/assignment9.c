/*. PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO
TOTAL SECOND*/

#include <stdio.h>
int main()
{
int sec, hours, min;
    printf("enter the time in seconds-->");
    scanf("%d", &sec);

    hours = sec / 3600;
    sec=sec%3600;
    min=sec/60;
    sec=sec%60;
    sec=sec/1;

    printf("%d hours\t", hours);
    printf("%d minutes\t", min);
    printf("%d sec",sec);
    return 0;
}