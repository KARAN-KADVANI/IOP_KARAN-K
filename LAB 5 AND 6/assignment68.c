//multiplication of two matrices
#include<stdio.h>
#include<limits.h>

int main()
{
    int m,n;
    printf("enter the number of rows of matrix 1 : ");
    scanf("%d",&m);
    
    printf("enter the number of columns of matrix 1 : ");
    scanf("%d",&n);

    int a[m][n];

     int p,q;
    printf("enter the number of rows of matrix 2 : ");
    scanf("%d",&p);
    
    printf("enter the number of columns of matrix 1 : ");
    scanf("%d",&q);

    int b[p][q];
    if(n!=p)
    {
        printf("multiplication cannot be performed");
    }
    else
    {

    printf("enter elements of matrix 1 : ");

    for(int i=0 ; i<m ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter elements of matrix 2 : ");

    for(int i=0 ; i<p ; i++)
    {
        for(int j=0 ; j<q ; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("your entered matrix 1 is : \n");

    for(int i=0 ; i<m ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    
    printf("your entered matrix 2 is : \n");

    for(int i=0 ; i<p ; i++)
    {
        for(int j=0 ; j<q ; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    int res[m][q];

    for(int i=0 ; i<m ; i++)
    {
        for(int j=0 ; j<q ; j++)
        {

        res[i][j]=0;

        for(int k=0 ; k<n ; k++)
        {
            res[i][j]+=a[i][k]*b[k][j];
        }
        }
    }

    printf("multiplied matrix or resultant matrix is : \n");

    printf("your entered matrix 1 is : \n");

    for(int i=0 ; i<m ; i++)
    {
        for(int j=0 ; j<q ; j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    }


}