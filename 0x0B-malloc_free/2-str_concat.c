#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */


int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	return (size);
}

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, b;
	char *a;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	a = malloc((size1 + size2) * sizeof(char) + 1);
	if (a == 0)
		return (0);

	for (b = 0; b <= size1 + size2; b++)
{
	if (b < size1)
		a[b] = s1[b];
	else
		a[b] = s2[b - size1];
}
	a[b] = '\0';
	return (a);
}
