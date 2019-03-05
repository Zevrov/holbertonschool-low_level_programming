#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* create_array - creates an array
* @size: the size of the array
* @c: what's in the array
* Returns: the array
*/
char *create_array(unsigned int size, char c);
{
	if (size == 0)
		return ('\0');
	char *str = malloc(10 * sizeof(char));
	return (str);
}
