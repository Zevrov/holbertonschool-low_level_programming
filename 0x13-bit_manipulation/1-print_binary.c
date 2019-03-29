#include "holberton.h"
/**
 * print_binary - converts decimal to binary and prints
 * @n: the input
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	unsigned int Z;

	Z = 0;
	mask = 0;
	mask = ~mask;
	mask >>= 1;
	mask = ~mask;
	if (n == 0)
		_putchar('0');
	while (mask > 0)
	{
		if ((n & mask) == 0 && Z != 1)
		{
			mask = mask >> 1;
			continue;
		}
		if ((n & mask) != 0)
		{
			Z = 1;
			_putchar('1');
		}
		else
			_putchar('0');
		mask = mask >> 1;
	}
}
