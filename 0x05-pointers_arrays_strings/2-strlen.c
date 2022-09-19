#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: the parameter to change.
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
