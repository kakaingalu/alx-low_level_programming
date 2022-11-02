#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filname: name of the file to read 
 * @letters: number of letters ir dhould read or write
 * Return: actual number of letters it could read and write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileD;
	ssize_t readL, writeL;
	char *buffer;

	if (filename == NULL)
		return (0);
	fileD = open(filename, O_RDONLY);
	if (fileD == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fileD);
		return (0);
	}
	readL = read(fileD, buffer, letters);
	close(fileD);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	writeL = write(STDOUT_FILENO, buffer, readL)	     free(buffer);
	if (readL != writL)
		return (0);
	return (writeL);
}

