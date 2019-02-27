#include "holberton.h"
/**
 *
 *
 */
int _sqrt_recursion(int n, int z)
{
	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);
	if ((z * z) < n)
		return (_sqrt_recursion(n ,z + 1));
	if ((z * z) == n)
		return (z);
}
	
