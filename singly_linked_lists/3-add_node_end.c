#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: The first node.
 * @str: The string.
 * Return: Address of the new element or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	if (!str)
	return (NULL);

	list_t *endnode;

	endnode = malloc(sizeof(list_t));

	if (!endnode)
	{
	free(endnode);
	return (NULL);
	}
	endnode->str = strdup(str);
	endnode->len = strlen(str);
	endnode->next = NULL;
	}
}
