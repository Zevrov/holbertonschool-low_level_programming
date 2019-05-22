#include "holberton.h"
/**
 * main - copies from one file to another
 * @argc: argument count
 * @argv: list of args
 * Return: 0 on success, exit codes on failure
 */
int main(int argc, char *argv[])
{
	int to_z, from_z, rcount, wcount, close_error;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	to_z = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 00664);
	if (to_z == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	from_z = open(argv[1], O_RDONLY);
	if (from_z == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	rcount = 1024;
	while (rcount == 1024)
	{
		rcount = read(from_z, buffer, 1024);
		if (rcount == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wcount = write(to_z, buffer, rcount);
		if (wcount == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_error = close(to_z);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "ERROR: Can't close to fd %d\n", to_z);
		exit(100);
	}
	close_error = close(from_z);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_z);
		exit(100);
	}
	return (0);
}
