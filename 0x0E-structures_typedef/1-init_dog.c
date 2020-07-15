#include "dog.h"
/**
 * init_dog - funtion iniciali
 * @d: puntero struct
 * @name: puntero tipe char
 * @age: this is a variable
 * @owner: variabre propietario
 *
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
