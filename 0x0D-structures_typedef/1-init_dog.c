#include "dog.h"
/**
 * init_dog - initializes the dog
 * @d: the dog being initialized
 * @name: the dog name
 * @age: the dog's age
 * @owner: the dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
