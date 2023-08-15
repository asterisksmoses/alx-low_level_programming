#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string
 * @str: The string that is to be measured
 * Return: The length of the string
 */

int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}

/**
 * _strcpy - Function that copies a string
 * @dest: Input value
 * @src: Input value
 * Return: A pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int indxy = 0;

	for (indxy = 0; src[indxy]; indxy++)
		dest[indxy] = src[indxy];
	dest[indxy] = '\0';
	return (dest);
}

/**
 * new_dog - Function that creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	doggy->name = _strcpy(doggy->name, name);
	doggy->age = age;
	doggy->owner =  _strcpy(doggy->owner, owner);

	return (0);
}
