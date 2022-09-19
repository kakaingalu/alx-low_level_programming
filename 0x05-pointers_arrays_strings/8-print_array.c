#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements in the Array a
 * @a: array to print
 * @n: number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int j = 0;

	while (j < n)
	{
		printf("%d", a[j]);
		if (j < (n - 1))
			printf(", ");
		j++;
	}
	printf("\n");
}


