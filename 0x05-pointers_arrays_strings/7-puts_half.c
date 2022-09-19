#include "main.h"

/**
 * _puts_half - prints second half of a string.
 * @str: string to print.
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int a, b, c;

	for (b = 0; str[b] != '\0'; b++)
	{
	}

	if ((b % 2) == 0)
		c = (b / 2);
	else
		c = (b + 1) / 2;
	
	for (a = c; a < b; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
