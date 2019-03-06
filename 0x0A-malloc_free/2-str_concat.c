#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concats 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns the string or null
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0, len = 0;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
		k++;
	}
	while (s2[j] != '\0')
	{
		i++;
		j++;
	}
	len = i;
	new = malloc(len + 1 * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (l < k)
	{
		new[i] = s1[l];
		l++;
		i++;
	}
	l = 0;
	while (l < j)
	{
		new[i] = s2[l];
		l++;
		i++;
	}
	return (new);
}
