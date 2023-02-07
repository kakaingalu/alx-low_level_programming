#include "lists.h"
/**
 * free_listint- frees list
 * @head: pointer to the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;

		head = head->next;

		free(tmp);
	}
}
