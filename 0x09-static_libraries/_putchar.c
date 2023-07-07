#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, returns the character written. On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

