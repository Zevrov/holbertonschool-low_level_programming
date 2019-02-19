#include "holberton.h"
/**
 * puts2 - print one char out of 2 of a string, followed by a new line
 * @str: the string being printed
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		if (!(*str % 2))
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
