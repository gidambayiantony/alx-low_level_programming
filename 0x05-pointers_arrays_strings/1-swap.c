#include "main.h"

/**
 * swap_int - Swaps the value of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

