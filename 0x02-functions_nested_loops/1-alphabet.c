#include "holberton.h"
/**
* print_alphabet - print the lowercase alphabet backwards.
*/
void print_alphabet(void)
{
	int Z;

	for (Z = 'a'; Z <= 'z'; Z++)
	{
		_putchar(Z);
	}
	_putchar('\n');
}
