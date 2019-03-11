#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints info about the dog
 * @d: the dog being printed
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (!d->age)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
