#include "holberton.h"
/**
 * _strlen_recursion - counts the length of a string
 * @s: the string
 * Return: The string length
 */
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
