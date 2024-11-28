/*
program to findout max and min digit from N 
*/
#include <stdio.h>
int main() {
    int num, remainder;
    int max = -1, min = 10;
    printf("Enter a number: ");
    scanf("%d", &num);
   
    while (num != 0) {
        remainder = num % 10;
       
        if (remainder > max) {
            max = remainder;
        }
        if (remainder < min) {
            min = remainder;
        }
        num /= 10;
    }
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    return 0;
}
