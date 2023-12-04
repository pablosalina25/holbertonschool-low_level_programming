#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to a hash table.
 * @ht: The hash table.
 * @key: The key (string).
 * @value: The value associated with the key.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(ht, key, value)
    hash_table_t *ht;
    const char *key;
    const char *value;
{
    unsigned long int index;

    if (!ht || !key || !value)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);

    hash_node_t *current = ht->array[index];
    while (current)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = strdup(value);
            return (current->value ? 1 : 0);
        }
        current = current->next;
    }

    hash_node_t *new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
        return (0);

    new_node->key = strdup(key);
    new_node->value = strdup(value);

    if (!new_node->key || !new_node->value)
    {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return (0);
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}

