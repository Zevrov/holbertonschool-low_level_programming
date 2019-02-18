#include "holberton.h"
/**
* rev_string - reverses a string
* @s: the string being reversed
*/
void rev_string(char *s)
{
	int len, z;
	char *B, *E, temp;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	B = s;
	E = s;

	for (z = 0; z < len -1; z++)
		E++;
	for (z = 0; z < len / 2; z++)
	{
		temp = *E;
		*E = *B;
		*B = temp;

		B++;
		E++;
	}
}
