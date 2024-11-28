/*
      1
     12
    123
   1234
  12345  

*/


#include<stdio.h>
int main()
{
    int nsp=4,nst=1,n=5;

    for(int i =1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=nsp ; j++)
        {
            printf("  ");
        }

        for(int k=1 ; k<=nst ; k++)
        {
            printf(" %d",k);
        }
        nst++;
        nsp--;
        printf("\n");
    }
}