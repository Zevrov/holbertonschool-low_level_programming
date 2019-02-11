#include "holberton.h"
/**
* print_alphabet - print the lowercase alphabet backwards.
* Return: Always 0.
*/
int print_alphabet(void)
{
	int Z;

	for (Z = 'a'; Z <= 'z'; Z++)
	{
		_putchar(Z);
	}
	_putchar('\n');
}
