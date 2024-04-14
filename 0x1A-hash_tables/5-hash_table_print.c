#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Function that prints a hash table
 * @ht: The hash table to be used
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *node_n;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	for (x = 0; x < ht->size; x++)
	{
		node_n = ht->array[x];
		while (node_n != NULL)
		{
			printf("\"%s\": \"%s\"", node_n->key, node_n->value);
			node_n = node_n->next;

			if (node_n != NULL || ((x + 1) < ht->size && ht->array[x + 1] != NULL))
			{
				printf(", ");
			}
		}
	}
	printf("}\n");
}

