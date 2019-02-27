#include "holberton.h"
/**
 * _pow_recursion - puts x to the power of y
 * @x: x
 * @y: y
 * Return: returns -1 if y is negative
 * or x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return(-1);
	if (y == 0)
		return (1);
	else if (y % 2 == 0)
		return (_pow_recursion(x, y / 2) * _pow_recursion (x, y / 2));
	else
		return (x * _pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
}
