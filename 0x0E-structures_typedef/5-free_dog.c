#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function that frees a dog
 * @d: A pointer to the type dot_t
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
