#include "holberton.h"
/**
 *
 *
 */
void _puts_recursion(char *s)
{	
	if (*s == '\0')
		return;
	_putchar(*s);
	s++;
	_puts_recursion(s);
	if (*s == '\0')
		_putchar('\n');
}
