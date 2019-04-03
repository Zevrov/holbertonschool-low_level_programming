#include "holberton.h"
/**
 * _strlen - return string length
 * @s: the string
 * Return: the length
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		;
	return (x);
}
/**
 * create_file - makes file
 * @filename: the name of the file
 * @text_content: new string for the file
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int z;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	z = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (z == -1)
		return (-1);
	write(z, text_content, _strlen(text_content));
	close(z);
	return (1);
}
