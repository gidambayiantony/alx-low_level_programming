#include "main.h"  

/**
 * positive_or_negative - Prints whether a number is positive or negative
 * @i: The number to check
 */
void positive_or_negative(int i)
{
    if (i > 0)
        printf("%d is positive\n", i);
    else if (i < 0)
        printf("%d is negative\n", i);
    else
        printf("0 is zero\n");
}

