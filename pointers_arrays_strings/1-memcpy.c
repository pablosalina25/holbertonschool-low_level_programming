#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
	*dest++ = *src++;
	n--;
	}
	return (dest);
}
