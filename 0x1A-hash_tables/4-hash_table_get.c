#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - A function that retrieves a value associated with a key
 * @ht: The table to be used as input
 * @key: The key to be returned
 * Return: The value associated with the element, otherwise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node_n;

	if (!ht || !key || strlen(key) == 0)
	{
		return (NULL);
	}

	idx = key_index((const unsigned char *)key, ht->size);
	node_n = ht->array[idx];

	while (node_n != NULL)
	{
		if (strcmp(node_n->key, key) == 0)
		{
			return (node_n->value);
		}
		node_n = node_n->next;
	}
	return (NULL);
}
