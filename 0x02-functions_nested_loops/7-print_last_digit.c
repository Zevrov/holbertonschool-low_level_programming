#include "holberton.h"
/**
* print_last_digit - prints the last digit of a number
* @n: the number that is being used to print
* Return: returns the value of the last digit of n
*/
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = ((n < 0) ? (-n) : (n));
	}
	if (n > 9)
	{
		n = n % 10;
	}
	_putchar(n + '0');
	return (n);
}
