#include "main.h"

/**
 * _put_recursion - prints a string followed by new line.
 * &s: the character to print.
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (*s != 0)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		return;
	}
	_putchar('\n');
}
