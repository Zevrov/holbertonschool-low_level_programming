#include "holberton.h"
/**
* rev_string - reverses a string
* @s: the string being reversed
*/
void rev_string(char *s)
{
<<<<<<< HEAD
	char *src, *end, t;

	if (*src == '\0')
		return;
	*src = s;
	*end = src + _strlen(s) - 1;
	while (end > src)
	{
		t = *end;
		*end-- = *src;
		*src++ = t;
=======
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
>>>>>>> 5c769df6258fbd67a054dc828f3a1c7be86fd501
	}
}
