#include "lists.h"

/**
* add_nodeint - adds new node at the beginning of a listint_t list.
* @head: first argument to use.
* @n: second argument to use.
* Return: address of the new element or NULL if failed.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = *head;
new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}

