#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: the number of arg
 * @argv: the array of arg
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int count;

	while (argv[i] != '\0' || i == argc - 1)
	{
		count++;
		i++;
	}
	printf("%d\n", count);
	return (0);
}
