#include "holberton.h"
/**
 * flip_bits - flip the bits
 * @n: the input of long int
 * @m: the input of long int
 * Return: flip the numbers after comparing
 */
unsigned int flip_bits(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;
	unsigned long int Z;

	Z = n ^ m;
	while (Z > 0)
	{
		if (Z & 1)
			count++;
		Z = Z >> 1;
	}
	return (count);
}
