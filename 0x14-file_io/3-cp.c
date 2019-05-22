#include "holberton.h"
/**
 * main - copies from one file to another
 * @argc: argument count
 * @argv: list of args
 * Return: 0 on success, exit codes on failure
 */
int main(int argc, char *argv[])
{
	int to_z, from_z, rcount, wcount;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	to_z = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 00664);
	from_z = open(argv[1], O_RDONLY);
	rw_checker(to_z, from_z, argv[2], argv[1]);
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
/**
 * rw_checker - makes sure the files are able to be
 * read and written to/from
 * @to: the value from the open function of the file being written to
 * @from: the value from the open function of the file being read from
 * @to_file: the name of the file being written to
 * @from_file: the name of the file being read from
 */
void rw_checker(int to, int from, char to_file, char from_file)
{
	if (to == -1 || from == -1)
	{
		if (to == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", to_file);
			exit(99);
		}
		if (from == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from %s\n", from_file);
			exit(98);
		}
	}
}
