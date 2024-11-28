//WRITE a FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT.

#include<stdio.h>
#include<math.h>

int is_palindrome(int n)
{
    int i,q,orig_n,orig_n2,sum=0; 
    int count=0;
    orig_n = n; 

    while(n>=1)   
    {
        n/=10;
        count++;
    }

    orig_n2 = orig_n; 
    while(orig_n>0)  
    {
        q = orig_n%10;
        sum = sum + q*pow(10,count);
        orig_n/=10;
        count--;
    }

    if(orig_n2==sum/10)
        printf("The number %d is Palindrome!!",orig_n2);
    else
        printf("The number %d is NOT Palindrome!!",orig_n2);

    return 0;
}

int main(){
    int n; 

    printf("Enter any number:");
    scanf("%d",&n);

    is_palindrome(n);

    return 0;
}