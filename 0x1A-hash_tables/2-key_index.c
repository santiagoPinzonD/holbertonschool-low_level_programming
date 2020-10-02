#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array
 * Return: pointer to the newly created hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
 {
    unsigned int index;

    index = (hash_djb2(key) % size);
    return (index);
 }