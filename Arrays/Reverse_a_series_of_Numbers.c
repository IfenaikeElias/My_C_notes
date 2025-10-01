#include <stdio.h>

#define N 10

int main(void){
    int a[N], i;
    printf("Enter %d Numbers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);

        printf("In reverse order: ");
        for (i = N - 1; i >= 0; i--)
            printf(" %d", a[i]);
        printf("\n");
    return 0;
}


// Initializing an Array

// we can do like this

int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// or 

int b[10] = {1, 2, 3, 4, 5, 6};
/*This is basically saying b is {1, 2, 3, 4, 5, 6, 0, 0, 0, 0}*/

// if we ommit th length of the array in the initializer, the compiler uses the array array length
// like in 
int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

