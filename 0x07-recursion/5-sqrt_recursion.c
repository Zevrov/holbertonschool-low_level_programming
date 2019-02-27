#include "holberton.h"
/**
 * _sqrt - finds the square root of a number
 * @n: the number
 * @z: the test for a square
 * Return: the square root or -1
 */
int _sqrt(int n, int z)
{
	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);
	if ((z * z) > n)
		return (-1);
	if ((z*z) == n)
		return (z);
	if ((z * z) < n)
		return (_sqrt(n, z + 1));
	return (0);
}
/**
 * _sqrt_recursion - finds the square root of a number
 * @n: the number
 * Return: The Square root or -1
 */
int _sqrt_recursion(int n)
{
		return (_sqrt(n, 1));
}
