#include "holberton.h"
/**
* rev_string - reverses a string
* @s: the string being reversed
*/
void rev_string(char *s)
{
	int len = 0;
	char temp;
	char *a;
	char *b;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	a = (s - len);
	b = (s - 1);
	for (; a < b; a++, b--)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}
