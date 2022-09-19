#include "main.h"

/**
 * swap_int - changes the initials in a & b.
 * @a: the first parameter to change.
 * @b: the second parameter to change.
 */
void swap_int(int *a, int *b)
{
	int t = *a;

	*a = *b;
	*b = t;
}
