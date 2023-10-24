#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Pointer to the destination memory
 * @src: Pointer to the source memory
 * @n: Number of bytes to copy
 *
 * Return: A pointer to the destination memory (i.e., 'dest')
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
