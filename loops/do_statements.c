#include <stdio.h>
/*
The do statement is just  while loop "whose control statement is tested after the 
execution of the loop body" unlike while loop that check the loop condition before executing statements

the syntax is:

do {
    statement
} while (expression);
*/

// Counting the number of digits in a number divisible by 3

int main(void){
    int digits = 0, n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    do {
        n /= 10;
        int temp = n/10; // check how to perform floor division and correct this later
        if ((temp % 2) == 0){
            digits ++;
        }
    } while (n < 0);
    printf("There are %d digits divisible by 2 in %d", digits, n);
    
    return 0;
}
