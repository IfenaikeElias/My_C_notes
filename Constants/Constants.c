#include <stdio.h>

// we might often have a variable that repeats itselfs in our code and the value neverchanghes
// we can name this values as constantas to ensure we don't change them by mistake
// example is 166 in our box weight code from variables

// We can define constants using a feature knonwn as macrodefinition

#define INCHIES_PER_PERIOD 166

// #define is a preprocessinf derivative just like #include and has no semicolon after it

int main(void){
    int height = 8, length = 12, width = 10;
    // doing int height, length, width = 10; 
    // will only assign the width to 10 and height and length remain unitialized
    int volume = height * length * width;
    int weight = (volume + INCHIES_PER_PERIOD - 1) / INCHIES_PER_PERIOD;
    printf("Dimension: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inchies): %d\n)", volume);
    printf("Weight (pounds): %d\n", weight);

    return 0;
}