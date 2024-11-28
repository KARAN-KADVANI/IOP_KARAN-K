/*PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND
TOTAL NO. OF EVERY ELEMENT.
*/

#include<stdio.h>
int main()
{
    int n;
    printf("enter the array size : ");
    scanf("%d",&n);
    int a[n],countE=0,countO=0;
   
    
    for(int i=0 ; i<n ; i++)
    {
        printf("enter the elements of an array : ");
        scanf("%d",&a[i]);

    }

    for(int i=0 ; i<n ; i++)
    {
        if(a[i]%2==0)
        {
            countE++;
        }

        else
        {
            countO++;
        }
    }
    
    printf("\nnumber of even elements is : %d", countE);
    printf("\nnumber of odd elements is : %d",countO);
}
