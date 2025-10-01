#include <stdio.h>
#include <stdbool.h>

int main(void){
    bool seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0){
        digit = n % 10;
        if (seen[digit])
            break;
        seen[digit] = true;
        n /= 10;
    }

    if (n > 0)
        printf("Repeated digits\n");
    else
        printf("No repeated digits\n");

    return 0;
}