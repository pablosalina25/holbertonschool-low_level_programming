#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the hash table.
 *
 * Return: A pointer to a newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
	free(hash_table);
	return (NULL);
	}

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table->array == NULL)
	{
	free(hash_table->array);
	return (NULL);
	}

	return (hash_table);
}
