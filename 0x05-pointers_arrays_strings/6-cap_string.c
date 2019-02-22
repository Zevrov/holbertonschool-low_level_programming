#include "holberton.h"
/**
 * cap_string - capitalizes first words
 * @Z: the string
 * Return: the string altered
 */
char *cap_string(char *Z)
{
	char a[] = "\n\t .,;:(){}/\'\"?!";
	int x, y;

	for (x = 0; Z[x] != '\0'; x++)
	{
		if (x == 0 && Z[x] >= 'a' && Z[x] <= 'z')
			Z[x] = Z[x] - 32;
		for (y = 0; a[y] != '\0'; y++)
		{
			if (Z[x] == a[y])
			{
				x++;
				if (Z[x] >= 'a' && Z[x] <= 'z')
					Z[x] = Z[x] - 32;
				else
				{
					x++;
					if (Z[x] >= 'a' && Z[x] <= 'z')
						Z[x] = Z[x] - 32;
				}
			}
		}
	}
	return (Z);
}
