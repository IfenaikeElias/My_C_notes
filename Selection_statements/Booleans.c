#include <stdio.h>
#include <stdbool.h>

// in other to use bools in C99 conviniently
// we would want to introduce the stdbool libary to prevent us writing a lot tof code
int main(void){
    _Bool flag_1 = true;
    _Bool flag_2 = false;

    if (flag_1) {
        printf("True\n");
    }
    if (!flag_2) {
        printf("Not False");
    }

}