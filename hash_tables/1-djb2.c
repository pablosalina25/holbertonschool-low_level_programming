#include "hash_tables.h"

/**
 * hash_djb2 - Hash function that
 * implementing the djb2 algorithm
 * @str: string
 * Return: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;

	for (; *str; ++str)
	{
	hash = ((hash << 5) + hash) + *str;
	}

	return (hash);
}
