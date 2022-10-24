#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node_end - add node to end of list
 *
 * @head: head of list
 * @str: string
 *
 * Return: address of node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a, *b;
	int i;

	a = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);
	if (*head != NULL)
	{
		b = *head;
		i = 0;
		while (b->next != NULL)
		{
			b = b->next;
			i++;
		}
		b->next = a;
	}
	else
		*head = a;
	a->next = NULL;
	a->str = strdup(str);
	i = 0;
	while (str[i])
		i++;
	a->len = i;
	return (a);
}
