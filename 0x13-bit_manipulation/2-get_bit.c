#include "holberton.h"
/**
 * get_bit - return the value of a bit
 * @n: the number
 * @index: where the bit is
 * Return: the value of the bit or -1 on failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	unsigned int maxb;

	maxb = sizeof(n) * 8;
	if (index > maxb)
		return (-1);
	mask = 1;
	mask <<= index;

	if (n & mask)
		return (1);
	else
		return (0);
}
