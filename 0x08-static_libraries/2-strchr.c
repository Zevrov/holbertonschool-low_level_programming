#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 * Return: NULL if not found, otherwise s after the character is located
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	for (; *p != '\0'; p++)
	{
		if (*p == c)
			return (p);
	}
	if (*p == c)
		return (p);
	return (0);
}
