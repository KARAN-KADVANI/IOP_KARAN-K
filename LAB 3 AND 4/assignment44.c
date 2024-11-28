/*WRITE A PROGRAM IN C FOR THE FOLLOWING.
AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS AS
FOLLOWS.*/

#include<stdio.h>
int main()
{
    float cnsp,amnt;
    printf("enter the consumption in unit : ");
    scanf("%f", &cnsp);

    if(cnsp>0&&cnsp<=200)
    {
        amnt=0.50*cnsp;
    }

    else if(cnsp>200&&cnsp<=400)
    {
        amnt=100+0.65*(cnsp-200);
    }

    else if(cnsp>400&&cnsp<=600)
    {
        amnt=cnsp+0.8*(cnsp-400);
    }

    else if(cnsp>600) 
    {
        amnt=425+125*(cnsp-600);
    }

    else
    {
        printf("not a valid units of consumption");


    }

    printf("amount to be paid by the consumer is :- %f ",amnt);
}