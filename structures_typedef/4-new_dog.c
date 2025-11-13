#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n_copy, *o_copy;
	int len1 = 0, len2 = 0, i;

	if (!name || !owner)
		return (NULL);

	while (name[len1])
		len1++;
	while (owner[len2])
		len2++;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	n_copy = malloc(len1 + 1);
	o_copy = malloc(len2 + 1);
	if (!n_copy || !o_copy)
	{
		free(n_copy);
		free(o_copy);
		free(d);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		n_copy[i] = name[i];
	n_copy[len1] = '\0';

	for (i = 0; i < len2; i++)
		o_copy[i] = owner[i];
	o_copy[len2] = '\0';

	d->name = n_copy;
	d->age = age;
	d->owner = o_copy;

	return (d);
}
