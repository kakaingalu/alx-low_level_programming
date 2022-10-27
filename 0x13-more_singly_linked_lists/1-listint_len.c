#include <stdio.h>
#include "lists.h"

/**
* listint_len - returns number of elements linked listint_t list.
* @h: The argument to use.
*
* Return: return number of elements.
*/
size_t listint_len(const listint_t *h)
{
size_t counter = 0;

if (h == NULL)
{
return (0);
}
while (h)
{
h = h->next;
counter++;
}
return (counter);
}
