#include "dog.h"

/**
 * free_dog - function that frees dogs.
 * @d: struct dog
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->owner != NULL)
		free(d->owner);
	if (d->name != NULL)
		free(d->name);

	free(d);
}
