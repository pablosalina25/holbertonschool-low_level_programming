#include "lists.h"
/**
 * print_dlistint - A function that prints
 * all the elements of a dlistint_t list.
 * @h: Pointer to a node.
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int a = 0;

	if (h == NULL)
	
	return (a);

	for (; h->prev != NULL; h = h->prev);

	for (; h != NULL; h = h->next)

	{
	printf("%d\n", h->n);
	a++;
	}

	return (a);
}
