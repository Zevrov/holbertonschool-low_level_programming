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
	int i;
	int sum;
	int x;
	
	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x] != '\0'; x++)
		{
			if (isalpha(argv[i][x]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				for (i = 1; i < argc; i++)
				{
					sum += atoi(argv[i]);
				}
				printf("%d\n", sum);
				return (0);
			}
		}
	}
	if (argc == 1)
		printf("0\n");
	return (0);
}
