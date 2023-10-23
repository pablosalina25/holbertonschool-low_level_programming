#include "main.h"

/**
 * char *_strncat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * Return: Pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
	{
	int a = 0;
	int b = 0;

	while (dest[a])
		a++;
	while ((dest[a] = src[b]))
	{
		a++;
		b++;
	}
	return (dest);
}
