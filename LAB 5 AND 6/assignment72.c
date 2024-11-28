#include<stdio.h>
int main()
{   
    int n;
    printf("enter the value of n");
    scanf("%d",&n);

    int k,i,j,a[n];

    printf("enter the number of times you want to rotate an array : ");
    scanf("%d",&k);

    for(int i=0 ; i<n ; i++)
    {
         printf("enter the array element %d :",i+1);
         scanf("%d", &a[i]);

    }
    for(i=0,j=n-1 ; i<=j ; i++,j--)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    k=k%(n-1);
    for(int i=k,j=n-1 ; i<=j ; i++,j--)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

    printf("array after rotating %d times is : ",k);

    for(int i=0 ; i<n ; i++)
    {
        printf("%d",&a[i]);
    }


}

