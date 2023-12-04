#include "hash_tables.h"

/**
 * Retrieves the value associated with a key in the hash table.
 * @hash_table: The hash table.
 * @key: The key.
 *
 * Returns the value associated with the key, or NULL if not found.
 */
char *hash_table_get(const hash_table_t *hash_table, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	if (hash_table == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, hash_table->size);
	current_node = hash_table->array[index];

	for (; current_node && strcmp(key, current_node->key)
!= 0; current_node = current_node->next)
		;
	return (current_node ? current_node->value : NULL);
}
