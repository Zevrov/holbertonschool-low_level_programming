#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @z: the string
 * Return: The encoded string
 */
char *leet(char *z)
{
	char l[] = "aAeEoOtTlL";
	char num[] = "43071";
	int x, y;

	for (x = 0; z[x] != '\0'; x++)
	{
		for (y = 0; l[y] != '\0'; y++)
		{
			if (z[x] == l[y])
				z[x] = num[y / 2];
		}
	}
	return (z);
}
