/*WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES
REPRESENTATIVE AS PER THE SALES AMOUNT GIVEN BELOW.

If sales<=Rs. 500, commission is 5%
If sales> but <=2000, commission is Rs. 35 plus 10% above Rs. 500
If sales>2000 but <=5000, commission is Rs. 185 plus 12% above Rs. 2000
If sales>5000, commission is 12.5%*/

#include<stdio.h>
int main()
{
    float S,C;
    printf("enter the value of total sales");
    scanf("%f", &S);

    if(S>0 && S<=500)
    {
        C=0.05*S;
    }

    else if(S>500 && S<=2000)
    {
        C=35 + 0.1*(S-500);
    }

    else if(S>2000 && S<=5000)
    {
        C=185 + 0.12*(S-2000);
    }

    else if(S>5000)
    {
        C=0.125*S;
    }

    else
    
        printf("not a valid sales");
    

    printf("YOUR COMMISION IS : %f",C);
    return 0;
}
