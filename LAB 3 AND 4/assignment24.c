/*WRITE A C PROGRAM TO FIND THE VALUE OF Y USING
1+x where n=1
1+x/n where n=2
Y(x,n) = 1 +xn when n=3
1 + nx when n>3 or n<1
*/

#include<stdio.h>
int main()
{
    float x,y,n;
    printf("enter the value of n :-");
    scanf("%f",&n);
    
    printf("enter the value of x : ");
    scanf("%f", &x);

    if(n==1)
    {
        
        y=1+x;
          
    }

   else if(n==2)
    {
        y=1+x/n;
    }

    else if(n==3)
    {
        y=1+(x*x*x);

    }

    else
    {
        y=1+n*x;

    }
    printf("value of y is : %f", y);
    
    return 0;

}