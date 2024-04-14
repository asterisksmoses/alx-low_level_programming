#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

int handle_existing_key(hash_node_t *node, const char *key, const char *value);
int create_and_insert_node(hash_table_t *ht, unsigned long int idx,
                const char *key, const char *value);

/**
 * hash_table_set - Function that adds an element to the hash table
 * @ht - The hash table to be used
 * @key - The key value to be used
 * @value - The value of the key
 * Return: 1 upon success and 0 if otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;

	if (!ht || !key || strlen(key) == 0)
	{
		return (0);
	}
	idx = key_index((const unsigned char *)key, ht->size);

	if (handle_existing_key(ht->array[idx], key, value) == 1)
		return (1);

	if (create_and_insert_node(ht, idx, key, value) == 1)
		return (1);

	return (0);
}

/**
 * handle_exs_key - This function handles the existing key
 * @node: The code to check for the key
 * @key: The key being added
 * @value: The value associated with the key
 * Return: 1 upon success and 0 upon failure
 */

int handle_existing_key(hash_node_t *node, const char *key, const char *value)
{
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (node->value == NULL)
			{
				return (0);
			}

			return (1);
		}
		node = node->next;
	}
	return (0);
}

/**
 * create_and_ins_node - Function that creates and inserts a node
 * @ht: Input Value
 * @idx: The index to insert new node at
 * @key: The key for the new node
 * @value: The value for the new node
 * Return: 1 upon success and 0 otherwise
 */

int create_and_insert_node(hash_table_t *ht, unsigned long int idx,
		const char *key, const char *value)
{
	 hash_node_t *node_n = malloc(sizeof(hash_node_t));

	 if (!node_n)
	 {
		 return (0);
	 }
	 node_n->key = strdup(key);
	 node_n->value = strdup(value);
	 if (!node_n->key || !node_n->value)
	 {
		 free(node_n->key);
		 free(node_n->value);
		 free(node_n);
		 return (0);
	 }

	 node_n->next = ht->array[idx];
	 ht->array[idx] = node_n;

	 return (1);
}
