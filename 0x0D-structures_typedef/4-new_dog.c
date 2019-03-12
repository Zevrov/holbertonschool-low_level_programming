#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcpy - copies the string pointed to by src including the terminating
 * null byte \0, to the buffer pointed to by dest.
 * @dest: the buffer
 * @src: string being copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *cpyresult = dest;

	if ((dest != '\0') && (src != '\0'))
	{
		while (*src != '\0')
			*dest++ = *src++;
		*dest = '\0';
	}
	return (cpyresult);
}
/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: always length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
/**
 * new_dog - the new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: the dog or NULL if failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *pupper;
	char *namecpy, *ownercpy;

	pupper = malloc(sizeof(dog_t));
	if (!pupper)
	{
		free(pupper);
		return (NULL);
	}
	namecpy = malloc(_strlen(name) + 1);
	if (!namecpy)
	{
		free(pupper);
		free(namecpy);
		return (NULL);
	}
	ownercpy = malloc(_strlen(owner) + 1);
	if (!ownercpy)
	{
		free(pupper);
		free(namecpy);
		free(ownercpy);
		return (NULL);
	}
	namecpy = _strcpy(namecpy, name);
	ownercpy = _strcpy(ownercpy, owner);
	pupper->name = namecpy;
	pupper->age = age;
	pupper->owner = ownercpy;
	return (pupper);
}
