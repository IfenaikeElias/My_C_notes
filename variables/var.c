#include <stdio.h>

int height;
float profit;

int x, y, z;
float a, b;

// when main contains declarations they must preceed statements

// before a variable can be assigned it must be declared.
// it is usually advisable to add f to the back of a float as the compiler might throw a warning
/*int main(void){
    // declarations
    int num;
    float dec;
    // assignment
    num = 8;
    dec = 56.4f;
    printf("Height: %d\n", num);
    printf("profit: $%.2f\n", dec);
    // statements
}
*/
// mixing types in C is possible unlike Go but not always safe
//  we are also allowed to use placeholders in C

/*
int main(void){
    int height, length, width, volume, weight;
    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165)/ 166;
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inchies): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
    */

// in Go if we declare a variable it value is set to it zero value by default
// but in C that is not the case the value is actually set to some random value in a particular range such as 2568, -30891
// worse cas the compiler might complain and our code may crash if we used this unitialized variables
// besides assignment we can assign the varaibles upon declaration using a initializer

int w = 8;
// in this case 8 is the initializer.

// we can rewrite the boxing code using this.

int main(void){
    int height = 8, length = 12, width = 10;
    // doing int height, length, width = 10; 
    // will only assign the width to 10 and height and length remain unitialized
    int volume = height * length * width;
    int weight = (volume + 165) / 166;
    printf("Dimension: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inchies): %d\n)", volume);
    printf("Weight (pounds): %d", weight);

    return 0;
}