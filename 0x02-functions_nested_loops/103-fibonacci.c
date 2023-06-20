#include <stdio.h>

/**
 * main - Finds and prints the sum of the even-valued terms
 *        in the Fibonacci sequence below 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int prev1 = 1, prev2 = 2, current;
	unsigned long int sum = 2; /* Start with 2 since it's the first even term */

	while (prev2 <= 4000000)
	{
		current = prev1 + prev2;
		if (current % 2 == 0)
			sum += current;
		prev1 = prev2;
		prev2 = current;
	}

	printf("%lu\n", sum);

	return (0);
}

