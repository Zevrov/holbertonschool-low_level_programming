#include "holberton.h"
/**
 * puts_half - prints half the string followed by a new line
 * @str: the string being printed
 */
void puts_half(char *str)
{
	int n, len = 0;
	char *a;

	while (*str != '\0')
	{
		str++;
		len++;
	}
	a = (str - len);
	if (!(len % 2))
		n = (len / 2);
	else
		n = ((len - 1) / 2);
	while (*a != '\0')
	{
		if (*a > n)
			_putchar(*a);
		a++;
	}
	_putchar('\n');
}
