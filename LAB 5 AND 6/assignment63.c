/*PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT.*/

#include<stdio.h>
#include<limits.h>

int main()
{
    int r,c,max=INT_MIN,min=INT_MAX,idxi,idxj,idxi2,idxj2;
    printf("enter the number of rows : ");
    scanf("%d",&r);
    
    printf("enter the number of columns : ");
    scanf("%d",&c);

    int a[r][c],b[r][c];

    printf("enter elements of array  : ");

    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

     for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
        {
           if(max<a[i][j])
           {
            max=a[i][j];
            idxi=i;
            idxj=j;
        }
    }

    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
        {
           if(min>a[i][j])
           {
            min=a[i][j];
            idxi2=i;
            idxj2=j;
        }
    }
    }

   


}
 printf("max elements from the matrix is %d and its index is %d , %d \n",max,idxi,idxj);
 printf("min elements from the matrix is %d and its index is %d , %d ",min,idxi2,idxj2);

}