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
	int i = 0;
	char *new;

	new = malloc(40 * sizeof(char));
	while (i < 10)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	if (*new == '\0')
		return ('\0');
	if (!*new)
		return ('\0');
	else
		return (new);
}
