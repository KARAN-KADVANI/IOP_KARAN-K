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
    int a[]={5,2,1,4,3};

    for(int i=0 ; i<4 ; i++)
    {
        int SI=i;
        for(int j=i+1 ; j<5 ; j++)
        {
           
            if(a[j]<a[SI])
            {
                
                SI=j;
            }
        }

        swap(&a[i],&a[SI]);


        
    }

    printf("sorted array = \n ");

    for(int i=0 ; i<5 ; i++)
    {
        printf("%d  ",a[i]);
    }



}