#include "holberton.h"
/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: the num
 * @index: the index of the bit to return
 * Return: the value of the bit, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned int maxb;

	maxb = sizeof(n) * 8;
	if (index > maxb)
		return (-1);
	mask = 1;
	mask <<= index;
	*n |= mask;
	return (1);
}
