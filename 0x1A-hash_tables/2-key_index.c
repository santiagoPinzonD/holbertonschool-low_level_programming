#include "hash_tables.h"

/**
 * key_index - function that return a index
 * @size: the size of the array
 * @key: the key passed for main
 * Return: pointer to the newly created hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index;

	index = (hash_djb2(key) % size);
	return (index);
}
