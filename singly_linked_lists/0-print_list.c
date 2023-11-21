#include "lists.h"
#include <stdio.h>
/**
 * print_list - a function that prints all the elements of a list_t.
 * @h:h
 * Return: numero de nodos
 */
size_t print_list(const list_t *h)
{
	unsigned int numero_nodos = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		numero_nodos++;
	}
	return (numero_nodos);
}
