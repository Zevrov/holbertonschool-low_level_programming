#include "holberton.h"
/**
 * ispal - checks if the string is a palindrome
 * @z: the string
 * @s: the start
 * @e: the end
 * Return: 1 if a palindrome, 0 if not
 */
int ispal(char *z, int s, int e)
{
	if (s == e)
	{
		return (0);
	}
	if (z[s] == z[e])
	{
		return (ispal(z, s + 1, e - 1));
	}
	else
	{
		return (1);
	}
	return (0);
}
/**
 * is_palindrome - checks if the string is a palindrome
 * @s: the string
 * Return: 1 for a palindrome 0 if not
 */
int is_palindrome(char *s)
{
	int n = 0;
	char *p = s;

	while (*p != '\0')
	{
		s++;
		n++;
	}
	if (n == 0)
	{
		return (1);
	}
	if (ispal(s, 0, n - 1))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
