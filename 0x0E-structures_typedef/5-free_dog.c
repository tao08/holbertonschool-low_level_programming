#include "dog.h"

/**
 * free_dog - this is a funtion for free the dogs.
 * @d:puntero que apunta a una struct dogs
 * Return: Always 0.
 */

void free_dog(dog_t *d)
{
	if (d == '\0')
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
