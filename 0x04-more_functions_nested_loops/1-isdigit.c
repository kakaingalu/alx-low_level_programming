#include "main.h"

/**
 * _isdigit - checks for a digit through 0 and 9.
 * @c: The character to check.
 *
 *Return: 0 or 1 always successful
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
