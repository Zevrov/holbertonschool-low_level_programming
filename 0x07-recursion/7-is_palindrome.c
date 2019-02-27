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
		return (1);
	}
	if (z[s] != z[e])
	{
		return (0);
	}
	if (s < e + 1)
	{
		return (ispal(z, s + 1, e - 1));
	}
	return (1);
}
/**
 * _strlen_recursion - counts the length of a string
 * @s: the string
 * Return: The string length
 **/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
 * is_palindrome - checks if the string is a palindrome
 * @s: the string
 * Return: 1 for a palindrome 0 if not
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	if (n == 0)
	{
		return (1);
	}
	return (ispal(s, 0, n - 1));
}
