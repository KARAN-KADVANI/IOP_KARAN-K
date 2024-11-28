#include<stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;

    return;

}

int main()
{
    int a[]={5,2,1,4,3},k=4;

    for(int i=0 ; i<4 ; i++)
    {
        for(int j=0 ; j<k ; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
        k--;
    }

    printf("sorted array = \n ");

    for(int i=0 ; i<5 ; i++)
    {
        printf("%d  ",a[i]);
    }



}