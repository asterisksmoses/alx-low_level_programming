#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_create - Function that creates a hash table
 * @size: IS the size of the array
 * Return: A pointer to the newly created hash node otherwise
 * return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int x;

	hash_table = malloc(sizeof(hash_table));
	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->size = size;

	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		hash_table->array[x] = NULL;
	}

	return (hash_table);
}
