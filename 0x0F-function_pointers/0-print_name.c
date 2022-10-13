#include "function_pointers.h"

/**
 * print_name - prints name.
 * @name: the character to print
 * @(*f)(char *): function pointer to use.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
	f(name);
}
