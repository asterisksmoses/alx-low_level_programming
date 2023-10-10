#include "dog.h"
#include <stdlib.h>

int _strlen(char *xyz);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string
 * @xyz: The string to be measured
 * Return: The length of the string
 */

int _strlen(char *xyz)
{
	int length = 0;

	while (*xyz++)
		length++;
	return (length);
}

/**
 * _strcopy - Function that copies a string pointed by another pointer
 * @dest: Input value
 * @src: Input value
 * Return: A pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
	int xy = 0;

	for (xy = 0; src[xy]; xy++)
		dest[xy] = src[xy];
	dest[xy] = '\0';

	return (dest);
}

/**
 * new_dog - Function that creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: The new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mcx;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	mcx = malloc(sizeof(dog_t));

	if (mcx == NULL)
		return (NULL);

	mcx->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (mcx->name == NULL)
	{
		free(mcx);
		return (NULL);
	}
	mcx->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (mcx->owner == NULL)
	{
		free(mcx->name);
		free(mcx);
		return (NULL);
	}
	mcx->name = _strcopy(mcx->name, name);
	mcx->age = age;
	mcx->owner = _strcopy(mcx->owner, owner);

	return (mcx);
}
