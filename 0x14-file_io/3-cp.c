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
 * main - copies from one file to another
 * @ac: argument count
 * @av: list of args
 * Return: 0 on success, exit codes on failure
 */
int main(int ac, char *av[])
{
	int to_z, from_z, rcount, wcount;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	to_z = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 00664);
	if (to_z == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	from_z = open(av[1], O_RDONLY);
	if (from_z == -1)
	{
		dprintf(STDERR_FILENO, "Error:, Can't read from file %s\n", av[1]);
		exit(98);
	}
	rcount = 1024;
	while (rcount == 1024)
	{
		rcount = read(from_z, buffer, 1024);
		if (rcount == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		wcount = write(to_z, buffer, rcount);
		if (wcount == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (close(to_z) == -1)
	{
		dprintf(STDERR_FILENO, "ERROR: Can't close to fd %d\n", to_z);
		exit(100);
	}
	if (close(from_z) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_z);
		exit(100);
	}
	return (0);
}
