#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: the file name
 * @letters - what's in the file
 * Return: the number of letters for reading and printing
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(sizeof(char) * (letters + 1));
	int result, Z;

	if (filename == NULL || buffer == NULL || letters <= 0)
		return (0);
	Z = open(filename, O_RDONLY | O_CREAT, 00400);
	if (Z == -1)
		return (0);
	result = read(Z, buffer, letters);
	if (result == -1)
		return (0);
	buffer[letters + 1] = '\0';
	write(STDOUT_FILENO, buffer, result);
	free(buffer);
	close(Z);
	return (result);
}
