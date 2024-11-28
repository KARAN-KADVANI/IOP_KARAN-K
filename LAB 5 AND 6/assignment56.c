#include<stdio.h>
int main()
{
    int n;
    printf("enter the array size : ");
    scanf("%d", &n);

    int a[n],countZ=0,countO=0,countE=0;
    for(int i=0 ; i<n ; i++)
    {
        printf("enter the element %d of array :", i+1);
        scanf("%d",&a[i]);
    }

    for(int i=0 ; i<n ; i++)
    {
        if(a[i]==0)
        {
            countZ++
        }
    }

}