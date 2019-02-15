#include "holberton.h"
/**
 * print_number - prints the number
 * @n: the number being printed
 */
void print_number(int n)
{
	int R;
	char Z, L;

	if (n < 0)
	{
		_putchar('-');
		L = ('0' - (n % 10));
		n /= -10;
	}
	else
	{
		L = ('0' + (n % 10));
		n /= 10;
	}
	R = 0;
	while (n > 0)
	{
		R = R * 10 + (n % 10);
		n /= 10;
	}
	while (R > 0)
	{
		Z = ((R % 10) + '0');
		_putchar(Z);
		R /= 10;
	}
	_putchar(L);
}
