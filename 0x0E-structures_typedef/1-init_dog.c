#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Function that initializes a variable of type
 * struct dog
 * @d: A pointer to the struct dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: Nothing
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
