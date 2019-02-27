#include "holberton.h"
/**
 * factorial - prints a number's factorial
 * @n: the number
 * Return: the number's factorial or -1
 * if a negative number is entered
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
