#include "holberton.h"
/**
* print_sign - prints if the value is positive, negative
* or 0.
* @n: is the number being tested
* Return: 1 if positive, 0 if 0, -1 if negative.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
