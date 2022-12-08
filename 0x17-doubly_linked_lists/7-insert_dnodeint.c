#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at index
 * @idx: index
 * @n: node
 * @h: list head
 * Return:the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (*h == NULL)
	{
		if (idx == 0)
		{
			*h = new;
			return (new);
		}
		return (NULL);
	}
	temp = *h;
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	new->next = temp->next;
	temp->next = new;
	new->prev = temp;
	new->next->prev = new;
	return (new);
}
