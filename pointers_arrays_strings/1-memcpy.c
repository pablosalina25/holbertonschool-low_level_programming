#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Pointer to the destination memory
 * @src: Pointer to the source memory
 * @n: Number of bytes to copy
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
