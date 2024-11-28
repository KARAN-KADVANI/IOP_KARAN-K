/*
      *
     * *
    * * *
   * * * * 
  * * * * *
    
*/



#include<stdio.h>
int main()
{
    int nsp=9;
    for(int i=1 ; i<=10 ; i++)
    {
        for(int k=1 ; k<=nsp ; k++)
        {
            printf(" ");
        }
        for(int j=1 ; j<=i ; j++)
        {
            printf(" *");
        }
        nsp--;
        printf("\n");
    }
}