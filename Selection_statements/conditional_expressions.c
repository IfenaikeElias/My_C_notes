#include <stdio.h>

/*
The conditional expressions are usually in the form 
expr1 ? expr2 : expr3

read if expression 1, then expression 2 else expression 3
*/
int main(void){
int i, j, k;
i = 1;
j = 2;
k = i > j ? i : j;
printf("%d\n", k); // this prints 2
k = (i >= 0 ? i : 0) + j;
printf("%d\n", k); // this prints 3

return 0;
}

/*
instead of writing:
if (i > j) 
    return i;
else
    return j;

we could write:

return i > j ? i : j;
*/


