#include "holberton.h"
/**
* _abs - returns the absolute value of an integer
* @int: the integer you want the absolute value of
* Return: Returns 0
*/
int _abs(int n)
{
	if (n => 0)
	{
		return (n);
	}
	if (n < 0)
	{
		return ((n * -1));
	}
	return (0);
}
