#include "hash_tables.h"

/**
 * hash_djb2 - Function that implememnets the djb2 algorithm
 * @str: The string to be hashed
 * Return: The Hash value as an unsigned long int
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
