#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - a function that allocates
 * memory with malloc.
 * @b: string to allocate.
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *punter = malloc(b);

	if (punter == NULL)
	{
	exit(98);
	}
	return (punter);
}
