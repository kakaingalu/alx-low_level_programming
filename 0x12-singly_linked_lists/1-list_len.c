#include "lists.h"

/**
 * list_len - returns number of elements in a linked list_t list.
 * @h: the argument to pass in the function.
 *
 * Return: number of elements in  linked list.
 */
size_t list_len(const list_t *h)
{
	size_t num;

	for (num = 0; h; num++)
	{
		h = h->next;
	}
	return (num);
}
