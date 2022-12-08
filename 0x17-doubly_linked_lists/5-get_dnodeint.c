#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the
 * nth node of a dlistint_t linked list.
 *
 * @head: head of the list
 * @index: nth node
 *
 * Return: nth mode or NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = head;
	if (index == 0)
	{
		return (temp);
	}

	while (temp && n <= index - 1)
	{
		n++;
		temp = temp->next;
	}
	return (temp);
}
