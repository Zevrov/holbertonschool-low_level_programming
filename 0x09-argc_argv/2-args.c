#include <stdio.h>
/**
 * main - prints the arguments
 * @argc: the number of args
 * @argv: the array of args
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
