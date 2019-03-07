#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concats 2 strings, n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: the amount of s2 being added to s1
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int ct = 0, ct1 = 0, ct2 = 0, ct3 = 0, ct4 = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[ct1] != '\0')
		ct1++;
	while (s2[ct2] != '\0')
		ct2++;
	if (n >= ct2)
		n = ct2;
	n += ct1;
	new = malloc(sizeof(char) * (n + 1));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	while (ct < n)
	{
		if (ct3 < ct1)
		{
			new[ct] = s1[ct3];
			ct3++;
		}
		else if (ct4 < ct2)
		{
			new[ct] = s2[ct4];
			ct4++;
		}
		ct++;
	}
	new[ct] = '\0';
	return (new);
}
