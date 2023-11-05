#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory
 * for an array, using malloc.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 * Return: A pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *punter;
	unsigned int z;

	if (!size || !nmemb)
	return (NULL);

	punter = malloc(size * nmemb);

	if (!punter)
	return (NULL);
	z = 0;
	while (z < size * nmemb)
	{
	punter[z] = 0;
	z++;
	}
	return (punter);
}

