#include "holberton.h"
/**
 * _puts_recursion - prints a string using recursion
 * @s: the string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	if (*s == '\0')
		_putchar('\n');
}
