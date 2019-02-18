#include "holberton.h"
/**
* rev_string - reverses a string
* @s: the string being reversed
*/
void rev_string(char *s)
{
	char *src, *end, t;

	if (*src == '\0')
		return;
	*src = s;
	*end = src + _strlen(s) - 1;
	while (end > src)
	{
		t = *end;
		*end-- = *src;
		*src++ = t;
	}
}
