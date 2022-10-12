#include <stdio.h>
#include "dog.h"


/**
 * print_dog - print a struct dog.
 * @d: the struct to print.
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("(nil)");
	}
	else if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
