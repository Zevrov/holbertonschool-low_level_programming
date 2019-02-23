#include "holberton.h"
/**
 * rot13 - converts to rot13
 * @z: the string
 * Return: rot 13 string
 **/
char *rot13(char *z)
{
	int x, y;
	char a[] = "abcdefghijklmABCDEFGHIJKLM";
	char b[] = "nopqrstuvwxyzNOPQRSTUVWXYZ";

	for (x = 0; z[x] != '\0'; x++)
	{
		z[x] = z[x] - 13;
		for (y = 0; a[y] != '\0'; y++)
		{
			if (z[x] + 13 == a[y])
				z[x] = b[y];
		}
	}
	return (z);
}
