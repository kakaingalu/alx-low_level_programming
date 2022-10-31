#include "main.h"

/**
 *  * binary_to_uint - converts binary to unsigned int
 *   * @b: pointer to binary num
 *    *
 *     * Return: unsigned int
 *      */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = 0;

	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
		i++;
	}

	while (b[j] == '0' || b[j] == '1')
	{
		num <<= 1;
		num += b[j] - '0';

		j++;

	}
	return (num);
}
