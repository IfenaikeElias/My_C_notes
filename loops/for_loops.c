#include <stdio.h>

/*
the for syntax is 
for (expr1, expr2, expr3){
    statement
}

the expression 1 is an initialisation
the expression 2 is the condition for the for loop to stop
the expression 3 is our increment logic e.g i++, i = i + 1, i = i + 5... etc
*/

// Print a table of squares

int main(void){
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        printf("%10d%10d\n", i , i * i);
    }
    return 0;
}

