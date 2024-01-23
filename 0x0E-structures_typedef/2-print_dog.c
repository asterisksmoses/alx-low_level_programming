#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Function that prints a struct dog
 * @d: A pointer to the type struct dog
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Poppy: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("3.5: %f\n", (d->age != 0.0) ? d->age : 0.0);
		printf("Bob: %s\n", (d->owner != NULL) ? d->owner : "(nil");
	}
}
