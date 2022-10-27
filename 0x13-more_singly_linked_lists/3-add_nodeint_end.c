#include "lists.h"

/**
* add_nodeint_end - adds node at the end of listsint_t list.
* @head: first argument to use.
* @n: second argument to use.
* Return: address of the new element or NULL if failed.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *tmp = *head;
new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
if (tmp == NULL)
{
*head = new_node;
return (new_node);
}
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = new_node;
return (new_node);
}
