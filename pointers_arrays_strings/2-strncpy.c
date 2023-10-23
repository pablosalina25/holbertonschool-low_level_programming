#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the destination string.
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int cadena1 = 0;

	while (src[cadena1] && cadena1 < n)
	{
	dest[cadena1] = src[cadena1];
	cadena1++;
	}
	while (cadena1 < n)
	{
	dest[cadena1] = '\0';
	cadena1++;
	}
	return (dest);
}
