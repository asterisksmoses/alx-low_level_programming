#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - Function that returns the index of a key
 * @key: The input value to be used
 * @size: The size of the key
 * Return: The index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);

	unsigned long int idx = hash_value % size;

	return (idx);
}
