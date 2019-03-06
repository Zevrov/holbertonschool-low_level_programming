#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a new string
 * @str: the string being copied
 * Return: the pointer to the new string
 */
char *_strdup(char *str)
{
	int j = 0, i = 0;
	char *new;

	if (str == NULL)
		return ('\0');
	while (str[i] != '\0')
		i++;
	new = malloc(i + 1 * sizeof(str));
	if (new == NULL)
		return (NULL);
	while (j < i)
	{
		new[j] = str[j];
		j++;
	}
	new[i] = '\0';
	return (new);
}
