#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* create_array - creates an array
* @size: the size of the array
* @c: what's in the array
* Return: the array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	i = 0;
	if (size == 0)
		return ('\0');
	str = malloc((size + 1) * sizeof(char));
	if (!str)
		return ('\0');
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
