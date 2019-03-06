#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int count_a = 0, c1 = 0, c2 = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (c1 < ac)
	{
		c2 = 0;
		while (av[c1][c2] != '\0')
		{
			count_a++;
			c2++;
		}
		c1++;
	}
	count_a = count_a + ac + 1;
	str = malloc(sizeof(char) * count_a);
	if (str == NULL)
	{
		return (NULL);
	}
	for (c1 = 0; c1 < ac; c1++)
	{
		for (c2 = 0; av[c1][c2] != '\0'; c2++)
		{
			str[c] = av[c1][c2];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
