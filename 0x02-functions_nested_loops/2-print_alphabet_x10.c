#include "holberton.h"
/**
* print_alphabet_x10 - print the lower case alphabet 10 times
*/
void print_alphabet_x10(void)
{
	int i;
	int Z;

	for( i = 0; i <=9; i++)
	{
		for (Z = 'a'; Z <= 'z'; Z++)
		{
			_putchar(Z);
		}
		_putchar('\n');
	}
}
