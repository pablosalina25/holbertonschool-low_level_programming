#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: The first node.
 * @str: The string.
 * Return: Address of the new element or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endnode;
	list_t *tmp;

	if (!str)
	return (NULL);

	endnode = malloc(sizeof(list_t));
	if (!endnode)
	{
	free(endnode);
 	return (NULL);
    }
