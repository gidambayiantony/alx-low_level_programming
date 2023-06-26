#include "main.h"

/**
 * _atoi - Convert a string into an integer.
 *
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1, i = 0;
	int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && s[i] >= '0' && s[i] != '\0')
	{
		/* Handle INT_MIN as a special case */
		if (res == -214748364 && s[i] == '8')
		{
			if (sign == -1)
				return (-2147483648);
			return (0);
		}
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}


