#include "holberton.h"
/**
* print_last_digit - prints the last digit of a number
* @n: the number that is being used to print
* Return: returns 0
*/
int print_last_digit(int n)
{
	n = _abs(n);
	if (n > 9)
	{
		n = n % 10;
	}
	_putchar(n + '0');
	return (n);
}
