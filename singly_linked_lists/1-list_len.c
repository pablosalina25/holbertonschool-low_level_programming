#include "lists.h"
#include <stdio.h>

/**
 * list_len - a function that returns the number
of elements in a linked list_t list.
 * @h: h
 * Return: the number of elements in a linked list_t
 */
size_t list_len(const list_t *h)
{
	unsigned int elementos_list = 0;

	while (h)
	{
		h = h->next;
		elementos_list++;
}
		return (elementos_list);
}
