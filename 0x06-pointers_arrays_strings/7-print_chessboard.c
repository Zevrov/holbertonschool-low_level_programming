#include "holberton.h"
/**
 *
 *
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i] != a[8]; i++)
	{
		for (j = 0; a[i][j] != a[i][8];)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
	}
	_putchar('\n');	
}
