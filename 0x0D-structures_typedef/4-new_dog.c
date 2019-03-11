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
	char *namecpy = name;
	char *ownercpy = owner;
	
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
	free(pupper);
	return (pupper);
}
