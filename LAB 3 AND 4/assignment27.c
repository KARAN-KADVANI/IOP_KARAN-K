/*PROGRAM TO CHECK WHETHER A NO IS PRIME OR NOT.*/

#include <stdio.h>

int main() {
    int n, i, x = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if(n==1 || n<=0 )
    {
        x=1;
    }


   
    for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                x = 1;
                break;
            }
        }
    

    if (x == 0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);


    

    return 0;
}