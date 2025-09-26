#include <stdio.h>
#include <stdbool.h>

/*
The syntax for the while loop is:
while (condition) statement

while (i < n)
    i = i * 2 // loop body

this is the same as 
while (i < n) {
    i  = i * 2 // loop body
}

the curly braces are optional. We can out them for multiline statements
*/

int main(void){
    int i, n;
    printf("This progrma print a table of sqaures.\n");
    printf("Enter number of entries in this table: ");
    scanf("%d", &n);
    
    i = 1;
    while (i < n){
        printf("%10d%10d\n", i, i*i);
        i ++;
    }
    return 0;
}