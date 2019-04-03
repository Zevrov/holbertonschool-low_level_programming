#include "holberton.h"
/**
 * _strlen - returns the length of the string
 * @s: string
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		;
	return (x);
}
/**
 * append_text_to_file - appends text to a file
 * @filename: the file name
 * @text_content: text to add to file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int z;

	if (filename == NULL)
		return (-1);
	z = open(filename, O_WRONLY | O_APPEND, S_IWUSR);
	if (z == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(z);
		return (1);
	}
	write(z, text_content, _strlen(text_content));
	close(z);
	return (1);
}
