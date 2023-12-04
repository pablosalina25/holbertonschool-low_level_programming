#include "hash_tables.h"
/**
 * key_index - A Function that returns the index of a key
 * @key: The key, string
 * @size: The size of the array
 * Return: Index where is the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
