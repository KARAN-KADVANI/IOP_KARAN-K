//PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY.

#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int x,flag=0;
    int idx=0;

    printf("enter any number which you want to search in the array : ");
    scanf("%d",&x);
    
    
    for(int i=0 ; i<5 ; i++)
    {
        if(a[i]==x)
        {
            flag=1;
            idx=i;
        }
    }

    if(flag==0)
    {
        printf("not present");
    }

    else{
        printf("present and index is %d ", idx);
    }
}
