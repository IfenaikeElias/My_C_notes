#include <stdio.h>

// we can take in inputs using the scanf the printf counterpart for C
// scanf("%d", &i)  reads an integer and stores it in i
// %d tells scanf to read an integer %f is for float

// computing dimension weight of a box revisited 

int main(void){
    int height, length, width;

    printf("Enter height of the box: ");
    scanf("%d", &height);
    printf("Enter height of the box: ");
    scanf("%d", &length);
    printf("Enter height of the box: ");
    scanf("%d", &width);

    int volume = height * length * width;
    int weight = (volume + 165)/166;

    printf("Volume (cubic inchies): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
