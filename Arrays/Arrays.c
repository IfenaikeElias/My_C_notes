#include <stdio.h>

// An array is a data structure containing a number of data values, all which have the same type.
// these values are known as elements and can individually selected by their position within the array.
#define N 10


// we can declare an array like this:
// type name[size]

int a[10];

// the elements of an array may be of any type but this must be consistent. 
// to easily adjust length if an array it is good practice to define the length up front
// like this

//...
int a[N];

// Array subscripting 
// to access elements in an array we subscript or index the element 
// a[4] returns element 4 which is the 5th element since array indexes start from 0

a = {1, 2, 3};
// we can update values in an array
// a[0] = 1; // updates the first value in the array to 

// to clear the value at a position in a array we just assign it to 0

// to read a value into an array we do:

/*
for (i = 0; i < N; i++) {
    scanf("%d", &a[i]);
}

to print:
printf("%d\n", a[5])
*/

// if we don't do #define N 10

// in other to transverse the arra we would have to do 

/*
int n = sizeof(a)/sizeof(a[0])
for (i = 0; i < n, i ++)
    .....
*/

// we could also do stuff like 


