#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @s: the area being looked at
 * @b: the byte filling memory
 * @n: the amount of memory being filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return(p);
}
