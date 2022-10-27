#include "lists.h"

/**
* sum_listint - returns the sum of all the data (n) of a listint_t linked list.
* @head: argument to pass in function.
*
* Return: 0 if empty else returns the sum of all the data.
*/
int sum_listint(listint_t *head)
{
size_t sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
