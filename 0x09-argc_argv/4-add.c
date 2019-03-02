#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds numbers
 * @argc: the number of args
 * @argv: the array of args
 * Return: Awlays 0 unless the number contains symbols that aren't digits
 */
int main(int argc, char *argv[])
{
	int i, x, z, sum, isnum = 1;

	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x] != '\0'; x++)
		{
			if (isalpha(argv[i][x]))
			{
				printf("Error\n");
				isnum = 0;
			}
		}
	}
	if (isnum != 0)
	{
		for (z = 1; z < argc; z++)
		{
			sum += atoi(argv[z]);
		}
		printf("%d\n", sum);
		return (0);
	}
	if (i == 1)
		printf("0\n");
	return (0);
}
