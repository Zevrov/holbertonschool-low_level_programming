#include "holberton.h"
/**
 * puts2 - print one char out of 2 of a string, followed by a new line
 * @str: the string being printed
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (!(i % 2))
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
