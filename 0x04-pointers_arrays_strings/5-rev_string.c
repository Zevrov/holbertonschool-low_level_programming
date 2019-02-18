#include "holberton.h"
/**
* rev_string - reverses a string
* @s: the string being reversed
*/
void rev_string(char *s)
{
	int Temp, x, y;

	y = x - 1;
	x = 0;

	while (x < y)
	{
		Temp = *s[x];
		*s[x] = *s[y];
		*s[y] = Temp;
		x++;
		y++;
	}
}
