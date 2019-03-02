#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers
 * @argc: number of args
 * @argv: array of args
 * Return: Awlays 0, unless error then 1
 */
int main(int argc, char *argv[])
{
	int a;

	if (argc == 3)
	{
		a = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", a);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
