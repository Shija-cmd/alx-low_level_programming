#include "hash_tables.h"

/**
 * key_index - The index of a key.
 * @key: Key, a string.
 * @size: Size of the array of the hash table.
 *
 * Return: Index number for the key or value pair in the hash table array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
