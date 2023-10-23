#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to concatenate from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len])
	dest_len++;
	while (src[i] && i < n)
	{
	dest[dest_len] = src[i];
	dest_len++;
	i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
