#include "holberton.h"
/**
 * _strspn - finds the length of a prefix substring
 * @s: the string
 * @accept: the characters that are being matched
 * Return: the length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p = s;
	char *o = accept;
	int len = 0, i, k;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (len != i)
			break;
		for (k = 0; o[k] != '\0'; k++)
		{
			if (p[i] == o[k])
				len++;
		}
	}
	return (len);
}
