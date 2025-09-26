#include <stdio.h>

/*
C treats characters like small integers "a" is 97, "A" is 65, "o" is 48 and " " is 32
we declare a character by using the char keyword

char ch;
int i;

even if we assign an integer variable to a character it would just assignt the ASCII value of that carracter to the integer
i = "a" // i is now 97
ch = 65 // ch is now "A"
ch = ch + 1 // ch is now "B"
ch ++ // ch is now "C"

due to this property we can easily check if a character is upper or lower case
syntax:

if ("a" <= ch && ch <= "z") // check if ch is lowercase 
    do something...
    ch = ch - "a" + "A"

we could even use it in for loops:

for (ch = "A"; ch = "Z", ch ++)...
*/


