#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
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
	char *namecpy;
	char *ownercpy;
	int i = 0;

	ownercpy = malloc(sizeof(char *));
	if (!ownercpy)
		free(ownercpy);
	namecpy = malloc(sizeof(char *));
	if (!namecpy)
		free(namecpy);
	pupper = malloc(sizeof(struct dog));
	if (!pupper)
		return (NULL);
	pupper->name = name;
	pupper->age = age;
	pupper->owner = owner;
	if ((ownercpy[i] != '\0') && (owner[i] != '\0'))
	{
		while (owner[i] != '\0')
		{
			ownercpy[i] = owner[i];
			i++;
		}
		ownercpy[i] = '\0';
	}
	i = 0;
	if ((namecpy[i] != '\0') && (name[i] != '\0'))
	{
		while (name[i] != '\0')
		{
			namecpy[i] = name[i];
			i++;
		}
		namecpy[i] = '\0';
	}
	return (pupper);
}
