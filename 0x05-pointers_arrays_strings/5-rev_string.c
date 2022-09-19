#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string to reverse.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int u = 0, z = 0;
	char str[500];

	while (*(s + u))
	{
		*(str + u) = *(s + u);
		u++;
	}
	u = u - 1;
	while (u >= 0)
	{
		*(s + u) = *(str + z);
		z++;
		u--;
	}
}
