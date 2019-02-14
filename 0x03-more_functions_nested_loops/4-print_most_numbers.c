#include "holberton.h"
/**
 * print_most_numbers - prints numbers 0-9 if they aren't 2 or 4
 */
void print_most_numbers(void)
{
	int Z;

	for (Z = '0'; Z <= '9'; Z++)
		if (Z != '2' && Z != '4')
			_putchar(Z);
	_putchar('\n');
}
