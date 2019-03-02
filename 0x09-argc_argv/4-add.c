#include <stdio.h>
#include <stdlib.h>
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
	
	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
		if (atoi(argv[i]) <= '0' || atoi(argv[i]) >= '9')
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
		}
	return (0);
}
