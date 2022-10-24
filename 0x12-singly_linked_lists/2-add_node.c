#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds node to start of list
 * @head: head of list
 * @str: cstring
 *
 * Return: pointer to node
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new;

	i = 0;
	while (str[i])
		i++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = i;
	new->next = *head;
	*head = new;
	return (*head);
}
