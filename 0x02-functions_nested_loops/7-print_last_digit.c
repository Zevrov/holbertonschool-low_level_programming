#include "holberton.h"
/**
* print_last_digit - prints the last digit of a number
* @n: the number that is being used to print
* Return: returns n after the last digit remains
*/
int print_last_digit(int n)
{
	_abs(n);
	if (n >= 10)
	{
		n % 10;
	}
	_putchar(n);
	return (n);
}
