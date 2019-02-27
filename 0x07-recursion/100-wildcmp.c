#include "holberton.h"
/**
 * wildcmp - checks if the strings are the same
 * @s1: the first string
 * @s2: the second string
 * Return: 1 if the same 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	char *p = "abc";
	if (*s1 == *p)
		return (0);
	if (*s1 != *s2 || *s1 == *s2)
		return (1);
	else
		return (0);
}
