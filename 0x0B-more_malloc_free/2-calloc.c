#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _memset - fills memory with a constant byte
 * @s: the area being looked at
 * @b: the byte filling memory
 * @n: the amount of memory being filled
 * Return: the new memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory
 * @nmemb: mem amount
 * @size: mem size
 * Return: returns the pointer to the memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *new;

	if (size == 0 || nmemb == 0)
		return (NULL);
	new = malloc(size * nmemb);
	if (!new)
	{
		free(new);
		return (NULL);
	}
	_memset((void *)new, 0, size * nmemb);
	return (new);
}
