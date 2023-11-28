#include "lists.h"
/**
 * free_list - A function that liberate the allocated memory
 * @head: Double pointer to a linked list
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
