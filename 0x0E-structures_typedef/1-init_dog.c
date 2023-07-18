#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable
 * @d: input value
 * @name: input value
 * @age: input value
 * @owner: input value
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
