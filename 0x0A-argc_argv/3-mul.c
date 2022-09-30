# include <stdlib.h>
# include <stdio.h>
/**
 * main - multiplies two numbers.
 * @argc: first argument.
 * @argv: second argument.
 *
 * Return: if 0 no error else 1.
 */
int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	k = i * j;
	printf("%d\n", k);
	return (0);
}
