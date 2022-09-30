# include <stdio.h>
#include <stdlib.h>

/**
 * main - prints it name.
 * @argc: first argument.
 * @argv: Second argument.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
