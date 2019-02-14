#include "holberton.h"
/**
 * print_numbers - prints digits 0-9
 */
int _putchar(char c);
void print_numbers(void)
{
	int Z;

	for (Z = 0; Z <= 9; Z++)
	{
		_putchar('0' + Z);
	}
	_putchar('\n');
}
