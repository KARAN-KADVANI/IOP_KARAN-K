#include<stdio.h>

int main()
{
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);

    int a[n],b[n],c[n];

     printf("enter the elements of array a :\n");

    
    for(int i=0 ; i<n ; i++)
    {
        printf("enter array element %d : ",i+1);
        scanf("%d",&a[i]);
    }

    printf("enter the elements of array b :\n");
    for(int i=0 ; i<n ; i++)
    {
        printf("enter array element %d : ",i+1);
        scanf("%d",&b[i]);
    }

    for(int i=0 ; i<n ; i++)
    {
       c[i]=a[i]+b[i];
    }

    printf("sum of array a and b is : \n");

    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",c[i]);
        
    }
    return 0;





}