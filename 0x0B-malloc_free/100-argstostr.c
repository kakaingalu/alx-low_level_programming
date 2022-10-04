#include "main.h"

/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */


int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		return (size);
}

/**
 * *str_addChar - adds two strings
 * @str: first argument
 * @c: second argument
 * Return: pointer
 */
char *str_addChar(char *str, char c)
{
	int size, a;
	char *b;

size = _strlen(str);

b = malloc((size + 1) * sizeof(char) + 1);
if (b == 0)
	return (0);

for (a = 0; a <= size; a++)
	m[a] = str[a];

b[a + 1] = c;
b[a + 2] = '\0';

return (b);
}


/**
 * *nbr_spaces - return the number of occurent of a string
 * @s: string to check
 * Return: int
 */

unsigned int nbr_spaces(char *s)
{
	int a, cmpt = 0;

	for (a = 0; s[a + 1] != '\0'; a++)
	{
		if (s[a]  == ' ' && s[a + 1] != ' ')
			cmpt++;
	}

	return (cmpt + 1);
}


/**
  *strtow - split a sentence into multiple words.
  *@str: the string passed as argument.
  *Return: tokens
  */
char **strtow(char *str)
{
int a;
int spaces = nbr_spaces(str);
char **tokens = NULL;
char *token;
int checkingSpace = 0;
int word = 0;

if (!tokens)
{
	printf("Failed");
	return (0);
}

printf("looping");
for (a = 0; str[a] != '\0'; a++)
{
	if (str[a] == ' ')
	{
		if (checkingSpace == 0)
		{
			word++;
			checkingSpace = 1;
		}
	}
	else
	{
		printf("1");
		token = tokens[word];
		free(tokens[word]);
		str_addChar(token, str[a]);
		checkingSpace = 0;
	}

}

tokens[a] = NULL;
