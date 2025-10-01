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

/*
when taking in standard input with scanf. if you wish that white space are not taking 
with the character yuo just add space like as in " %c" instead of just "%c". 

*/

// Read and writing characters with getchar and putchar
/*
getchar() can be used in place of scanf(), it is more faster but it takes in a character and stores it into a variable
*/

// count how long is a sentence

// int main(void){
//     char ch;
//     int len = 0;
//     printf("Enter a Message: ");
//     ch = getchar();
//     while ( ch != '\n') {
//         len++;
//         ch = getchar();
//     };
//     printf("Your message is %d characters long", len);
//     return 0;
// }


// a more idiomatic way to write this would be

int main(void){
    int len = 0;
    printf("Enter a message: ");
    while (getchar() != '\n')
        len ++;
    printf("Your message was %d characters long.\n", len);
    return 0;    
}