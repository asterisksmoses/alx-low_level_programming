#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - Function that creates a new dog
 * @name: Name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = (dog_t *)malloc(sizeof(dog_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->name = strdup(name);
	new->owner = strdup(owner);

	if (new->name == NULL || new->owner == NULL)
	{
		free(new);
		exit(EXIT_FAILURE);
	}
	new->age = age;
	return (new);
}
