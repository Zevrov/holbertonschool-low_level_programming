#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - returns a pointer to allocated mem
 * @b: the amount of memory
 * Return: returns new or 98
 */
void *malloc_checked(unsigned int b)
{
	void *new;

	new = malloc(b);
	if (!new)
		exit(98);
	return (new);
}
