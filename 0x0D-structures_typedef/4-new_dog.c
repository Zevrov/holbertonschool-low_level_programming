#include "dog.h"
/**
 * new_dog - the new dog
 * 
 *
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	new_dog = malloc(sizeof(struct dog_t));
	if (new_dog == NULL)
		return (NULL);
	user->name = name;
	user->age = age;
	user->owner = owner;
	return (new_dog);
}

