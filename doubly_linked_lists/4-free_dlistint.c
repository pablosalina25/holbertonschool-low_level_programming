#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: head of the dlistin_t
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *count, *next;

	for (count = head; count != NULL; count = next)
	{
	next = count->next;
	free(count);
	}
}
