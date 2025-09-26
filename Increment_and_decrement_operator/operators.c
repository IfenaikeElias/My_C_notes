#include <stdio.h>

int main(void){
    int i = 1;
    int j = 1;
    printf("j is %d\n", j--); /* This prints " j is 1" */
    printf("j is %d\n", j ); /* This prints "j is 0" */
    return 0;
}