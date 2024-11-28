/*
IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS 
LAST N DIGITS
*/

#include <stdio.h>
#include <string.h>

int flip(int number, int N) {
    char numStr[20];
    sprintf(numStr, "%d", number);
    
    int len = strlen(numStr);
    
    if (N <= 0 || N >= len) {
        return number;
    }

    for (int i = len - N, j = len - 1; i < j; i++, j--) {
        char temp = numStr[i];
        numStr[i] = numStr[j];
        numStr[j] = temp;
    }

    int flippedNumber;
    sscanf(numStr, "%d", &flippedNumber);
    
    return flippedNumber;
}

int main() {
    int num,n;
    printf("Enter any number: ");
    scanf("%d",&num);
    printf("Enter number of digits in last to flip: ");
    scanf("%d",&n);

    printf("The number after flipping last %d digits is %d",n,flip(num,n));

    return 0;
}
