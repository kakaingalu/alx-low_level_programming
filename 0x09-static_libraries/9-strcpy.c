#include "main.h"

/**
 * _strcpy - copies string pointed to by src buffer pointed to by dest
 * @src: source to copy
 * @dest: destination of copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (*(src + j))
	{
		*(dest + j) = *(src + j);
		j++;
	}
	*(dest + j) = '\0';
	return (dest);
}
