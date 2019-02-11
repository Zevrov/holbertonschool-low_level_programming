#include <stdio.h>

/**
* main - prints if the characters are lowercase or not
* 0 for not lowercase, 1 for lowercase
* Return: Always 0.
*/
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
