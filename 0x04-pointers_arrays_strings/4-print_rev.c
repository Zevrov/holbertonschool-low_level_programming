#include "holberton.h"
/**
* _puts - prints a string followed by a new line
* @str: the string being printed
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
