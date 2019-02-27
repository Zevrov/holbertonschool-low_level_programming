#include "holberton.h"
/**
 *
 *
 */
int is_palindrome(char *s)
{
	char *p;

	if (*s != '\0')
	{
		is_palindrome(s + 1);
		p = s;
		p++;
		len++;
	}
	len -= 1;
	s -= len;
	if (*p == *s)
		return (1);
	else
		return (0);
}
