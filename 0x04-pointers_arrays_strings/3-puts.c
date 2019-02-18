#include "holberton.h"
/**
* _puts - prints a string followed by a new line
* @str: the string being printed
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
