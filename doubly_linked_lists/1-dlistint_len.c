#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements in
 * a linked dlistint_t list.
 * @h: head of the dlistint_t
 * Return: (node)
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	for (; h != NULL; h = h->next)
	{
	node++;
	}
	return (node);
}
