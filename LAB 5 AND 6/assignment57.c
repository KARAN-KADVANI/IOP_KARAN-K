#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);

    int a[n];

    for(int i=0 ; i<n ; i++)
    {
        printf("enter array element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    int max=INT_MIN;
    int smax=INT_MIN;

    for(int i=0 ; i<n ; i++)
    {
        if(max<a[i])
        {
            smax=max;
            max=a[i];
        }

        else if(smax<a[i] && max!=a[i])
        {
            smax=a[i];
        }
    }
    printf("second maximum number is : %d\n",smax);
    printf("MAXIMUM number is : %d",max);

}