#include "holberton.h"
/**
* print_rev - prints a string followed by a new line
* @s: the string being printed
*/
void print_rev(char *s)
{
	while (*s != '\0')
	{
		s++;
	}
	while (*s >= '\0')
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
