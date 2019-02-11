#include "holberton.h"
/**
* _isalpha - returns 1 or 0
* depending on if the character is capitalized or not.
* @c: the character that is looked at.
* Return: Returns 1 if capital, 0 if not.
*/
int _isalpha(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
