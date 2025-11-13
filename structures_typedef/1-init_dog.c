#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a struct dog
 * @d: pointer to the struct dog to initialize
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
