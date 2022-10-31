#include "main.h"

/**
 * print_binary - prints the binary rep of unsigned int
 * @n: unsigned int
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i;

	if (n > 1)
		print_binary(n >> 1);

	i = n & 1;

	_putchar(i + '0');
}
