#include <stdio.h>
#include "lists.h"
/**
* print_listint - prints all the elements.
* @h: The argument to pass.
*
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t c = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
c++;
}
return (c);
}
