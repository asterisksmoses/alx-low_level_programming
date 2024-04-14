#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Function that prints a hash table
 * @ht: The hash table to be used
 */

void hash_table_print(const hash_table_t *ht)
{
	int is_ft;
	unsigned long int x;
	hash_node_t *node_n;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	is_ft = 1;

	for (x = 0; x < ht->size; x++)
	{
		node_n = ht->array[x];
		while (node_n != NULL)
		{
			if (!is_ft)
			{
				printf(", ");
			}
			else
			{
				is_ft = 0;
			}
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

