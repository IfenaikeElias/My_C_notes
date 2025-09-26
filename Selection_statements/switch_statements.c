#include <stdio.h>

/*
instead using a bunch of if else statement we can reort to switch in C. 
they have defaults like in Go and can allow for fallthrough but lack the fallthrough key word I think
*/

int main(void){
    int grade;
    printf("Enter a grade between 0 and 4: ");
    scanf("%d", &grade);
    /* Instead of doing this:

    if (grade == 4)
        printf("Excellent");
    else if (grade == 3)
        printf("Good");
    else if (grade == 2)
        printf("Average");
    else if (grade == 1)
        printf("Poor");
    else if (grade == 0)
        printf("Failing");
    else
        printf("Illegal grade");
    */
    // we can use switch statement instead:
    switch (grade)
    {
    case 4:
        printf("Excellent");
        break;
    case 3:
        printf("Good");
        break;
    case 2:
        printf("Average");
        break;
    case 1:
        printf("Poor");
        break;
    case 0:
        printf("Failing");
    default: printf("Illegal grade");
        break;
    }
    return 0;
}
