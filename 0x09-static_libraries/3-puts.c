#include "main.h"

/**
 * _puts - prints string to stdout.
 * @str: the pointer.
 *
 * Return: 0 always.
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
