#include <stdio.h>

// we have unsigned and signed data types
// by default data types are signed.
// a unsigned data types are mostly used in system programming and low level programming
// if we need less space and we are try to avoid extra space from a data type we can use a short data type as supposed to long or long long
// we can also hace unsigned long, unsigned short, unsigned long long.
// We can U or L to the back of a constant to show that is Unsign or Long we an also add LL to show Long Long type or even use UL of Unsigned Long type
// say we have an hexadecimal constant 0x7ffUL - this means it's of unsigned long type

// if we use a smaller type for arithmetic that would result in a datatype greater than our assigned data type we get a overflow error

// when using scanf() we use "%u" to take in unsigned datatypes and "0" to take in octadecimal, "x" to take in hexadecimal

// for float types double takes more digit than float, then we have long double
// "%Lf" for long double

/*
syntax is :
long double ld;
scanf("Lf", &ld);
printf("%Lf", ld);
*/

// Program to sum a series of Numbers

int main(void){
    long n, sum = 0;
    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%ld", &n);
    while (n != 0){
        sum += n;
        scanf("%ld", &n);
    }
    printf("The sum is: %ld\n", sum);
    return 0;
}

