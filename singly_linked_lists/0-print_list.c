#include "lists.h"
#include <stdio.h>

/**
 * print_list - A function that prints all the elements of a list_t.
 * @h: h
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
	unsigned int numero_nodos = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		numero_nodos++;
	}
	return (numero_nodos);
}
