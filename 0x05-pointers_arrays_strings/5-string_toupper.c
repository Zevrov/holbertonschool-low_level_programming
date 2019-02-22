#include "holberton.h"
/**
 * string_toupper - makes string all uppercase
 * @Z: the string being changed
 * Return: the string
 */
char *string_toupper(char *Z)
{
	char *upper = Z;

	for (; *upper != '\0'; upper++)
	{
		if (*upper >= 97 && *upper <= 122)
		{
			*upper = *upper - 32;
		}
	}
	return (Z);
}
