#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - frees dogs
 * @d: the dog being freed
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
