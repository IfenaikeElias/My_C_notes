#include <stdio.h>

// C is less strict when it comes to arithmetic (unlike Go!)
// it allows for mixing different type of ints together e.g we can ad a 32bit and a 16bit int together
// similarly we can mix ints and floats together in arithmetic

// C handles this implicit comversions before arithmetic because the computer it self would not allow for this.
// C also allows the programmer to perform explicit conversions.
// when one type is converted to another it is called promotion
// most common form of promotion is integer promotion... when a char or short integer type is converted to type int.

// Type casting

// even though C does type conversion some time we need a greater degree of type conversion control 
// to do this we simply add (our type) before the variable

/*
float f, frac_part;
frac_part = f - (int) f;
*/

// Type definition

// we already using the define to define a Boolean type, just like this:
// #define int Bool;

// we can also do this using the typedef statement 

typedef float Dollars;

// in this case the type comes before the type name unlike in the case if #define

// we can go ahead to use this type

Dollars cash_in, cash_out;

// this is basically just writing

float cash_in, cash_out; 
// the usefullness of this will become evident in the future

// Size of Operator

// This is used to determin how much memory is required to store a value of a particular type. 
// used as in: sizeof ( type-name )
// th brackets are not needed: for single variable
// sizeof i 
// sizeof (i + j)