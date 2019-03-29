#include "holberton.h"
/**
 * binary_to_uint - convert binary number to u int
 * @b: the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0, 2pow = 1;
	int count = 0;

	if (!b)
		return (0);
	while (b[count] != '\0')
		count++;
	count--;
	while (count >= 0)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
		uint += (b[count] - '0') * 2pow;
		count--;
		2pow *= 2;
	}
	return (uint);
}
