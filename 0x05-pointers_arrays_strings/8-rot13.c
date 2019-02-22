#include "holberton.h"
/**
 * rot13 - converts to rot13
 * @z: the string
 * Return: rot 13 string
 **/
char *rot13(char *z)
{
	int x, y;
	char a[] = "abcdefghijklm";
	char A[] = "ABCDEFGHIJKLM";

	for (x = 0; z[x] != '\0'; x++)
	{
		for (y = 0; a[y] != '\0'; y++)
		{
			if (z[x] == a[y] || z[x] == A[y])
				z[x] = z[x] + 13;
			else
				z[x] = z[x] - 13;
		}
	}
	return (z);
}
