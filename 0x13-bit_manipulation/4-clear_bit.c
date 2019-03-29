#include "holberton.h"
/**
 * clear_bit - sets the value of the bit to 0 at an index
 * @n: the num
 * @index: where the bit is
 * Return: the value of the bit or -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned int maxb;

	maxb = sizeof(n) * 8;
	if (index > maxb)
		return (-1);
	mask = 1;
	mask <<= index;
	mask = ~mask;

	*n &= mask;
	return (1);
}
