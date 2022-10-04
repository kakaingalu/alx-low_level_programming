#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of the memory allocated
 * @c: the character to use
 *
 * Return: NULL if size is 0 else return pointer to array if NULL fails
 */
char *create_array(unsigned int size, char c)
{
	char *a = malloc(size);

	if (size == 0 || a == 0)
	{
		return (NULL);
	}
	while (size--)
	{
		a[size] = c;
	}
	return (a);
}
