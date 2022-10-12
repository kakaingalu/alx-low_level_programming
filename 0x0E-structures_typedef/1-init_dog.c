#include "dog.h"

/**
 * init_dog - initializes the type struct dog
 * @d: the name of variable of type struct dog to be initialized.
 * @name: the first string to inialize.
 * @age: the float to initialize.
 * @owner: the second string to initialize.
 *
 * Return: void always succeful.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner
	}
}
