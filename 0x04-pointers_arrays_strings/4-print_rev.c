#include "holberton.h"
/**
* print_rev - prints a string followed by a new line
* @s: the string being printed
*/
void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
