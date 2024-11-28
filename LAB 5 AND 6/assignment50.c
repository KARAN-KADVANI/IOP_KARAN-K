/*
A
BB
CCC
DDDD
EEEEE

*/



#include<stdio.h>
int main()
{
    for(int i=1 ; i<=5 ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            int d=(char)i+64;
            char ch=d;
            printf(" %c",ch);
        }
        printf("\n");
    }
}