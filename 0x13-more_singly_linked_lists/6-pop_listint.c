#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list.
* @head: argument to use.
*
* Return: head node's data, if empty return 0.
*/
int pop_listint(listint_t **head)
{
listint_t *f;
int n;

if (head == NULL || *head == NULL)
{
return (0);
}
f = *head;
*head = f->next;
n = f->n;
free(f);
return (n);
}
