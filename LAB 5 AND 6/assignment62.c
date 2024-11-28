/**/

#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int a[n];

    printf("enter the elements of array a :\n");

    
    for(int i=0 ; i<n ; i++)
    {
        printf("enter array element %d : ",i+1);
        scanf("%d",&a[i]);
    }

    for(int i=0,j=n-1 ; i<=j ; i++,j-- )
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

    printf("after reversing the array will be : \n");


    for(int i=0 ; i<n ; i++)
    {
        printf("%d  ",a[i]);
    }
}