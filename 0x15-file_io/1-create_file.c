#include "main.h"

/**
 * _strlen -finds length of a string
 * @str: pointer to the string
 *
 * Return: length of the string 
 */
size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
/**
 * create_file - creates a file 
 * @filename: name of the file to create 
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on succes, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fileD;
	ssize_t len = 0;

	if (filename == NULL)
		return(-1);
	fileD = open(filename, o_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fileD == -1)
		return(-1);
	if (text_content != NULL)
		len = write(fileD, text_content, _strlen(text_content));
	close(fileD);
	if (len == -1)
		return (-1);
	return (1);
}
