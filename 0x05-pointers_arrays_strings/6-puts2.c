#include "main.h"

/**
 * puts2 - prints every other character of a string to stdout.
 * @str: string to print.
 *
 * Return: void
 */
void puts2(char *str)
{
	int k = 0;

	while (*(str + k))
	{
		_putchar(*(str + k));
		k = k + 2;
	}
	_putchar('\n');
}
