#include "lists.h"


/**
 * print_list - prints all element of a list_t list
 * @h: pointer to the start of the list
 *
 * Return: number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	const list_t *u;
	unsigned int i;

	u = h;
	for (i = 0 ; u ; i++)
	{
		printf("[%u] %s\n", u->len, u->str);
		u = u->next;
	}
	return (i);
}
