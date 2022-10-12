#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog in the memory.
 * @d: the argument to use
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
