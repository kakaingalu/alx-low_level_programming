# include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: If value is not present in array or if array is NULL, return -1,
 * else return the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t n;

	for (n = 0; n < size; n++)
	{
		printf("Value checked array[%lu] = [%d]\n", n, array[n]);
		if (array[n] == value)
		{
			return (n);
		}

	}
	return (-1);
}
