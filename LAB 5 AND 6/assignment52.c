/*
         1
        121
       12321
      1234321
     123454321

*/

#include <stdio.h>
int main()
{

    int n;
    printf("enter the number of rowa or line you want to print ");
    scanf("%d", &n);

    int nsp = n - 1, nst = 1, i, j, k, l;

    for (i = 1; i <= n; i++)
    {
        int a = i - 1;
        for (j = 1; j <= nsp; j++)
        {
            printf("  ");
        }

        for (k = 1; k <= nst; k++)
        {
            printf(" %d", k);
        }

        for (int l = 1; l <=i-1; l++)
        {
            printf(" %d", a);
            a--;
        }
        nst++;
        nsp--;
        printf("\n");
    }
}