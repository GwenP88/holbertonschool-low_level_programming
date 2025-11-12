#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dogs.
 *
 * @d: pointer to struct dog_t to initialize
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		free(NULL);

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
